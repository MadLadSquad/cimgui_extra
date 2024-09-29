#pragma once
#ifdef __has_include
#if __has_include(<imgui_toggle.h>)

#include "cimgui_extra_common.h"

#ifdef __cplusplus
extern "C"
{
#endif

    typedef int ImGui_ToggleFlags;
    typedef int ImGui_Toggle_A11yStyle;
    typedef enum ImGui_ToggleFlags_
    {
        CImGuiToggleFlags_None                   = 0,
        CImGuiToggleFlags_Animated               = 1 << 0, // The toggle's knob should be animated.
                                                           // Bits 1-2 reserved.
        CImGuiToggleFlags_BorderedFrame          = 1 << 3, // The toggle should have a border drawn on the frame.
        CImGuiToggleFlags_BorderedKnob           = 1 << 4, // The toggle should have a border drawn on the knob.
        CImGuiToggleFlags_ShadowedFrame          = 1 << 5, // The toggle should have a shadow drawn under the frame.
        CImGuiToggleFlags_ShadowedKnob           = 1 << 6, // The toggle should have a shadow drawn under the knob.
                                                           // Bit 7 reserved.
        CImGuiToggleFlags_A11y                   = 1 << 8, // The toggle should draw on and off glyphs to help indicate its state.
        CImGuiToggleFlags_Bordered               = CImGuiToggleFlags_BorderedFrame | CImGuiToggleFlags_BorderedKnob, // Shorthand for bordered frame and knob.
        CImGuiToggleFlags_Shadowed               = CImGuiToggleFlags_ShadowedFrame | CImGuiToggleFlags_ShadowedKnob, // Shorthand for shadowed frame and knob.
        CImGuiToggleFlags_Default                = CImGuiToggleFlags_None, // The default flags used when no ImGuiToggleFlags_ are specified.
    } ImGui_ToggleFlags_;

    typedef enum ImGui_Toggle_A11yStyle_
    {
        CImGuiToggleA11yStyle_Label,     // A11y glyphs draw as text labels.
        CImGuiToggleA11yStyle_Glyph,     // A11y glyphs draw as power-icon style "I/O" glyphs.
        CImGuiToggleA11yStyle_Dot,       // A11y glyphs draw as a small dot that can be colored separately from the frame.
        CImGuiToggleA11yStyle_Default    = CImGuiToggleA11yStyle_Label,
    } ImGui_ToggleA11yStyle_;

    typedef struct MLS_PUBLIC_API ImGui_ImOffsetRect
    {
        union
        {
            float offsets[4];
            struct
            {
                float top;
                float left;
                float bottom;
                float right;
            };
        };
    } ImGui_ImOffsetRect;

    typedef struct MLS_PUBLIC_API ImGui_TogglePalette
    {
        CImXVec4 knob;
        CImXVec4 knobHover;
        CImXVec4 frame;
        CImXVec4 frameHover;
        CImXVec4 frameBorder;
        CImXVec4 frameShadow;
        CImXVec4 knobBorder;
        CImXVec4 knobHoverShadow;
        CImXVec4 A11yGlyph;
    } ImGui_TogglePalette;

    typedef struct MLS_PUBLIC_API ImGui_ToggleStateConfig
    {
        float frameBorderThickness;
        float frameShadowThickness;
        float knobBorderThickness;
        float knobShadowThickness;
        const char* label;
        ImGui_ImOffsetRect knobInset;
        CImXVec2 knobOffset;
        const ImGui_TogglePalette* palette;
    } ImGui_ToggleStateConfig;

    typedef struct MLS_PUBLIC_API ImGui_ToggleConfig
    {
        ImGui_ToggleFlags flags;
        ImGui_Toggle_A11yStyle A11yStyle;
        float animationDuration;
        float frameRounding;
        float knobRounding;
        float widthRatio;
        CImXVec2 size;
        ImGui_ToggleStateConfig on;
        ImGui_ToggleStateConfig off;
    } ImGui_ToggleConfig;

    MLS_PUBLIC_API void ImGui_UnionPalette(ImGui_TogglePalette* target, const ImGui_TogglePalette* candidate, const CImXVec4* colors, bool v);
    MLS_PUBLIC_API void ImGui_BlendPalettes(ImGui_TogglePalette* result, const ImGui_TogglePalette* a, const ImGui_TogglePalette* b, float blend_amount);

    MLS_PUBLIC_API bool ImGui_Toggle(const char* label, bool* v, ImGui_ToggleFlags flags, float animation_duration, float frame_rounding, float knob_rounding, const CImXVec2* size);
#ifdef __cplusplus
}
#endif
#endif
#endif