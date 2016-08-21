#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenshotCreator/CameraObject
struct  CameraObject_t2652628621  : public Il2CppObject
{
public:
	// UnityEngine.GameObject ScreenshotCreator/CameraObject::cam
	GameObject_t3674682005 * ___cam_0;
	// System.Boolean ScreenshotCreator/CameraObject::deleteQuestion
	bool ___deleteQuestion_1;

public:
	inline static int32_t get_offset_of_cam_0() { return static_cast<int32_t>(offsetof(CameraObject_t2652628621, ___cam_0)); }
	inline GameObject_t3674682005 * get_cam_0() const { return ___cam_0; }
	inline GameObject_t3674682005 ** get_address_of_cam_0() { return &___cam_0; }
	inline void set_cam_0(GameObject_t3674682005 * value)
	{
		___cam_0 = value;
		Il2CppCodeGenWriteBarrier(&___cam_0, value);
	}

	inline static int32_t get_offset_of_deleteQuestion_1() { return static_cast<int32_t>(offsetof(CameraObject_t2652628621, ___deleteQuestion_1)); }
	inline bool get_deleteQuestion_1() const { return ___deleteQuestion_1; }
	inline bool* get_address_of_deleteQuestion_1() { return &___deleteQuestion_1; }
	inline void set_deleteQuestion_1(bool value)
	{
		___deleteQuestion_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
