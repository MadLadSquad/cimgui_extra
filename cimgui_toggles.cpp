#ifdef __has_include
#if __has_include(<imgui-knobs.h>) && __has_include (<cimgui.h>)
#include "cimgui_toggles.h"
#include <imgui_toggle.h>
#include <imgui_toggle_palette.h>


void ImGui_UnionPalette(ImGui_TogglePalette* target, const ImGui_TogglePalette* candidate, const CImXVec4* colors, const bool v)
{
    ImGui::UnionPalette(reinterpret_cast<ImGuiTogglePalette*>(target), reinterpret_cast<const ImGuiTogglePalette*>(candidate), reinterpret_cast<const ImVec4*>(colors), v);
}

void ImGui_BlendPalettes(ImGui_TogglePalette* result, const ImGui_TogglePalette* a, const ImGui_TogglePalette* b, const float blend_amount)
{
    ImGui::BlendPalettes(reinterpret_cast<ImGuiTogglePalette*>(result), *reinterpret_cast<const ImGuiTogglePalette*>(a), *reinterpret_cast<const ImGuiTogglePalette*>(b), blend_amount);
}

bool ImGui_Toggle(const char* label, bool* v, const ImGui_ToggleFlags flags, const float animation_duration, const float frame_rounding, const float knob_rounding, const CImXVec2* size)
{
    return ImGui::Toggle(label, v, flags, animation_duration, frame_rounding, knob_rounding, *reinterpret_cast<const ImVec2*>(size));
}


#endif
#endif