#include "cimspinner.h"

#ifdef __has_include
#if __has_include(<imspinner.h>)
#include <imspinner.h>
#include <imspinner_text.h>
#include <imspinner_bars.h>
#include <imspinner_dots.h>
#include <imspinner_shapes.h>
#include <imspinner_compat.h>

#define CCAST(x) *reinterpret_cast<const ImColor*>(x)

void ImSpinner_SpinnerAngTriple(const char* label, const float radius1, const float radius2, const float radius3, const float thickness, const CImXVec4* c1, const CImXVec4* c2, const CImXVec4* c3, const float speed, const float angle)
{
    ImSpinner::SpinnerAngTriple(label, radius1, radius2, radius3, thickness, CCAST(c1), CCAST(c2), CCAST(c3), speed, angle);
}

void ImSpinner_SpinnerAngTwin(const char* label, const float radius1, const float radius2, const float thickness, const CImXVec4* color, const CImXVec4* bg, const float speed, const float angle, const size_t arcs, const int mode)
{
    ImSpinner::SpinnerAngTwin(label, radius1, radius2, thickness, CCAST(color), CCAST(bg), speed, angle, arcs, mode);
}
 
void ImSpinner_SpinnerTwinBall(const char* label, const float radius1, const float radius2, const float thickness, const float b_thickness, const CImXVec4* ball, const CImXVec4* bg, const float speed, const size_t balls, const int mode)
{
    ImSpinner::SpinnerTwinBall(label, radius1, radius2, thickness, b_thickness, CCAST(ball), CCAST(bg), speed, balls, mode);
}

void ImSpinner_SpinnerTwinHboDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const float minfade, const float ryk, const float speed, const size_t dots, const float delta)
{
    ImSpinner::SpinnerTwinHboDots(label, radius, thickness, CCAST(color), minfade, ryk, speed, dots, delta);
}

void ImSpinner_SpinnerRainbow(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const float ang_min, const float ang_max, const int arcs, const int mode)
{
    ImSpinner::SpinnerRainbow(label, radius, thickness, CCAST(color), speed, ang_min, ang_max, arcs, mode);
}

void ImSpinner_SpinnerRainbowMix(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const float ang_min, const float ang_max, const int arcs, const int mode)
{
    ImSpinner::SpinnerRainbowMix(label, radius, thickness, CCAST(color), speed, ang_min, ang_max, arcs, mode);
}

void ImSpinner_SpinnerAng8(const char* label, const float radius, const float thickness, const CImXVec4* color, const CImXVec4* bg, const float speed, const float angle, const int mode, const float rkoef)
{
    ImSpinner::SpinnerAng8(label, radius, thickness, CCAST(color), CCAST(bg), speed, angle, mode, rkoef);
}

void ImSpinner_SpinnerDots(const char* label, float* nextdot, const float radius, const float thickness, const CImXVec4* color, const float speed, const size_t dots2, const float minth, const int mode)
{
    ImSpinner::SpinnerDots(label, nextdot, radius, thickness, CCAST(color), speed, dots2, minth, mode);
}

void ImSpinner_SpinnerVDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const CImXVec4* bgcolor, const float speed, const size_t dots2, const size_t mdots, const int mode)
{
    ImSpinner::SpinnerVDots(label, radius, thickness, CCAST(color), CCAST(bgcolor), speed, dots2, mdots, mode);
}

void ImSpinner_SpinnerTwinAng(const char* label, const float radius1, const float radius2, const float thickness, const CImXVec4* color1, const CImXVec4* color2, const float speed, const float angle, const int mode)
{
    ImSpinner::SpinnerTwinAng(label, radius1, radius2, thickness, CCAST(color1), CCAST(color2), speed, angle, mode);
}

void ImSpinner_SpinnerTwinAng180(const char* label, const float radius1, const float radius2, const float thickness, const CImXVec4* color1, const CImXVec4* color2, const float speed, const float angle, const int mode)
{
    ImSpinner::SpinnerTwinAng180(label, radius1, radius2, thickness, CCAST(color1), CCAST(color2), speed, angle, mode);
}

void ImSpinner_SpinnerTwinAng360(const char* label, const float radius1, const float radius2, const float thickness, const CImXVec4* color1, const CImXVec4* color2, const float speed1, const float speed2, const int mode)
{
    ImSpinner::SpinnerTwinAng360(label, radius1, radius2, thickness, CCAST(color1), CCAST(color2), speed1, speed2, mode);
}

void ImSpinner_SpinnerIngYang(const char* label, const float radius, const float thickness, const bool reverse, const float yang_detlta_r, const CImXVec4* colorI, const CImXVec4* colorY, const float speed, const float angle, const int mode)
{
    ImSpinner::SpinnerIngYang(label, radius, thickness, reverse, yang_detlta_r, CCAST(colorI), CCAST(colorY), speed, angle, mode);
}

 
void ImSpinner_SpinnerCircleDrop(const char* label, const float radius, const float thickness, const float thickness_drop, const CImXVec4* color, const CImXVec4* bg, const float speed, const float angle)
{
    ImSpinner::SpinnerCircleDrop(label, radius, thickness, thickness_drop, CCAST(color), CCAST(bg), speed, angle);
}

void ImSpinner_SpinnerAngMix(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const float angle, const int arcs, const int mode)
{
    ImSpinner::SpinnerAngMix(label, radius, thickness, CCAST(color), speed, angle, arcs, mode);
}

void ImSpinner_SpinnerAng(const char* label, const float radius, const float thickness, const CImXVec4* color, const CImXVec4* bg, const float speed, const float angle, const int mode)
{
    ImSpinner::SpinnerAng(label, radius, thickness, CCAST(color), CCAST(bg), speed, angle, mode);
}

void ImSpinner_SpinnerPulsar(const char* label, const float radius, const float thickness, const CImXVec4* bg, const float speed, const bool sequence, const float angle, const int mode)
{
    ImSpinner::SpinnerPulsar(label, radius, thickness, CCAST(bg), speed, sequence, angle, mode);
}

void ImSpinner_SpinnerIncScaleDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const size_t dots, const float angle, const int mode)
{
    ImSpinner::SpinnerIncScaleDots(label, radius, thickness, CCAST(color), speed, dots, angle, mode);
}

void ImSpinner_SpinnerRotateSegments(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const size_t arcs, const size_t layers, const int mode)
{
    ImSpinner::SpinnerRotateSegments(label, radius, thickness, CCAST(color), speed, arcs, layers, mode);
}

void ImSpinner_SpinnerPointsArcBounce(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const size_t points, const int circles, const float rspeed)
{
    ImSpinner::SpinnerPointsArcBounce(label, radius, thickness, CCAST(color), speed, points, circles, rspeed);
}

void ImSpinner_SpinnerWifiIndicator(const char* label, const float radius, const float thickness, const CImXVec4* color, const CImXVec4* bg, const float speed, const float cangle, const int dots)
{
    ImSpinner::SpinnerWifiIndicator(label, radius, thickness, CCAST(color), CCAST(bg), speed, cangle, dots);
}

void ImSpinner_SpinnerPatternEclipse(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int elipses, const float delta_a, const float delta_y)
{
    ImSpinner::SpinnerPatternEclipse(label, radius, thickness, CCAST(color), speed, elipses, delta_a, delta_y);
}

void ImSpinner_SpinnerHboDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const float minfade, const float ryk, const float speed, const size_t dots, const int mode)
{
    ImSpinner::SpinnerHboDots(label, radius, thickness, CCAST(color), minfade, ryk, speed, dots, mode);
}

void ImSpinner_SpinnerThreeDotsStar(const char* label, const float radius, const float thickness, const CImXVec4* color, const float minfade, const float ryk, const float speed, const float delta)
{
    ImSpinner::SpinnerThreeDotsStar(label, radius, thickness, CCAST(color), minfade, ryk, speed, delta);
}

void ImSpinner_SpinnerDnaDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int lt, const float delta, const bool mode)
{
    ImSpinner::SpinnerDnaDots(label, radius, thickness, CCAST(color), speed, lt, delta, mode);
}

void ImSpinner_Spinner3SmuggleDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int lt, const float delta, const bool mode)
{
    ImSpinner::Spinner3SmuggleDots(label, radius, thickness, CCAST(color), speed, lt, delta, mode);
}

void ImSpinner_SpinnerSplineAng(const char* label, const float radius, const float thickness, const CImXVec4* color, const CImXVec4* bg, const float speed, const float angle, const int mode)
{
    ImSpinner::SpinnerSplineAng(label, radius, thickness, CCAST(color), CCAST(bg), speed, angle, mode);
}

void ImSpinner_SpinnerPointsRoller(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const size_t points, const int circles, const float rspeed)
{
    ImSpinner::SpinnerPointsRoller(label, radius, thickness, CCAST(color), speed, points, circles, rspeed);
}
 
void ImSpinner_SpinnerTwinPulsar(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int rings, const int mode)
{
    ImSpinner::SpinnerTwinPulsar(label, radius, thickness, CCAST(color), speed, rings, mode);
}

void ImSpinner_SpinnerBounceDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const size_t dots, const int mode)
{
    ImSpinner::SpinnerBounceDots(label, radius, thickness, CCAST(color), speed, dots, mode);
}

void ImSpinner_SpinnerFadeDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int lt, const int mode)
{
    ImSpinner::SpinnerFadeDots(label, radius, thickness, CCAST(color), speed, lt, mode);
}

void ImSpinner_SpinnerRotateDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int dots, const int mode)
{
    ImSpinner::SpinnerRotateDots(label, radius, thickness, CCAST(color), speed, dots, mode);
}

void ImSpinner_SpinnerRainbowCircle(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const size_t arcs, const float mode)
{
    ImSpinner::SpinnerRainbowCircle(label, radius, thickness, CCAST(color), speed, arcs, mode);
}

void ImSpinner_SpinnerRotateGooeyBalls(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int balls, const int mode)
{
    ImSpinner::SpinnerRotateGooeyBalls(label, radius, thickness, CCAST(color), speed, balls, mode);
}

void ImSpinner_SpinnerBounceBall(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int dots, const bool shadow)
{
    ImSpinner::SpinnerBounceBall(label, radius, thickness, CCAST(color), speed, dots, shadow);
}

void ImSpinner_SpinnerPulsarBall(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const bool shadow, const int mode)
{
    ImSpinner::SpinnerPulsarBall(label, radius, thickness, CCAST(color), speed, shadow, mode);
}

void ImSpinner_SpinnerSomeScaleDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const size_t dots, const int mode)
{
    ImSpinner::SpinnerSomeScaleDots(label, radius, thickness, CCAST(color), speed, dots, mode);
}

void ImSpinner_SpinnerLoadingRing(const char* label, const float radius, const float thickness, const CImXVec4* color, const CImXVec4* bg, const float speed, const int segments)
{
    ImSpinner::SpinnerLoadingRing(label, radius, thickness, CCAST(color), CCAST(bg), speed, segments);
}

void ImSpinner_SpinnerRotateShapes(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int shapes, const int pnt)
{
    ImSpinner::SpinnerRotateShapes(label, radius, thickness, CCAST(color), speed, shapes, pnt);
}

void ImSpinner_SpinnerDotsToPoints(const char* label, const float radius, const float thickness, const float offset_k, const CImXVec4* color, const float speed, const size_t dots)
{
    ImSpinner::SpinnerDotsToPoints(label, radius, thickness, offset_k, CCAST(color), speed, dots);
}

void ImSpinner_SpinnerDotsToBar(const char* label, const float radius, const float thickness, const float offset_k, const CImXVec4* color, const float speed, const size_t dots)
{
    ImSpinner::SpinnerDotsToBar(label, radius, thickness, offset_k, CCAST(color), speed, dots);
}

void ImSpinner_SpinnerTopup(const char* label, const float radius1, const float radius2, const CImXVec4* color, const CImXVec4* fg, const CImXVec4* bg, const float speed)
{
    ImSpinner::SpinnerTopup(label, radius1, radius2, CCAST(color), CCAST(fg), CCAST(bg), speed);
}

void ImSpinner_SpinnerBarsRotateFade(const char* label, const float rmin, const float rmax, const float thickness, const CImXVec4* color, const float speed, const size_t bars)
{
    ImSpinner::SpinnerBarsRotateFade(label, rmin, rmax, thickness, CCAST(color), speed, bars);
}

void ImSpinner_SpinnerFilledArcRing(const char* label, const float radius, const float thickness, const CImXVec4* color, const CImXVec4* bg, const float speed, const size_t arcs)
{
    ImSpinner::SpinnerFilledArcRing(label, radius, thickness, CCAST(color), CCAST(bg), speed, arcs);
}

void ImSpinner_SpinnerArcRotation(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const size_t arcs, const int mode)
{
    ImSpinner::SpinnerArcRotation(label, radius, thickness, CCAST(color), speed, arcs, mode);
}

void ImSpinner_SpinnerArcFade(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const size_t arcs, const int mode)
{
    ImSpinner::SpinnerArcFade(label, radius, thickness, CCAST(color), speed, arcs, mode);
}

void ImSpinner_SpinnerRotatedAtom(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int elipses, const int mode)
{
    ImSpinner::SpinnerRotatedAtom(label, radius, thickness, CCAST(color), speed, elipses, mode);
}

void ImSpinner_SpinnerRainbowBalls(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int balls, const int mode, const int rings, const int mx)
{
    ImSpinner::SpinnerRainbowBalls(label, radius, thickness, CCAST(color), speed, balls, mode, rings, mx);
}

void ImSpinner_SpinnerBarChartSine(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int bars, const int mode)
{
    ImSpinner::SpinnerBarChartSine(label, radius, thickness, CCAST(color), speed, bars, mode);
}

void ImSpinner_SpinnerBarChartRainbow(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int bars, const int mode)
{
    ImSpinner::SpinnerBarChartRainbow(label, radius, thickness, CCAST(color), speed, bars, mode);
}

void ImSpinner_SpinnerSolarBalls(const char* label, const float radius, const float thickness, const CImXVec4* ball, const CImXVec4* bg, const float speed, const size_t balls)
{
    ImSpinner::SpinnerSolarBalls(label, radius, thickness, CCAST(ball), CCAST(bg), speed, balls);
}

void ImSpinner_SpinnerSolarArcs(const char* label, const float radius, const float thickness, const CImXVec4* ball, const CImXVec4* bg, const float speed, const size_t balls)
{
    ImSpinner::SpinnerSolarArcs(label, radius, thickness, CCAST(ball), CCAST(bg), speed, balls);
}

void ImSpinner_SpinnerTrianglesSelector(const char* label, const float radius, const float thickness, const CImXVec4* color, const CImXVec4* bg, const float speed, const size_t bars)
{
    ImSpinner::SpinnerTrianglesSelector(label, radius, thickness, CCAST(color), CCAST(bg), speed, bars);
}

void ImSpinner_SpinnerRotateWheel(const char* label, const float radius, const float thickness, const CImXVec4* bg_color, const CImXVec4* color, const float speed, const size_t pins2)
{
    ImSpinner::SpinnerRotateWheel(label, radius, thickness, CCAST(bg_color), CCAST(color), speed, pins2);
}

void ImSpinner_SpinnerFlowingGradient(const char* label, const float radius, const float thickness, const CImXVec4* color, const CImXVec4* bg, const float speed, const float angle)
{
    ImSpinner::SpinnerFlowingGradient(label, radius, thickness, CCAST(color), CCAST(bg), speed, angle);
}

void ImSpinner_SpinnerMoonLine(const char* label, const float radius, const float thickness, const CImXVec4* color, const CImXVec4* bg, const float speed, const float angle)
{
    ImSpinner::SpinnerMoonLine(label, radius, thickness, CCAST(color), CCAST(bg), speed, angle);
}

void ImSpinner_SpinnerFluidPoints(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const size_t dots, const float delta)
{
    ImSpinner::SpinnerFluidPoints(label, radius, thickness, CCAST(color), speed, dots, delta);
}

void ImSpinner_SpinnerCamera(const char* label, const float radius, const float thickness, ImSpinner_LeafColor* leaf_color, const float speed, const size_t bars, const int mode)
{
    ImSpinner::SpinnerCamera(label, radius, thickness, reinterpret_cast<ImSpinner::LeafColor*>(leaf_color), speed, bars, mode);
}

void ImSpinner_SpinnerTrianglesShift(const char* label, const float radius, const float thickness, const CImXVec4* color, const CImXVec4* bg, const float speed, const size_t bars)
{
    ImSpinner::SpinnerTrianglesShift(label, radius, thickness, CCAST(color), CCAST(bg), speed, bars);
}

void ImSpinner_SpinnerPointsShift(const char* label, const float radius, const float thickness, const CImXVec4* color, const CImXVec4* bg, const float speed, const size_t bars)
{
    ImSpinner::SpinnerPointsShift(label, radius, thickness, CCAST(color), CCAST(bg), speed, bars);
}

void ImSpinner_SpinnerCaleidoscope(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const size_t arcs, const int mode)
{
    ImSpinner::SpinnerCaleidoscope(label, radius, thickness, CCAST(color), speed, arcs, mode);
}

void ImSpinner_SpinnerModCircle(const char* label, const float radius, const float thickness, const CImXVec4* color, const float ang_min, const float ang_max, const float speed)
{
    ImSpinner::SpinnerModCircle(label, radius, thickness, CCAST(color), ang_min, ang_max, speed);
}

void ImSpinner_SpinnerRotateSegmentsPulsar(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const size_t arcs, const size_t layers)
{
    ImSpinner::SpinnerRotateSegmentsPulsar(label, radius, thickness, CCAST(color), speed, arcs, layers);
}

void ImSpinner_SpinnerThickToSin(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int nt, const int lt, const int mode)
{
    ImSpinner::SpinnerThickToSin(label, radius, thickness, CCAST(color), speed, nt, lt, mode);
}

void ImSpinner_SpinnerRotatingHeart(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const float ang_min)
{
    ImSpinner::SpinnerRotatingHeart(label, radius, thickness, CCAST(color), speed, ang_min);
}

void ImSpinner_SpinnerClock(const char* label, const float radius, const float thickness, const CImXVec4* color, const CImXVec4* bg, const float speed)
{
    ImSpinner::SpinnerClock(label, radius, thickness, CCAST(color), CCAST(bg), speed);
}

void ImSpinner_SpinnerFilling(const char* label, const float radius, const float thickness, const CImXVec4* color1, const CImXVec4* color2, const float speed)
{
    ImSpinner::SpinnerFilling(label, radius, thickness, CCAST(color1), CCAST(color2), speed);
}

void ImSpinner_SpinnerFillingMem(const char* label, const float radius, const float thickness, const CImXVec4* color, CImXVec4* colorbg, const float speed)
{
    ImSpinner::SpinnerFillingMem(label, radius, thickness, CCAST(color), *reinterpret_cast<ImColor*>(colorbg), speed);
}

void ImSpinner_SpinnerAsciiSymbolPoints(const char* label, const char* text, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerAsciiSymbolPoints(label, text, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerTextFading(const char* label, const char* text, const float radius, const float fsize, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerTextFading(label, text, radius, fsize, CCAST(color), speed);
}

void ImSpinner_SpinnerSevenSegments(const char* label, const char* text, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerSevenSegments(label, text, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerSinSquares(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerSinSquares(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerRotateTriangles(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int tris, const int mode)
{
    ImSpinner::SpinnerRotateTriangles(label, radius, thickness, CCAST(color), speed, tris, mode);
}

void ImSpinner_SpinnerSurroundedIndicator(const char* label, const float radius, const float thickness, const CImXVec4* color, const CImXVec4* bg, const float speed)
{
    ImSpinner::SpinnerSurroundedIndicator(label, radius, thickness, CCAST(color), CCAST(bg), speed);
}

void ImSpinner_SpinnerLemniscate(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const float angle)
{
    ImSpinner::SpinnerLemniscate(label, radius, thickness, CCAST(color), speed, angle);
}

void ImSpinner_SpinnerRotateGear(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const size_t pins2)
{
    ImSpinner::SpinnerRotateGear(label, radius, thickness, CCAST(color), speed, pins2);
}

void ImSpinner_SpinnerAtom(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int elipses)
{
    ImSpinner::SpinnerAtom(label, radius, thickness, CCAST(color), speed, elipses);
}

void ImSpinner_SpinnerPatternRings(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int elipses)
{
ImSpinner::SpinnerPatternRings(label, radius, thickness, CCAST(color), speed, elipses);
}

void ImSpinner_SpinnerPatternSphere(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int elipses)
{
    ImSpinner::SpinnerPatternSphere(label, radius, thickness, CCAST(color), speed, elipses);
}

void ImSpinner_SpinnerRingSynchronous(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int elipses)
{
    ImSpinner::SpinnerRingSynchronous(label, radius, thickness, CCAST(color), speed, elipses);
}

void ImSpinner_SpinnerRingWatermarks(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int elipses)
{
    ImSpinner::SpinnerRingWatermarks(label, radius, thickness, CCAST(color), speed, elipses);
}

void ImSpinner_SpinnerRainbowShot(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int balls, const int mode)
{
    ImSpinner::SpinnerRainbowShot(label, radius, thickness, CCAST(color), speed, balls, mode);
}

void ImSpinner_SpinnerSpiral(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const size_t arcs)
{
    ImSpinner::SpinnerSpiral(label, radius, thickness, CCAST(color), speed, arcs);
}

void ImSpinner_SpinnerFadePulsar(const char* label, const float radius, const CImXVec4* color, const float speed, const int rings, const int mode)
{
    ImSpinner::SpinnerFadePulsar(label, radius, CCAST(color), speed, rings, mode);
}

void ImSpinner_SpinnerCircularLines(const char* label, const float radius, const CImXVec4* color, const float speed, const int lines, const int mode)
{
    ImSpinner::SpinnerCircularLines(label, radius, CCAST(color), speed, lines, mode);
}

void ImSpinner_SpinnerFilledArcFade(const char* label, const float radius, const CImXVec4* color, const float speed, const size_t arcs, const int mode)
{
    ImSpinner::SpinnerFilledArcFade(label, radius, CCAST(color), speed, arcs, mode);
}

void ImSpinner_SpinnerZipDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const size_t dots)
{
    ImSpinner::SpinnerZipDots(label, radius, thickness, CCAST(color), speed, dots);
}

void ImSpinner_SpinnerWaveDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int lt)
{
    ImSpinner::SpinnerWaveDots(label, radius, thickness, CCAST(color), speed, lt);
}

void ImSpinner_SpinnerThreeDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int lt)
{
    ImSpinner::SpinnerThreeDots(label, radius, thickness, CCAST(color), speed, lt);
}

void ImSpinner_SpinnerFiveDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int lt)
{
    ImSpinner::SpinnerFiveDots(label, radius, thickness, CCAST(color), speed, lt);
}

void ImSpinner_Spinner4Caleidospcope(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int lt)
{
    ImSpinner::Spinner4Caleidospcope(label, radius, thickness, CCAST(color), speed, lt);
}

void ImSpinner_SpinnerMultiFadeDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int lt)
{
    ImSpinner::SpinnerMultiFadeDots(label, radius, thickness, CCAST(color), speed, lt);
}

void ImSpinner_SpinnerScaleDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int lt)
{
    ImSpinner::SpinnerScaleDots(label, radius, thickness, CCAST(color), speed, lt);
}

void ImSpinner_SpinnerMovingDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const size_t dots)
{
    ImSpinner::SpinnerMovingDots(label, radius, thickness, CCAST(color), speed, dots);
}

void ImSpinner_SpinnerOrionDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int arcs)
{
    ImSpinner::SpinnerOrionDots(label, radius, thickness, CCAST(color), speed, arcs);
}

void ImSpinner_SpinnerGalaxyDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int arcs)
{
    ImSpinner::SpinnerGalaxyDots(label, radius, thickness, CCAST(color), speed, arcs);
}

void ImSpinner_SpinnerIncDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const size_t dots)
{
    ImSpinner::SpinnerIncDots(label, radius, thickness, CCAST(color), speed, dots);
}

void ImSpinner_SpinnerIncFullDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const size_t dots)
{
    ImSpinner::SpinnerIncFullDots(label, radius, thickness, CCAST(color), speed, dots);
}

void ImSpinner_SpinnerFadeBars(const char* label, const float w, const CImXVec4* color, const float speed, const size_t bars, const bool scale)
{
    ImSpinner::SpinnerFadeBars(label, w, CCAST(color), speed, bars, scale);
}

void ImSpinner_SpinnerFadeTris(const char* label, const float radius, const CImXVec4* color, const float speed, const size_t dim, const bool scale, const int mode)
{
    ImSpinner::SpinnerFadeTris(label, radius, CCAST(color), speed, dim, scale, mode);
}

void ImSpinner_SpinnerFilledArcColor(const char* label, const float radius, const CImXVec4* color, const CImXVec4* bg, const float speed, const size_t arcs)
{
    ImSpinner::SpinnerFilledArcColor(label, radius, CCAST(color), CCAST(bg), speed, arcs);
}

void ImSpinner_SpinnerDotsLoading(const char* label, const float radius, const float thickness, const CImXVec4* color, const CImXVec4* bg, const float speed)
{
    ImSpinner::SpinnerDotsLoading(label, radius, thickness, CCAST(color), CCAST(bg), speed);
}

void ImSpinner_SpinnerHerbertBalls(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int balls)
{
    ImSpinner::SpinnerHerbertBalls(label, radius, thickness, CCAST(color), speed, balls);
}

void ImSpinner_SpinnerSolarScaleBalls(const char* label, const float radius, const float thickness, const CImXVec4* ball, const float speed, const size_t balls)
{
    ImSpinner::SpinnerSolarScaleBalls(label, radius, thickness, CCAST(ball), speed, balls);
}

void ImSpinner_SpinnerMovingArcs(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const size_t arcs)
{
    ImSpinner::SpinnerMovingArcs(label, radius, thickness, CCAST(color), speed, arcs);
}

void ImSpinner_SpinnerAngEclipse(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const float angle)
{
    ImSpinner::SpinnerAngEclipse(label, radius, thickness, CCAST(color), speed, angle);
}

void ImSpinner_SpinnerBarChartAdvSine(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarChartAdvSine(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarChartAdvSineFade(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarChartAdvSineFade(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBlocks(const char* label, const float radius, const float thickness, const CImXVec4* bg, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerBlocks(label, radius, thickness, CCAST(bg), CCAST(color), speed);
}

void ImSpinner_SpinnerTwinBlocks(const char* label, const float radius, const float thickness, const CImXVec4* bg, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerTwinBlocks(label, radius, thickness, CCAST(bg), CCAST(color), speed);
}

void ImSpinner_SpinnerSquareRandomDots(const char* label, const float radius, const float thickness, const CImXVec4* bg, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerSquareRandomDots(label, radius, thickness, CCAST(bg), CCAST(color), speed);
}

void ImSpinner_SpinnerScaleBlocks(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerScaleBlocks(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerMoonDots(const char* label, const float radius, const float thickness, const CImXVec4* first, const CImXVec4* second, const float speed)
{
    ImSpinner::SpinnerMoonDots(label, radius, thickness, CCAST(first), CCAST(second), speed);
}

void ImSpinner_SpinnerArcPolarFade(const char* label, const float radius, const CImXVec4* color, const float speed, const size_t arcs, const int mode)
{
    ImSpinner::SpinnerArcPolarFade(label, radius, CCAST(color), speed, arcs, mode);
}

void ImSpinner_SpinnerCircularPoints(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int lines)
{
    ImSpinner::SpinnerCircularPoints(label, radius, thickness, CCAST(color), speed, lines);
}

void ImSpinner_SpinnerCurvedCircle(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const size_t circles)
{
    ImSpinner::SpinnerCurvedCircle(label, radius, thickness, CCAST(color), speed, circles);
}

void ImSpinner_SpinnerFadePulsarSquare(const char* label, const float radius, const CImXVec4* color, const float speed, const int rings, const int mode)
{
    ImSpinner::SpinnerFadePulsarSquare(label, radius, CCAST(color), speed, rings, mode);
}
 
void ImSpinner_SpinnerArcWedges(const char* label, const float radius, const CImXVec4* color, const float speed, const size_t arcs, const int mode)
{
    ImSpinner::SpinnerArcWedges(label, radius, CCAST(color), speed, arcs, mode);
}

void ImSpinner_SpinnerGooeyBalls(const char* label, const float radius, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerGooeyBalls(label, radius, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerDoubleFadePulsar(const char* label, const float radius, const float thickness, const CImXVec4* bg, const float speed)
{
    ImSpinner::SpinnerDoubleFadePulsar(label, radius, thickness, CCAST(bg), speed);
}

void ImSpinner_SpinnerBarsScaleMiddle(const char* label, const float w, const CImXVec4* color, const float speed, const size_t bars)
{
    ImSpinner::SpinnerBarsScaleMiddle(label, w, CCAST(color), speed, bars);
}

void ImSpinner_SpinnerHerbertBalls3D(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerHerbertBalls3D(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerSimpleArcFade(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerSimpleArcFade(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerSquareStrokeFade(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerSquareStrokeFade(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerSquareStrokeFill(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerSquareStrokeFill(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerSquareStrokeLoading(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerSquareStrokeLoading(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerSquareLoading(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerSquareLoading(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerSquareSpins(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerSquareSpins(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerSpiralEye(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerSpiralEye(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerScaleSquares(const char* label, const float radius, const float thikness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerScaleSquares(label, radius, thikness, CCAST(color), speed);
}

void ImSpinner_SpinnerFluid(const char* label, const float radius, const CImXVec4* color, const float speed, const int bars)
{
    ImSpinner::SpinnerFluid(label, radius, CCAST(color), speed, bars);
}

void ImSpinner_SpinnerArcPolarRadius(const char* label, const float radius, const CImXVec4* color, const float speed, const size_t arcs, const int mode)
{
    ImSpinner::SpinnerArcPolarRadius(label, radius, CCAST(color), speed, arcs, mode);
}

void ImSpinner_SpinnerMorphShape(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerMorphShape(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerFlipTriangle(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerFlipTriangle(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerFoldSquare(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerFoldSquare(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerPinwheel(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerPinwheel(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerCornerSquares(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerCornerSquares(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerSplitSquare(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerSplitSquare(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerCornerBurst(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerCornerBurst(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerSkewSquare(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerSkewSquare(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerTumbleSquare(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerTumbleSquare(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerTriDiamond(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerTriDiamond(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerTwinBlades(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerTwinBlades(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerCrossBlades(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerCrossBlades(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerDriftSquare(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerDriftSquare(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerPieBounce(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerPieBounce(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerLeapFrog(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerLeapFrog(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerPlusSquares(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerPlusSquares(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerSevenMarch(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerSevenMarch(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerCornerArcs(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerCornerArcs(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerWalkBlocks(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerWalkBlocks(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerTumbleHalfDisc(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerTumbleHalfDisc(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerFoldHalfDisc(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerFoldHalfDisc(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerWiperArrow(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerWiperArrow(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerSkewSquares(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerSkewSquares(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerStretchSquares(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerStretchSquares(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerTriPie(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerTriPie(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerShuffleBars(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerShuffleBars(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerHingeTumble(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerHingeTumble(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerDiagonalFlip(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerDiagonalFlip(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerPulseGrid(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerPulseGrid(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerMarchGrid(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerMarchGrid(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerSpinBars(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerSpinBars(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerMorphDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerMorphDots(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerCombDiscs(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerCombDiscs(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerOrbitDisc(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerOrbitDisc(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerDotsTyping(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int dots)
{
    ImSpinner::SpinnerDotsTyping(label, radius, thickness, CCAST(color), speed, dots);
}

void ImSpinner_SpinnerDotsStep(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int dots)
{
    ImSpinner::SpinnerDotsStep(label, radius, thickness, CCAST(color), speed, dots);
}

void ImSpinner_SpinnerDotsGather(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int dots)
{
    ImSpinner::SpinnerDotsGather(label, radius, thickness, CCAST(color), speed, dots);
}

void ImSpinner_SpinnerSineArcs(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerSineArcs(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerSwingDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerSwingDots(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsShift(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsShift(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsOrbit(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsOrbit(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsCircle(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsCircle(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsSquare(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsSquare(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsShuffle(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsShuffle(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsSplit(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsSplit(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsLeader(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsLeader(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsRolling(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsRolling(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsTriangle(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsTriangle(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsCascade(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsCascade(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsSwap(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsSwap(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsSpread(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsSpread(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsTwin(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsTwin(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsHop(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsHop(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsJiggle(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsJiggle(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsVibrate(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsVibrate(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsWiper(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsWiper(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsCollapse(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsCollapse(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsFlip(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsFlip(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsTurn(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsTurn(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsCarousel(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsCarousel(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsHalfTurn(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsHalfTurn(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsSlideFlip(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsSlideFlip(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsStaggerTurn(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsStaggerTurn(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsStretch(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsStretch(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsMirrorStretch(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsMirrorStretch(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsPinch(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsPinch(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsCorners(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsCorners(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsNudgeRotate(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsNudgeRotate(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsUnfold(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsUnfold(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsShuttle(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsShuttle(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsSpreadShuttle(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsSpreadShuttle(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsTriad(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsTriad(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsSatellite(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsSatellite(label, radius, thickness, CCAST(color), speed);
}

void ImSpinner_SpinnerDotsTrack(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerDotsTrack(label, radius, thickness, CCAST(color), speed);
}
 
void ImSpinner_SpinnerSquishSquare(const char* label, const float radius, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerSquishSquare(label, radius, CCAST(color), speed);
}

void ImSpinner_SpinnerTextFade(const char* label, const float radius, const CImXVec4* color, const float speed, const char* text)
{
    ImSpinner::SpinnerTextFade(label, radius, CCAST(color), speed, text);
}

void ImSpinner_SpinnerTextUnderline(const char* label, const float radius, const CImXVec4* color, const float speed, const float thickness, const char* text)
{
    ImSpinner::SpinnerTextUnderline(label, radius, CCAST(color), speed, thickness, text);
}

void ImSpinner_SpinnerTextUnderlineDots(const char* label, const float radius, const CImXVec4* color, const float speed, const float thickness, const int dashes, const char* text)
{
    ImSpinner::SpinnerTextUnderlineDots(label, radius, CCAST(color), speed, thickness, dashes, text);
}

void ImSpinner_SpinnerTextTyping(const char* label, const float radius, const CImXVec4* color, const float speed, const int tail, const char* text)
{
    ImSpinner::SpinnerTextTyping(label, radius, CCAST(color), speed, tail, text);
}

void ImSpinner_SpinnerTextScroll(const char* label, const float radius, const CImXVec4* color, const float speed, const char* text)
{
    ImSpinner::SpinnerTextScroll(label, radius, CCAST(color), speed, text);
}

void ImSpinner_SpinnerTextColorFill(const char* label, const float radius, const CImXVec4* color, const CImXVec4* bg, const float speed, const int mode, const char* text)
{
    ImSpinner::SpinnerTextColorFill(label, radius, CCAST(color), CCAST(bg), speed, mode, text);
}

void ImSpinner_SpinnerTextScrollColors(const char* label, const float radius, const CImXVec4* color, const float speed, const char* text)
{
    ImSpinner::SpinnerTextScrollColors(label, radius, CCAST(color), speed, text);
}

void ImSpinner_SpinnerTextColorCycle(const char* label, const float radius, const CImXVec4* color, const float speed, const char* text)
{
    ImSpinner::SpinnerTextColorCycle(label, radius, CCAST(color), speed, text);
}

void ImSpinner_SpinnerTextBounce(const char* label, const float radius, const CImXVec4* color, const float speed, const char* text)
{
    ImSpinner::SpinnerTextBounce(label, radius, CCAST(color), speed, text);
}

void ImSpinner_SpinnerTextSplit(const char* label, const float radius, const CImXVec4* color, const float speed, const int mode, const char* text)
{
    ImSpinner::SpinnerTextSplit(label, radius, CCAST(color), speed, mode, text);
}

void ImSpinner_SpinnerTextUnderlineScroll(const char* label, const float radius, const CImXVec4* color, const float speed, const float thickness, const char* text)
{
    ImSpinner::SpinnerTextUnderlineScroll(label, radius, CCAST(color), speed, thickness, text);
}

void ImSpinner_SpinnerTextRoll(const char* label, const float radius, const CImXVec4* color, const float speed, const char* text)
{
    ImSpinner::SpinnerTextRoll(label, radius, CCAST(color), speed, text);
}

void ImSpinner_SpinnerTextColorful(const char* label, const float radius, const CImXVec4* color, const float speed, const char* text)
{
    ImSpinner::SpinnerTextColorful(label, radius, CCAST(color), speed, text);
}

void ImSpinner_SpinnerTextCascade(const char* label, const float radius, const CImXVec4* color, const float speed, const char* text)
{
    ImSpinner::SpinnerTextCascade(label, radius, CCAST(color), speed, text);
}

void ImSpinner_SpinnerTextConveyor(const char* label, const float radius, const CImXVec4* color, const float speed, const char* text)
{
    ImSpinner::SpinnerTextConveyor(label, radius, CCAST(color), speed, text);
}

void ImSpinner_SpinnerTextReveal(const char* label, const float radius, const CImXVec4* color, const float speed, const char* text)
{
    ImSpinner::SpinnerTextReveal(label, radius, CCAST(color), speed, text);
}

void ImSpinner_SpinnerTextWave(const char* label, const float radius, const CImXVec4* color, const float speed, const char* text)
{
    ImSpinner::SpinnerTextWave(label, radius, CCAST(color), speed, text);
}

void ImSpinner_SpinnerTextSweep(const char* label, const float radius, const CImXVec4* color, const CImXVec4* bg, const float speed, const char* text)
{
    ImSpinner::SpinnerTextSweep(label, radius, CCAST(color), CCAST(bg), speed, text);
}

void ImSpinner_SpinnerTextShine(const char* label, const float radius, const CImXVec4* color, const CImXVec4* bg, const float speed, const char* text)
{
    ImSpinner::SpinnerTextShine(label, radius, CCAST(color), CCAST(bg), speed, text);
}

void ImSpinner_SpinnerTextScrollSweep(const char* label, const float radius, const CImXVec4* color, const CImXVec4* bg, const float speed, const char* text)
{
    ImSpinner::SpinnerTextScrollSweep(label, radius, CCAST(color), CCAST(bg), speed, text);
}

void ImSpinner_SpinnerTextSpotlight(const char* label, const float radius, const CImXVec4* color, const float speed, const char* text)
{
    ImSpinner::SpinnerTextSpotlight(label, radius, CCAST(color), speed, text);
}

void ImSpinner_SpinnerTextShake(const char* label, const float radius, const CImXVec4* color, const float speed, const int mode, const char* text)
{
    ImSpinner::SpinnerTextShake(label, radius, CCAST(color), speed, mode, text);
}

void ImSpinner_SpinnerTextFlip(const char* label, const float radius, const CImXVec4* color, const float speed, const char* text)
{
    ImSpinner::SpinnerTextFlip(label, radius, CCAST(color), speed, text);
}

void ImSpinner_SpinnerTextSpin(const char* label, const float radius, const CImXVec4* color, const float speed, const char* text)
{
    ImSpinner::SpinnerTextSpin(label, radius, CCAST(color), speed, text);
}

void ImSpinner_SpinnerTextTumble(const char* label, const float radius, const CImXVec4* color, const float speed, const int mode, const char* text)
{
    ImSpinner::SpinnerTextTumble(label, radius, CCAST(color), speed, mode, text);
}

void ImSpinner_SpinnerTextSwirl(const char* label, const float radius, const CImXVec4* color, const float speed, const char* text)
{
    ImSpinner::SpinnerTextSwirl(label, radius, CCAST(color), speed, text);
}

void ImSpinner_SpinnerTextRollWave(const char* label, const float radius, const CImXVec4* color, const float speed, const char* text)
{
    ImSpinner::SpinnerTextRollWave(label, radius, CCAST(color), speed, text);
}

void ImSpinner_SpinnerTextVibrate(const char* label, const float radius, const CImXVec4* color, const float speed, const char* text)
{
    ImSpinner::SpinnerTextVibrate(label, radius, CCAST(color), speed, text);
}

void ImSpinner_SpinnerTextGlitch(const char* label, const float radius, const float speed, const char* text)
{
    ImSpinner::SpinnerTextGlitch(label, radius, speed, text);
}

void ImSpinner_SpinnerTextBlur(const char* label, const float radius, const CImXVec4* color, const float speed, const char* text)
{
    ImSpinner::SpinnerTextBlur(label, radius, CCAST(color), speed, text);
}

void ImSpinner_SpinnerTextDropout(const char* label, const float radius, const CImXVec4* color, const float speed, const char* text)
{
    ImSpinner::SpinnerTextDropout(label, radius, CCAST(color), speed, text);
}

void ImSpinner_SpinnerTextScanline(const char* label, const float radius, const CImXVec4* color, const float speed, const int mode, const char* text)
{
    ImSpinner::SpinnerTextScanline(label, radius, CCAST(color), speed, mode, text);
}

void ImSpinner_SpinnerTextSquash(const char* label, const float radius, const CImXVec4* color, const float speed, const char* text)
{
    ImSpinner::SpinnerTextSquash(label, radius, CCAST(color), speed, text);
}

void ImSpinner_SpinnerTextScramble(const char* label, const float radius, const CImXVec4* color, const float speed)
{
    ImSpinner::SpinnerTextScramble(label, radius, CCAST(color), speed);
}

void ImSpinner_SpinnerTextDecode(const char* label, const float radius, const CImXVec4* color, const float speed, const char* text)
{
    ImSpinner::SpinnerTextDecode(label, radius, CCAST(color), speed, text);
}

void ImSpinner_SpinnerTextVanish(const char* label, const float radius, const CImXVec4* color, const float speed, const char* text)
{
    ImSpinner::SpinnerTextVanish(label, radius, CCAST(color), speed, text);
}

void ImSpinner_SpinnerBarsSeqPulse(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsSeqPulse(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsCascadeGrow(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsCascadeGrow(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsRise(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsRise(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsCornerHop(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsCornerHop(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsDiagonalGrow(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsDiagonalGrow(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsBounceCenter(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsBounceCenter(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsScaleAlt(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsScaleAlt(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsCornerWave(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsCornerWave(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsJump(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsJump(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsDoubleRow(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsDoubleRow(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsSixPulse(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsSixPulse(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsSixStagger(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsSixStagger(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsMorphPlus(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsMorphPlus(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsFlipSix(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsFlipSix(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsSwapTriBottom(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsSwapTriBottom(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsSwapTriZigzag(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsSwapTriZigzag(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsMorphDiagonal(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsMorphDiagonal(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsSlideDiagonal(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsSlideDiagonal(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsConicAlternate(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsConicAlternate(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsConicWalk(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsConicWalk(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsMarchIn(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsMarchIn(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsMarchDown(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsMarchDown(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsWaveSkew(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsWaveSkew(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsRowDrop(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsRowDrop(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsZigzagRows(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsZigzagRows(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsFillCascade(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsFillCascade(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsPingPongRows(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsPingPongRows(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsWaveRowsWide(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsWaveRowsWide(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsGridFade(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsGridFade(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsGridSpread(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsGridSpread(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsStretch(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsStretch(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsStretchSeq(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsStretchSeq(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsBounceBall(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsBounceBall(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsKnockDots(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsKnockDots(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsStaircase(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsStaircase(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsKnockAway(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsKnockAway(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsGates(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsGates(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsCapture(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsCapture(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsEscape(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsEscape(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsDevour(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsDevour(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsLift(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsLift(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsGapSlide(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsGapSlide(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsConverge(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsConverge(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsSwapEnds(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsSwapEnds(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsRelay(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsRelay(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsPush(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsPush(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsPushWave(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsPushWave(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsGather(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsGather(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsSplit(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsSplit(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerBarsSlot(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerBarsSlot(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerConicGrid(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerConicGrid(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerArcArrow(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerArcArrow(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerOrbitMoon(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerOrbitMoon(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerConicWheels(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerConicWheels(label, radius, thickness, CCAST(color), speed, mode);
}

void ImSpinner_SpinnerDotRing(const char* label, const float radius, const float thickness, const CImXVec4* color, const float speed, const int mode)
{
    ImSpinner::SpinnerDotRing(label, radius, thickness, CCAST(color), speed, mode);
}

#endif
#endif