#pragma once
#include <stdbool.h>
#include <inttypes.h>
#include <stddef.h>

#ifdef _WIN32
    #ifdef MLS_EXPORT_LIBRARY
        #ifdef MLS_LIB_COMPILE
            #define MLS_PUBLIC_API __declspec(dllexport)
        #else
            #define MLS_PUBLIC_API __declspec(dllimport)
        #endif
    #else
        #define MLS_PUBLIC_API
    #endif
#else
    #define MLS_PUBLIC_API
#endif

#ifdef __cplusplus
extern "C"
{
#endif
typedef struct MLS_PUBLIC_API CImXVec4
{
    union
    {
        float coords[4];
        struct
        {
            float x;
            float y;
            float z;
            float w;
        };
    };
} CImXVec4;

typedef struct MLS_PUBLIC_API CImXVec2
{
    union
    {
        float coords[2];
        struct
        {
            float x;
            float y;
        };
    };
} CImXVec2;
#ifdef __cplusplus
}
#endif