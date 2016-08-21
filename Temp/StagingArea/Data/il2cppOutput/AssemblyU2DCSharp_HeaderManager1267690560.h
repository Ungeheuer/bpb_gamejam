#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.TextMesh
struct TextMesh_t2567681854;
// userCounter
struct userCounter_t655964081;
// LevelTimer
struct LevelTimer_t2190076481;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "mscorlib_System_DateTime4283661327.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HeaderManager
struct  HeaderManager_t1267690560  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.TextMesh HeaderManager::HeaderTextLeft
	TextMesh_t2567681854 * ___HeaderTextLeft_2;
	// UnityEngine.TextMesh HeaderManager::HeaderTextRight
	TextMesh_t2567681854 * ___HeaderTextRight_3;
	// System.DateTime HeaderManager::date
	DateTime_t4283661327  ___date_4;
	// userCounter HeaderManager::users
	userCounter_t655964081 * ___users_5;
	// LevelTimer HeaderManager::lt
	LevelTimer_t2190076481 * ___lt_6;

public:
	inline static int32_t get_offset_of_HeaderTextLeft_2() { return static_cast<int32_t>(offsetof(HeaderManager_t1267690560, ___HeaderTextLeft_2)); }
	inline TextMesh_t2567681854 * get_HeaderTextLeft_2() const { return ___HeaderTextLeft_2; }
	inline TextMesh_t2567681854 ** get_address_of_HeaderTextLeft_2() { return &___HeaderTextLeft_2; }
	inline void set_HeaderTextLeft_2(TextMesh_t2567681854 * value)
	{
		___HeaderTextLeft_2 = value;
		Il2CppCodeGenWriteBarrier(&___HeaderTextLeft_2, value);
	}

	inline static int32_t get_offset_of_HeaderTextRight_3() { return static_cast<int32_t>(offsetof(HeaderManager_t1267690560, ___HeaderTextRight_3)); }
	inline TextMesh_t2567681854 * get_HeaderTextRight_3() const { return ___HeaderTextRight_3; }
	inline TextMesh_t2567681854 ** get_address_of_HeaderTextRight_3() { return &___HeaderTextRight_3; }
	inline void set_HeaderTextRight_3(TextMesh_t2567681854 * value)
	{
		___HeaderTextRight_3 = value;
		Il2CppCodeGenWriteBarrier(&___HeaderTextRight_3, value);
	}

	inline static int32_t get_offset_of_date_4() { return static_cast<int32_t>(offsetof(HeaderManager_t1267690560, ___date_4)); }
	inline DateTime_t4283661327  get_date_4() const { return ___date_4; }
	inline DateTime_t4283661327 * get_address_of_date_4() { return &___date_4; }
	inline void set_date_4(DateTime_t4283661327  value)
	{
		___date_4 = value;
	}

	inline static int32_t get_offset_of_users_5() { return static_cast<int32_t>(offsetof(HeaderManager_t1267690560, ___users_5)); }
	inline userCounter_t655964081 * get_users_5() const { return ___users_5; }
	inline userCounter_t655964081 ** get_address_of_users_5() { return &___users_5; }
	inline void set_users_5(userCounter_t655964081 * value)
	{
		___users_5 = value;
		Il2CppCodeGenWriteBarrier(&___users_5, value);
	}

	inline static int32_t get_offset_of_lt_6() { return static_cast<int32_t>(offsetof(HeaderManager_t1267690560, ___lt_6)); }
	inline LevelTimer_t2190076481 * get_lt_6() const { return ___lt_6; }
	inline LevelTimer_t2190076481 ** get_address_of_lt_6() { return &___lt_6; }
	inline void set_lt_6(LevelTimer_t2190076481 * value)
	{
		___lt_6 = value;
		Il2CppCodeGenWriteBarrier(&___lt_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
