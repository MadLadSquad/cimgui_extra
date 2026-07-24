# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## What this repository is

`cimgui_extra` (https://github.com/MadLadSquad/cimgui_extra) — hand-written C APIs for popular dear imgui widget libraries:

| Wrapper | Upstream C++ library | Function prefix |
| --- | --- | --- |
| `cimgui-knobs.{h,cpp}` | [imgui-knobs](https://github.com/altschuler/imgui-knobs) | `ImGuiKnobs_` |
| `cimgui_toggles.{h,cpp}` | [imgui_toggle](https://github.com/cmdwtf/imgui_toggle) | `ImGui_` |
| `cimspinner.{h,cpp}` | [imspinner](https://github.com/dalerank/imspinner) | `ImSpinner_` |

Every source file is a thin forwarding shim — the wrapper does argument casting only, never logic. End-user docs live on the [wiki](https://github.com/MadLadSquad/cimgui_extra/wiki/HOME).

This repo has **no build system, no tests, and no CI build**. The only workflow (`.github/workflows/release.yaml`) tars the tree on a `v*` tag. Consumers add this directory's parent to their include path and compile the `.cpp` files directly.

In this checkout it is a git submodule of UntitledImGuiFramework at `Framework/ThirdParty/source-libraries/cimgui/cimgui_extra`; the framework's `Framework/cmake/SetupSources.cmake` `GLOB_RECURSE`s `source-libraries/*.cpp`, so these files are *always* in the framework's compile list — the `__has_include` guards (below) are what actually turn them on and off. Commits here belong to the standalone `cimgui_extra` repo, not the framework.

## Verifying a change compiles

There is no build target, so syntax-check against the framework's vendored upstream headers:

```bash
P=../../../../../Framework   # UntitledImGuiFramework/Framework
g++ -fsyntax-only -I. \
    -I"$P/ThirdParty/source-libraries/cimgui" \
    -I"$P/ThirdParty/imgui" -I"$P/ThirdParty/imgui/core" \
    -I"$P/Modules/Spinners/ThirdParty/imspinner" \
    -I"$P/Modules/Knobs/ThirdParty/imgui-knobs" \
    -I"$P/Modules/Toggles/ThirdParty/imgui_toggle" \
    cimspinner.cpp cimgui-knobs.cpp cimgui_toggles.cpp
```

Dropping an `-I` makes the corresponding translation unit expand to nothing rather than fail — a "successful" compile proves nothing unless the matching upstream header is on the path. To confirm a wrapper is really being built, `g++ -E ... | grep <symbol>`.

## Conventions to follow when adding wrappers

**Conditional-compilation guards.** Headers open with:

```c
#ifdef __has_include
#if __has_include(<upstream.h>)
```

and the `.cpp` guards on the upstream header (the knobs/toggles pair also requires `<cimgui.h>`). Both close with two bare `#endif`s. This lets consumers drop the whole set in unconditionally and have unavailable libraries vanish.

*Known inconsistency:* `cimgui_toggles.cpp:2` guards on `<imgui-knobs.h>`, not `<imgui_toggle.h>`, so the toggle implementations only compile when the knobs headers also happen to be on the include path. Preserve or fix deliberately — don't "clean it up" without checking downstream builds.

**Export macro.** Everything public is `MLS_PUBLIC_API` (declared in `cimgui_extra_common.h`): `__declspec(dllexport/dllimport)` on Windows under `MLS_EXPORT_LIBRARY`/`MLS_LIB_COMPILE`, empty elsewhere. Structs get it too (`typedef struct MLS_PUBLIC_API ...`).

**Types.** `cimgui_extra_common.h` defines `CImXVec2`/`CImXVec4` as anonymous-union structs (`coords[N]` aliasing `x/y/z/w`) — layout-compatible with `ImVec2`/`ImVec4`/`ImColor`. C++ structs cross the boundary as pointers to a mirrored plain-C struct, then `reinterpret_cast` back in the `.cpp` (see `ImGui_TogglePalette` / `ImGui_ToggleConfig`). `cimspinner.cpp` uses `#define CCAST(x) *reinterpret_cast<const ImColor*>(x)` for every color argument. `const` goes on parameters in the `.cpp` definitions but not in the header declarations; do not `const`-qualify a `va_list`.

**Enums and flags.** Flag/enum *typedefs* keep the upstream-ish name (`ImGuiKnob_Flags`, `ImGui_ToggleFlags`, both `typedef int`), while enum *members* take a leading `C` (`CImGuiKnob_Variant_Tick`, `CImGuiToggleFlags_Animated`). Values must be copied verbatim from upstream, comments included.

**Default arguments.** C has none: either expose a short overload plus an `...Ex` variant taking every parameter (knobs), or take all parameters and document upstream's defaults in a comment block above the declaration.

**Formatting.** `cimspinner.h` declares functions in column-aligned blocks grouped by arity, with related spinners kept adjacent. Match the surrounding alignment when adding entries; the `.cpp` keeps one blank line between one-line forwarding bodies, in the same order as the header.

## Updating for a new upstream release

Upstream libraries live in the *framework's* submodules (`Framework/Modules/{Spinners,Knobs,Toggles}/ThirdParty/`), not here. When upstream adds widgets, add the declaration to the header and the forwarding body to the `.cpp` in matching order, then syntax-check as above. Commit messages in this repo are short and descriptive ("New cimspinner text spinners", "New spinner arguments").

## graphify

This project has a knowledge graph at graphify-out/ with god nodes, community structure, and cross-file relationships.

Rules:
- For codebase questions, first run `graphify query "<question>"` when graphify-out/graph.json exists. Use `graphify path "<A>" "<B>"` for relationships and `graphify explain "<concept>"` for focused concepts. These return a scoped subgraph, usually much smaller than GRAPH_REPORT.md or raw grep output.
- If graphify-out/wiki/index.md exists, use it for broad navigation instead of raw source browsing.
- Read graphify-out/GRAPH_REPORT.md only for broad architecture review or when query/path/explain do not surface enough context.
- After modifying code, run `graphify update .` to keep the graph current (AST-only, no API cost).
