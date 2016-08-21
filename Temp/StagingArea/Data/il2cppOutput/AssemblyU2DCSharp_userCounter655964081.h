#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AudioManager
struct AudioManager_t3708191511;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// userCounter
struct  userCounter_t655964081  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 userCounter::userCount
	int32_t ___userCount_2;
	// AudioManager userCounter::am
	AudioManager_t3708191511 * ___am_3;

public:
	inline static int32_t get_offset_of_userCount_2() { return static_cast<int32_t>(offsetof(userCounter_t655964081, ___userCount_2)); }
	inline int32_t get_userCount_2() const { return ___userCount_2; }
	inline int32_t* get_address_of_userCount_2() { return &___userCount_2; }
	inline void set_userCount_2(int32_t value)
	{
		___userCount_2 = value;
	}

	inline static int32_t get_offset_of_am_3() { return static_cast<int32_t>(offsetof(userCounter_t655964081, ___am_3)); }
	inline AudioManager_t3708191511 * get_am_3() const { return ___am_3; }
	inline AudioManager_t3708191511 ** get_address_of_am_3() { return &___am_3; }
	inline void set_am_3(AudioManager_t3708191511 * value)
	{
		___am_3 = value;
		Il2CppCodeGenWriteBarrier(&___am_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
