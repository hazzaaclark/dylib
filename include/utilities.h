#pragma once

#ifndef DYLIB_UTIL
#define DYLIB_UTIL

#include <filesystem>
#include <string>
#include <utility>

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

#ifndef DYLIB_MAIN
#define DYLIB_MAIN

typedef struct
{
	static const char* PREFIX;
	static const char* SUFFIX;
	static const bool ADD_FILE_NAME_DECOR = true;
	static const bool NO_FILE_NAME_DECOR = false;

} FILE_COMPS;

#define NATIVE_HANDLER OS(HINSTANCE, void* this);
#define NATIVE_SYMBOL OS(FARPROC, void* this);

#endif

#endif
