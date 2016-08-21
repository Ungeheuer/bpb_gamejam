#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t44861630;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioManager
struct  AudioManager_t3708191511  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AudioSource[] AudioManager::audioSources
	AudioSourceU5BU5D_t44861630* ___audioSources_2;

public:
	inline static int32_t get_offset_of_audioSources_2() { return static_cast<int32_t>(offsetof(AudioManager_t3708191511, ___audioSources_2)); }
	inline AudioSourceU5BU5D_t44861630* get_audioSources_2() const { return ___audioSources_2; }
	inline AudioSourceU5BU5D_t44861630** get_address_of_audioSources_2() { return &___audioSources_2; }
	inline void set_audioSources_2(AudioSourceU5BU5D_t44861630* value)
	{
		___audioSources_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioSources_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
