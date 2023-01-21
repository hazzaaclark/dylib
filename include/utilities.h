#pragma once

#ifndef DYLIB_UTIL
#define DYLIB_UTIL

#include <filesystem>
#include <string>
#include <utility>

/* CROSS COMP STUFF FOR THE COMPILER */

#ifdef __cplusplus
extern "C"
{
}
#endif

#if (defined(_WIN32) || defined(_WIN64))
#define WIN_32_LEAN_AND_MEAN
#include <Windows.h>
#endif

#ifndef OS
#define OS(OS_TYPE, OS_ARCH)
#endif

#endif
