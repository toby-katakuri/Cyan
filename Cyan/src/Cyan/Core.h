#pragma once


#ifdef CA_PLATFORM_WINDOWS
	#ifdef CA_BUILD_DLL
		#define CYAN_API __declspec(dllexport)
	#else
		#define CYAN_API __declspec(dllimport)
	#endif

#else
	#error Cyan only supports Windows!
#endif