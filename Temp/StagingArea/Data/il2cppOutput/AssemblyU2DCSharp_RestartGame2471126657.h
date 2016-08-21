#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Canvas
struct Canvas_t2727140764;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RestartGame
struct  RestartGame_t2471126657  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Canvas RestartGame::cv
	Canvas_t2727140764 * ___cv_2;

public:
	inline static int32_t get_offset_of_cv_2() { return static_cast<int32_t>(offsetof(RestartGame_t2471126657, ___cv_2)); }
	inline Canvas_t2727140764 * get_cv_2() const { return ___cv_2; }
	inline Canvas_t2727140764 ** get_address_of_cv_2() { return &___cv_2; }
	inline void set_cv_2(Canvas_t2727140764 * value)
	{
		___cv_2 = value;
		Il2CppCodeGenWriteBarrier(&___cv_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
