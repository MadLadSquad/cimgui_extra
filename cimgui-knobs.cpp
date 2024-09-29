#ifdef __has_include
#if __has_include(<imgui-knobs.h>) && __has_include (<cimgui.h>)

#include "cimgui-knobs.h"
#include <imgui-knobs.h>

bool ImGuiKnobs_Knob(const char* label, float* p_value, const float v_min, const float v_max)
{
    return ImGuiKnobs::Knob(label, p_value, v_min, v_max);
}

bool ImGuiKnobs_KnobEx(const char* label, float* p_value, const float v_min, const float v_max, const float speed, const char* format, const ImGuiKnob_Variant variant, const float size, const ImGuiKnob_Flags flags, const int steps, const float angle_min, const float angle_max)
{
    return ImGuiKnobs::Knob(label, p_value, v_min, v_max, speed, format, variant, size, flags, steps, angle_min, angle_max);
}

bool ImGuiKnobs_KnobInt(const char* label, int* p_value, const int v_min, const int v_max)
{
    return ImGuiKnobs::KnobInt(label, p_value, v_min, v_max);
}

bool ImGuiKnobs_KnobIntEx(const char* label, int* p_value, const int v_min, const int v_max, const float speed, const char* format, const ImGuiKnob_Variant variant, const float size, const ImGuiKnob_Flags flags, const int steps, const float angle_min, const float angle_max)
{
    return ImGuiKnobs::KnobInt(label, p_value, v_min, v_max, speed, format, variant, size, flags, steps, angle_min, angle_max);
}

#endif
#endif