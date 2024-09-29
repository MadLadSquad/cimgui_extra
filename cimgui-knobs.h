#pragma once
#ifdef __has_include
#if __has_include(<imgui-knobs.h>) && __has_include (<cimgui.h>)

#include "cimgui_extra_common.h"

#ifdef __cplusplus
extern "C"
{
#endif

    typedef struct ImGuiKnob_color_set_t ImGuiKnob_color_set_t;
    typedef int ImGuiKnob_Flags;
    typedef int ImGuiKnob_Variant;

    typedef enum ImGuiKnob_Flags_
    {
        CImGuiKnob_flags_None            = 0,
        CImGuiKnob_Flags_NoTitle         = 1<<0,
        CImGuiKnob_Flags_NoInput         = 1<<1,
        CImGuiKnob_Flags_ValueTooltip    = 1<<2,
        CImGuiKnob_Flags_DragHorizontal  = 1<<3,
        CImGuiKnob_Flags_DragVertical    = 1<<4,
    } ImGuiKnob_Flags_;

    typedef enum ImGuiKnob_Variant_
    {
        CImGuiKnob_Variant_Tick      = 1<<0,
        CImGuiKnob_Variant_Dot       = 1<<1,
        CImGuiKnob_Variant_Wiper     = 1<<2,
        CImGuiKnob_Variant_WiperOnly = 1<<3,
        CImGuiKnob_Variant_WiperDot  = 1<<4,
        CImGuiKnob_Variant_Stepped   = 1<<5,
        CImGuiKnob_Variant_Space     = 1<<6,
    } ImGuiKnob_Variant_;

    typedef struct MLS_PUBLIC_API ImGuiKnob_color_set_t
    {
        CImXVec4 base;
        CImXVec4 hovered;
        CImXVec4 active;
    } ImGuiKnob_color_set;

    MLS_PUBLIC_API bool ImGuiKnobs_Knob(const char* label, float* p_value, float v_min, float v_max);

    // Default values:
    // format = "%.3"
    // variant = CImGuiKnob_Variant_Tick
    // size = 0
    // flags = CImGuiKnob_flags_None,
    // int steps = 10
    // angle_min = -1
    // angle_max = -1
    MLS_PUBLIC_API bool ImGuiKnobs_KnobEx(const char* label, float* p_value, float v_min, float v_max, float speed, const char* format, ImGuiKnob_Variant variant, float size, ImGuiKnob_Flags flags, int steps, float angle_min, float angle_max);
    MLS_PUBLIC_API bool ImGuiKnobs_KnobInt(const char* label, int* p_value, int v_min, int v_max);

    // Default values:
    // format = "%i"
    // variant = CImGuiKnob_Variant_Tick
    // size = 0
    // flags = CImGuiKnob_flags_None,
    // int steps = 10
    // angle_min = -1
    // angle_max = -1
    MLS_PUBLIC_API bool ImGuiKnobs_KnobIntEx(const char* label, int* p_value, int v_min, int v_max, float speed, const char* format, ImGuiKnob_Variant variant, float size, ImGuiKnob_Flags flags, int steps, float angle_min, float angle_max);

#ifdef __cplusplus
}
#endif
#endif
#endif