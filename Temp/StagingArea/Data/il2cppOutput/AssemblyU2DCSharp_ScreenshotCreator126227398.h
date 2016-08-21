#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<ScreenshotCreator/CameraObject>
struct List_1_t4020814173;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenshotCreator
struct  ScreenshotCreator_t126227398  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 ScreenshotCreator::superSize
	int32_t ___superSize_2;
	// System.String ScreenshotCreator::screenshotName
	String_t* ___screenshotName_3;
	// System.Collections.Generic.List`1<ScreenshotCreator/CameraObject> ScreenshotCreator::list
	List_1_t4020814173 * ___list_4;

public:
	inline static int32_t get_offset_of_superSize_2() { return static_cast<int32_t>(offsetof(ScreenshotCreator_t126227398, ___superSize_2)); }
	inline int32_t get_superSize_2() const { return ___superSize_2; }
	inline int32_t* get_address_of_superSize_2() { return &___superSize_2; }
	inline void set_superSize_2(int32_t value)
	{
		___superSize_2 = value;
	}

	inline static int32_t get_offset_of_screenshotName_3() { return static_cast<int32_t>(offsetof(ScreenshotCreator_t126227398, ___screenshotName_3)); }
	inline String_t* get_screenshotName_3() const { return ___screenshotName_3; }
	inline String_t** get_address_of_screenshotName_3() { return &___screenshotName_3; }
	inline void set_screenshotName_3(String_t* value)
	{
		___screenshotName_3 = value;
		Il2CppCodeGenWriteBarrier(&___screenshotName_3, value);
	}

	inline static int32_t get_offset_of_list_4() { return static_cast<int32_t>(offsetof(ScreenshotCreator_t126227398, ___list_4)); }
	inline List_1_t4020814173 * get_list_4() const { return ___list_4; }
	inline List_1_t4020814173 ** get_address_of_list_4() { return &___list_4; }
	inline void set_list_4(List_1_t4020814173 * value)
	{
		___list_4 = value;
		Il2CppCodeGenWriteBarrier(&___list_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
