#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ContentManager
struct ContentManager_t188544276;
// userCounter
struct userCounter_t655964081;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelTimer
struct  LevelTimer_t2190076481  : public MonoBehaviour_t667441552
{
public:
	// System.Single LevelTimer::levelTimer
	float ___levelTimer_2;
	// System.Single LevelTimer::minute
	float ___minute_3;
	// ContentManager LevelTimer::cm
	ContentManager_t188544276 * ___cm_4;
	// userCounter LevelTimer::users
	userCounter_t655964081 * ___users_5;
	// System.Int32 LevelTimer::finalUserCount
	int32_t ___finalUserCount_6;
	// System.Boolean LevelTimer::gameOver
	bool ___gameOver_7;

public:
	inline static int32_t get_offset_of_levelTimer_2() { return static_cast<int32_t>(offsetof(LevelTimer_t2190076481, ___levelTimer_2)); }
	inline float get_levelTimer_2() const { return ___levelTimer_2; }
	inline float* get_address_of_levelTimer_2() { return &___levelTimer_2; }
	inline void set_levelTimer_2(float value)
	{
		___levelTimer_2 = value;
	}

	inline static int32_t get_offset_of_minute_3() { return static_cast<int32_t>(offsetof(LevelTimer_t2190076481, ___minute_3)); }
	inline float get_minute_3() const { return ___minute_3; }
	inline float* get_address_of_minute_3() { return &___minute_3; }
	inline void set_minute_3(float value)
	{
		___minute_3 = value;
	}

	inline static int32_t get_offset_of_cm_4() { return static_cast<int32_t>(offsetof(LevelTimer_t2190076481, ___cm_4)); }
	inline ContentManager_t188544276 * get_cm_4() const { return ___cm_4; }
	inline ContentManager_t188544276 ** get_address_of_cm_4() { return &___cm_4; }
	inline void set_cm_4(ContentManager_t188544276 * value)
	{
		___cm_4 = value;
		Il2CppCodeGenWriteBarrier(&___cm_4, value);
	}

	inline static int32_t get_offset_of_users_5() { return static_cast<int32_t>(offsetof(LevelTimer_t2190076481, ___users_5)); }
	inline userCounter_t655964081 * get_users_5() const { return ___users_5; }
	inline userCounter_t655964081 ** get_address_of_users_5() { return &___users_5; }
	inline void set_users_5(userCounter_t655964081 * value)
	{
		___users_5 = value;
		Il2CppCodeGenWriteBarrier(&___users_5, value);
	}

	inline static int32_t get_offset_of_finalUserCount_6() { return static_cast<int32_t>(offsetof(LevelTimer_t2190076481, ___finalUserCount_6)); }
	inline int32_t get_finalUserCount_6() const { return ___finalUserCount_6; }
	inline int32_t* get_address_of_finalUserCount_6() { return &___finalUserCount_6; }
	inline void set_finalUserCount_6(int32_t value)
	{
		___finalUserCount_6 = value;
	}

	inline static int32_t get_offset_of_gameOver_7() { return static_cast<int32_t>(offsetof(LevelTimer_t2190076481, ___gameOver_7)); }
	inline bool get_gameOver_7() const { return ___gameOver_7; }
	inline bool* get_address_of_gameOver_7() { return &___gameOver_7; }
	inline void set_gameOver_7(bool value)
	{
		___gameOver_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
