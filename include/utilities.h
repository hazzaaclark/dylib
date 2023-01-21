#pragma once

#ifndef DYLIB_UTIL
#define DYLIB_UTIL

#include <filesystem>
#include <string>
#include <stdexcept>
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
#define OS
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

typedef struct ARG_EXCEPTION;
typedef struct LOAD_ARG;
typedef struct ARG_SYMBOL; 

#endif

#endif
