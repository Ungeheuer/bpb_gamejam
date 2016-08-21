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
// CommentManager
struct CommentManager_t4048186478;
// ContentManager
struct ContentManager_t188544276;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonController
struct  ButtonController_t2447168654  : public MonoBehaviour_t667441552
{
public:
	// System.String ButtonController::name
	String_t* ___name_2;
	// CommentManager ButtonController::timerManager
	CommentManager_t4048186478 * ___timerManager_3;
	// ContentManager ButtonController::contentManager
	ContentManager_t188544276 * ___contentManager_4;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(ButtonController_t2447168654, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_timerManager_3() { return static_cast<int32_t>(offsetof(ButtonController_t2447168654, ___timerManager_3)); }
	inline CommentManager_t4048186478 * get_timerManager_3() const { return ___timerManager_3; }
	inline CommentManager_t4048186478 ** get_address_of_timerManager_3() { return &___timerManager_3; }
	inline void set_timerManager_3(CommentManager_t4048186478 * value)
	{
		___timerManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___timerManager_3, value);
	}

	inline static int32_t get_offset_of_contentManager_4() { return static_cast<int32_t>(offsetof(ButtonController_t2447168654, ___contentManager_4)); }
	inline ContentManager_t188544276 * get_contentManager_4() const { return ___contentManager_4; }
	inline ContentManager_t188544276 ** get_address_of_contentManager_4() { return &___contentManager_4; }
	inline void set_contentManager_4(ContentManager_t188544276 * value)
	{
		___contentManager_4 = value;
		Il2CppCodeGenWriteBarrier(&___contentManager_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
