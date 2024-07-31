#pragma once

#ifdef CR_PLATFORM_WINDOWS
	#ifdef CR_BUILD_DLL
		#define CITRINE_API __declspec(dllexport)
	#else
		#define CITRINE_API __declspec(dllimport)
	#endif // CR_BUILD_DLL
#else
	#error Citrine supports only Windows for now!
#endif // CR_PLATFORM_WINDOWS
