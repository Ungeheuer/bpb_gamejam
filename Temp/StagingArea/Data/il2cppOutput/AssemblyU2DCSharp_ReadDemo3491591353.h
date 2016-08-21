#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.TextAsset
struct TextAsset_t3836129977;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ReadDemo
struct  ReadDemo_t3491591353  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.TextAsset ReadDemo::csv
	TextAsset_t3836129977 * ___csv_2;

public:
	inline static int32_t get_offset_of_csv_2() { return static_cast<int32_t>(offsetof(ReadDemo_t3491591353, ___csv_2)); }
	inline TextAsset_t3836129977 * get_csv_2() const { return ___csv_2; }
	inline TextAsset_t3836129977 ** get_address_of_csv_2() { return &___csv_2; }
	inline void set_csv_2(TextAsset_t3836129977 * value)
	{
		___csv_2 = value;
		Il2CppCodeGenWriteBarrier(&___csv_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
