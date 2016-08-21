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
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FinalScreenManager
struct  FinalScreenManager_t3417542635  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 FinalScreenManager::toScrollViewFrames
	int32_t ___toScrollViewFrames_2;
	// System.Single FinalScreenManager::verticalOffset
	float ___verticalOffset_3;
	// System.Single FinalScreenManager::scrollViewLimit
	float ___scrollViewLimit_4;
	// System.Single FinalScreenManager::scrollViewStart
	float ___scrollViewStart_5;
	// UnityEngine.Vector3 FinalScreenManager::contentStartPosition
	Vector3_t4282066566  ___contentStartPosition_6;
	// System.Boolean FinalScreenManager::scrolling
	bool ___scrolling_7;
	// System.Single FinalScreenManager::targetCameraHeight
	float ___targetCameraHeight_8;
	// System.Boolean FinalScreenManager::mouseDown
	bool ___mouseDown_9;
	// System.Int32 FinalScreenManager::mouseDownFrames
	int32_t ___mouseDownFrames_10;
	// UnityEngine.TextMesh FinalScreenManager::userCountText
	TextMesh_t2567681854 * ___userCountText_11;
	// UnityEngine.TextMesh FinalScreenManager::commentText
	TextMesh_t2567681854 * ___commentText_12;
	// UnityEngine.GameObject FinalScreenManager::cm
	GameObject_t3674682005 * ___cm_13;
	// UnityEngine.GameObject FinalScreenManager::lt
	GameObject_t3674682005 * ___lt_14;
	// UnityEngine.GameObject FinalScreenManager::hm
	GameObject_t3674682005 * ___hm_15;
	// UnityEngine.GameObject FinalScreenManager::cc
	GameObject_t3674682005 * ___cc_16;

public:
	inline static int32_t get_offset_of_toScrollViewFrames_2() { return static_cast<int32_t>(offsetof(FinalScreenManager_t3417542635, ___toScrollViewFrames_2)); }
	inline int32_t get_toScrollViewFrames_2() const { return ___toScrollViewFrames_2; }
	inline int32_t* get_address_of_toScrollViewFrames_2() { return &___toScrollViewFrames_2; }
	inline void set_toScrollViewFrames_2(int32_t value)
	{
		___toScrollViewFrames_2 = value;
	}

	inline static int32_t get_offset_of_verticalOffset_3() { return static_cast<int32_t>(offsetof(FinalScreenManager_t3417542635, ___verticalOffset_3)); }
	inline float get_verticalOffset_3() const { return ___verticalOffset_3; }
	inline float* get_address_of_verticalOffset_3() { return &___verticalOffset_3; }
	inline void set_verticalOffset_3(float value)
	{
		___verticalOffset_3 = value;
	}

	inline static int32_t get_offset_of_scrollViewLimit_4() { return static_cast<int32_t>(offsetof(FinalScreenManager_t3417542635, ___scrollViewLimit_4)); }
	inline float get_scrollViewLimit_4() const { return ___scrollViewLimit_4; }
	inline float* get_address_of_scrollViewLimit_4() { return &___scrollViewLimit_4; }
	inline void set_scrollViewLimit_4(float value)
	{
		___scrollViewLimit_4 = value;
	}

	inline static int32_t get_offset_of_scrollViewStart_5() { return static_cast<int32_t>(offsetof(FinalScreenManager_t3417542635, ___scrollViewStart_5)); }
	inline float get_scrollViewStart_5() const { return ___scrollViewStart_5; }
	inline float* get_address_of_scrollViewStart_5() { return &___scrollViewStart_5; }
	inline void set_scrollViewStart_5(float value)
	{
		___scrollViewStart_5 = value;
	}

	inline static int32_t get_offset_of_contentStartPosition_6() { return static_cast<int32_t>(offsetof(FinalScreenManager_t3417542635, ___contentStartPosition_6)); }
	inline Vector3_t4282066566  get_contentStartPosition_6() const { return ___contentStartPosition_6; }
	inline Vector3_t4282066566 * get_address_of_contentStartPosition_6() { return &___contentStartPosition_6; }
	inline void set_contentStartPosition_6(Vector3_t4282066566  value)
	{
		___contentStartPosition_6 = value;
	}

	inline static int32_t get_offset_of_scrolling_7() { return static_cast<int32_t>(offsetof(FinalScreenManager_t3417542635, ___scrolling_7)); }
	inline bool get_scrolling_7() const { return ___scrolling_7; }
	inline bool* get_address_of_scrolling_7() { return &___scrolling_7; }
	inline void set_scrolling_7(bool value)
	{
		___scrolling_7 = value;
	}

	inline static int32_t get_offset_of_targetCameraHeight_8() { return static_cast<int32_t>(offsetof(FinalScreenManager_t3417542635, ___targetCameraHeight_8)); }
	inline float get_targetCameraHeight_8() const { return ___targetCameraHeight_8; }
	inline float* get_address_of_targetCameraHeight_8() { return &___targetCameraHeight_8; }
	inline void set_targetCameraHeight_8(float value)
	{
		___targetCameraHeight_8 = value;
	}

	inline static int32_t get_offset_of_mouseDown_9() { return static_cast<int32_t>(offsetof(FinalScreenManager_t3417542635, ___mouseDown_9)); }
	inline bool get_mouseDown_9() const { return ___mouseDown_9; }
	inline bool* get_address_of_mouseDown_9() { return &___mouseDown_9; }
	inline void set_mouseDown_9(bool value)
	{
		___mouseDown_9 = value;
	}

	inline static int32_t get_offset_of_mouseDownFrames_10() { return static_cast<int32_t>(offsetof(FinalScreenManager_t3417542635, ___mouseDownFrames_10)); }
	inline int32_t get_mouseDownFrames_10() const { return ___mouseDownFrames_10; }
	inline int32_t* get_address_of_mouseDownFrames_10() { return &___mouseDownFrames_10; }
	inline void set_mouseDownFrames_10(int32_t value)
	{
		___mouseDownFrames_10 = value;
	}

	inline static int32_t get_offset_of_userCountText_11() { return static_cast<int32_t>(offsetof(FinalScreenManager_t3417542635, ___userCountText_11)); }
	inline TextMesh_t2567681854 * get_userCountText_11() const { return ___userCountText_11; }
	inline TextMesh_t2567681854 ** get_address_of_userCountText_11() { return &___userCountText_11; }
	inline void set_userCountText_11(TextMesh_t2567681854 * value)
	{
		___userCountText_11 = value;
		Il2CppCodeGenWriteBarrier(&___userCountText_11, value);
	}

	inline static int32_t get_offset_of_commentText_12() { return static_cast<int32_t>(offsetof(FinalScreenManager_t3417542635, ___commentText_12)); }
	inline TextMesh_t2567681854 * get_commentText_12() const { return ___commentText_12; }
	inline TextMesh_t2567681854 ** get_address_of_commentText_12() { return &___commentText_12; }
	inline void set_commentText_12(TextMesh_t2567681854 * value)
	{
		___commentText_12 = value;
		Il2CppCodeGenWriteBarrier(&___commentText_12, value);
	}

	inline static int32_t get_offset_of_cm_13() { return static_cast<int32_t>(offsetof(FinalScreenManager_t3417542635, ___cm_13)); }
	inline GameObject_t3674682005 * get_cm_13() const { return ___cm_13; }
	inline GameObject_t3674682005 ** get_address_of_cm_13() { return &___cm_13; }
	inline void set_cm_13(GameObject_t3674682005 * value)
	{
		___cm_13 = value;
		Il2CppCodeGenWriteBarrier(&___cm_13, value);
	}

	inline static int32_t get_offset_of_lt_14() { return static_cast<int32_t>(offsetof(FinalScreenManager_t3417542635, ___lt_14)); }
	inline GameObject_t3674682005 * get_lt_14() const { return ___lt_14; }
	inline GameObject_t3674682005 ** get_address_of_lt_14() { return &___lt_14; }
	inline void set_lt_14(GameObject_t3674682005 * value)
	{
		___lt_14 = value;
		Il2CppCodeGenWriteBarrier(&___lt_14, value);
	}

	inline static int32_t get_offset_of_hm_15() { return static_cast<int32_t>(offsetof(FinalScreenManager_t3417542635, ___hm_15)); }
	inline GameObject_t3674682005 * get_hm_15() const { return ___hm_15; }
	inline GameObject_t3674682005 ** get_address_of_hm_15() { return &___hm_15; }
	inline void set_hm_15(GameObject_t3674682005 * value)
	{
		___hm_15 = value;
		Il2CppCodeGenWriteBarrier(&___hm_15, value);
	}

	inline static int32_t get_offset_of_cc_16() { return static_cast<int32_t>(offsetof(FinalScreenManager_t3417542635, ___cc_16)); }
	inline GameObject_t3674682005 * get_cc_16() const { return ___cc_16; }
	inline GameObject_t3674682005 ** get_address_of_cc_16() { return &___cc_16; }
	inline void set_cc_16(GameObject_t3674682005 * value)
	{
		___cc_16 = value;
		Il2CppCodeGenWriteBarrier(&___cc_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
