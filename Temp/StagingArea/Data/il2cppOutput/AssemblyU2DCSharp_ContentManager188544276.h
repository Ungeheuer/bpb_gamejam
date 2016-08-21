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
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// System.Collections.Generic.List`1<System.String[]>
struct List_1_t1127221208;
// userCounter
struct userCounter_t655964081;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ContentManager
struct  ContentManager_t188544276  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject ContentManager::commentPrefab
	GameObject_t3674682005 * ___commentPrefab_2;
	// UnityEngine.GameObject ContentManager::inputPrefab
	GameObject_t3674682005 * ___inputPrefab_3;
	// System.Int32 ContentManager::toScrollViewFrames
	int32_t ___toScrollViewFrames_4;
	// System.Single ContentManager::verticalOffset
	float ___verticalOffset_5;
	// System.Single ContentManager::scrollViewLimit
	float ___scrollViewLimit_6;
	// System.Single ContentManager::scrollViewStart
	float ___scrollViewStart_7;
	// UnityEngine.Vector3 ContentManager::contentStartPosition
	Vector3_t4282066566  ___contentStartPosition_8;
	// System.Boolean ContentManager::scrolling
	bool ___scrolling_9;
	// System.Single ContentManager::targetCameraHeight
	float ___targetCameraHeight_10;
	// System.Boolean ContentManager::mouseDown
	bool ___mouseDown_11;
	// System.Int32 ContentManager::mouseDownFrames
	int32_t ___mouseDownFrames_12;
	// System.Boolean ContentManager::hasGameStarted
	bool ___hasGameStarted_13;
	// UnityEngine.GameObject ContentManager::contentHolder
	GameObject_t3674682005 * ___contentHolder_14;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ContentManager::comments
	List_1_t747900261 * ___comments_15;
	// System.Collections.Generic.List`1<System.String[]> ContentManager::deletedComments
	List_1_t1127221208 * ___deletedComments_16;
	// System.Collections.Generic.List`1<System.String[]> ContentManager::acceptedComments
	List_1_t1127221208 * ___acceptedComments_17;
	// userCounter ContentManager::users
	userCounter_t655964081 * ___users_18;
	// UnityEngine.GameObject ContentManager::input
	GameObject_t3674682005 * ___input_19;
	// System.Int32 ContentManager::commentNo
	int32_t ___commentNo_20;
	// System.Single ContentManager::newCommentTimer
	float ___newCommentTimer_21;
	// System.Single ContentManager::newCommentSpeed
	float ___newCommentSpeed_22;

public:
	inline static int32_t get_offset_of_commentPrefab_2() { return static_cast<int32_t>(offsetof(ContentManager_t188544276, ___commentPrefab_2)); }
	inline GameObject_t3674682005 * get_commentPrefab_2() const { return ___commentPrefab_2; }
	inline GameObject_t3674682005 ** get_address_of_commentPrefab_2() { return &___commentPrefab_2; }
	inline void set_commentPrefab_2(GameObject_t3674682005 * value)
	{
		___commentPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___commentPrefab_2, value);
	}

	inline static int32_t get_offset_of_inputPrefab_3() { return static_cast<int32_t>(offsetof(ContentManager_t188544276, ___inputPrefab_3)); }
	inline GameObject_t3674682005 * get_inputPrefab_3() const { return ___inputPrefab_3; }
	inline GameObject_t3674682005 ** get_address_of_inputPrefab_3() { return &___inputPrefab_3; }
	inline void set_inputPrefab_3(GameObject_t3674682005 * value)
	{
		___inputPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___inputPrefab_3, value);
	}

	inline static int32_t get_offset_of_toScrollViewFrames_4() { return static_cast<int32_t>(offsetof(ContentManager_t188544276, ___toScrollViewFrames_4)); }
	inline int32_t get_toScrollViewFrames_4() const { return ___toScrollViewFrames_4; }
	inline int32_t* get_address_of_toScrollViewFrames_4() { return &___toScrollViewFrames_4; }
	inline void set_toScrollViewFrames_4(int32_t value)
	{
		___toScrollViewFrames_4 = value;
	}

	inline static int32_t get_offset_of_verticalOffset_5() { return static_cast<int32_t>(offsetof(ContentManager_t188544276, ___verticalOffset_5)); }
	inline float get_verticalOffset_5() const { return ___verticalOffset_5; }
	inline float* get_address_of_verticalOffset_5() { return &___verticalOffset_5; }
	inline void set_verticalOffset_5(float value)
	{
		___verticalOffset_5 = value;
	}

	inline static int32_t get_offset_of_scrollViewLimit_6() { return static_cast<int32_t>(offsetof(ContentManager_t188544276, ___scrollViewLimit_6)); }
	inline float get_scrollViewLimit_6() const { return ___scrollViewLimit_6; }
	inline float* get_address_of_scrollViewLimit_6() { return &___scrollViewLimit_6; }
	inline void set_scrollViewLimit_6(float value)
	{
		___scrollViewLimit_6 = value;
	}

	inline static int32_t get_offset_of_scrollViewStart_7() { return static_cast<int32_t>(offsetof(ContentManager_t188544276, ___scrollViewStart_7)); }
	inline float get_scrollViewStart_7() const { return ___scrollViewStart_7; }
	inline float* get_address_of_scrollViewStart_7() { return &___scrollViewStart_7; }
	inline void set_scrollViewStart_7(float value)
	{
		___scrollViewStart_7 = value;
	}

	inline static int32_t get_offset_of_contentStartPosition_8() { return static_cast<int32_t>(offsetof(ContentManager_t188544276, ___contentStartPosition_8)); }
	inline Vector3_t4282066566  get_contentStartPosition_8() const { return ___contentStartPosition_8; }
	inline Vector3_t4282066566 * get_address_of_contentStartPosition_8() { return &___contentStartPosition_8; }
	inline void set_contentStartPosition_8(Vector3_t4282066566  value)
	{
		___contentStartPosition_8 = value;
	}

	inline static int32_t get_offset_of_scrolling_9() { return static_cast<int32_t>(offsetof(ContentManager_t188544276, ___scrolling_9)); }
	inline bool get_scrolling_9() const { return ___scrolling_9; }
	inline bool* get_address_of_scrolling_9() { return &___scrolling_9; }
	inline void set_scrolling_9(bool value)
	{
		___scrolling_9 = value;
	}

	inline static int32_t get_offset_of_targetCameraHeight_10() { return static_cast<int32_t>(offsetof(ContentManager_t188544276, ___targetCameraHeight_10)); }
	inline float get_targetCameraHeight_10() const { return ___targetCameraHeight_10; }
	inline float* get_address_of_targetCameraHeight_10() { return &___targetCameraHeight_10; }
	inline void set_targetCameraHeight_10(float value)
	{
		___targetCameraHeight_10 = value;
	}

	inline static int32_t get_offset_of_mouseDown_11() { return static_cast<int32_t>(offsetof(ContentManager_t188544276, ___mouseDown_11)); }
	inline bool get_mouseDown_11() const { return ___mouseDown_11; }
	inline bool* get_address_of_mouseDown_11() { return &___mouseDown_11; }
	inline void set_mouseDown_11(bool value)
	{
		___mouseDown_11 = value;
	}

	inline static int32_t get_offset_of_mouseDownFrames_12() { return static_cast<int32_t>(offsetof(ContentManager_t188544276, ___mouseDownFrames_12)); }
	inline int32_t get_mouseDownFrames_12() const { return ___mouseDownFrames_12; }
	inline int32_t* get_address_of_mouseDownFrames_12() { return &___mouseDownFrames_12; }
	inline void set_mouseDownFrames_12(int32_t value)
	{
		___mouseDownFrames_12 = value;
	}

	inline static int32_t get_offset_of_hasGameStarted_13() { return static_cast<int32_t>(offsetof(ContentManager_t188544276, ___hasGameStarted_13)); }
	inline bool get_hasGameStarted_13() const { return ___hasGameStarted_13; }
	inline bool* get_address_of_hasGameStarted_13() { return &___hasGameStarted_13; }
	inline void set_hasGameStarted_13(bool value)
	{
		___hasGameStarted_13 = value;
	}

	inline static int32_t get_offset_of_contentHolder_14() { return static_cast<int32_t>(offsetof(ContentManager_t188544276, ___contentHolder_14)); }
	inline GameObject_t3674682005 * get_contentHolder_14() const { return ___contentHolder_14; }
	inline GameObject_t3674682005 ** get_address_of_contentHolder_14() { return &___contentHolder_14; }
	inline void set_contentHolder_14(GameObject_t3674682005 * value)
	{
		___contentHolder_14 = value;
		Il2CppCodeGenWriteBarrier(&___contentHolder_14, value);
	}

	inline static int32_t get_offset_of_comments_15() { return static_cast<int32_t>(offsetof(ContentManager_t188544276, ___comments_15)); }
	inline List_1_t747900261 * get_comments_15() const { return ___comments_15; }
	inline List_1_t747900261 ** get_address_of_comments_15() { return &___comments_15; }
	inline void set_comments_15(List_1_t747900261 * value)
	{
		___comments_15 = value;
		Il2CppCodeGenWriteBarrier(&___comments_15, value);
	}

	inline static int32_t get_offset_of_deletedComments_16() { return static_cast<int32_t>(offsetof(ContentManager_t188544276, ___deletedComments_16)); }
	inline List_1_t1127221208 * get_deletedComments_16() const { return ___deletedComments_16; }
	inline List_1_t1127221208 ** get_address_of_deletedComments_16() { return &___deletedComments_16; }
	inline void set_deletedComments_16(List_1_t1127221208 * value)
	{
		___deletedComments_16 = value;
		Il2CppCodeGenWriteBarrier(&___deletedComments_16, value);
	}

	inline static int32_t get_offset_of_acceptedComments_17() { return static_cast<int32_t>(offsetof(ContentManager_t188544276, ___acceptedComments_17)); }
	inline List_1_t1127221208 * get_acceptedComments_17() const { return ___acceptedComments_17; }
	inline List_1_t1127221208 ** get_address_of_acceptedComments_17() { return &___acceptedComments_17; }
	inline void set_acceptedComments_17(List_1_t1127221208 * value)
	{
		___acceptedComments_17 = value;
		Il2CppCodeGenWriteBarrier(&___acceptedComments_17, value);
	}

	inline static int32_t get_offset_of_users_18() { return static_cast<int32_t>(offsetof(ContentManager_t188544276, ___users_18)); }
	inline userCounter_t655964081 * get_users_18() const { return ___users_18; }
	inline userCounter_t655964081 ** get_address_of_users_18() { return &___users_18; }
	inline void set_users_18(userCounter_t655964081 * value)
	{
		___users_18 = value;
		Il2CppCodeGenWriteBarrier(&___users_18, value);
	}

	inline static int32_t get_offset_of_input_19() { return static_cast<int32_t>(offsetof(ContentManager_t188544276, ___input_19)); }
	inline GameObject_t3674682005 * get_input_19() const { return ___input_19; }
	inline GameObject_t3674682005 ** get_address_of_input_19() { return &___input_19; }
	inline void set_input_19(GameObject_t3674682005 * value)
	{
		___input_19 = value;
		Il2CppCodeGenWriteBarrier(&___input_19, value);
	}

	inline static int32_t get_offset_of_commentNo_20() { return static_cast<int32_t>(offsetof(ContentManager_t188544276, ___commentNo_20)); }
	inline int32_t get_commentNo_20() const { return ___commentNo_20; }
	inline int32_t* get_address_of_commentNo_20() { return &___commentNo_20; }
	inline void set_commentNo_20(int32_t value)
	{
		___commentNo_20 = value;
	}

	inline static int32_t get_offset_of_newCommentTimer_21() { return static_cast<int32_t>(offsetof(ContentManager_t188544276, ___newCommentTimer_21)); }
	inline float get_newCommentTimer_21() const { return ___newCommentTimer_21; }
	inline float* get_address_of_newCommentTimer_21() { return &___newCommentTimer_21; }
	inline void set_newCommentTimer_21(float value)
	{
		___newCommentTimer_21 = value;
	}

	inline static int32_t get_offset_of_newCommentSpeed_22() { return static_cast<int32_t>(offsetof(ContentManager_t188544276, ___newCommentSpeed_22)); }
	inline float get_newCommentSpeed_22() const { return ___newCommentSpeed_22; }
	inline float* get_address_of_newCommentSpeed_22() { return &___newCommentSpeed_22; }
	inline void set_newCommentSpeed_22(float value)
	{
		___newCommentSpeed_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
