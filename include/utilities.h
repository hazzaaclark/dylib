#pragma once

#ifndef DYLIB_UTIL
#define DYLIB_UTIL

#include <filesystem>
#include <string>
#include <utility>

/* CROSS COMP STUFF FOR THE COMPILER */

#if (defined(_WIN32) || defined(_WIN64))
#define WIN_32_LEAN_AND_MEAN

#include <Windows.h>

#endif
