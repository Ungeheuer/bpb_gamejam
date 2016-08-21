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
// UnityEngine.MeshRenderer
struct MeshRenderer_t2804666580;
// UnityEngine.TextMesh
struct TextMesh_t2567681854;
// ContentManager
struct ContentManager_t188544276;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CommentManager
struct  CommentManager_t4048186478  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject CommentManager::deleteButton
	GameObject_t3674682005 * ___deleteButton_2;
	// UnityEngine.MeshRenderer CommentManager::commentTexture
	MeshRenderer_t2804666580 * ___commentTexture_3;
	// UnityEngine.MeshRenderer CommentManager::commentBackground
	MeshRenderer_t2804666580 * ___commentBackground_4;
	// UnityEngine.TextMesh CommentManager::nameText
	TextMesh_t2567681854 * ___nameText_5;
	// UnityEngine.TextMesh CommentManager::commentText
	TextMesh_t2567681854 * ___commentText_6;
	// UnityEngine.TextMesh CommentManager::likeNumber
	TextMesh_t2567681854 * ___likeNumber_7;
	// UnityEngine.GameObject CommentManager::likeButton
	GameObject_t3674682005 * ___likeButton_8;
	// System.Int32 CommentManager::commentNo
	int32_t ___commentNo_9;
	// System.Int32 CommentManager::deleteImpact
	int32_t ___deleteImpact_10;
	// System.Int32 CommentManager::acceptImpact
	int32_t ___acceptImpact_11;
	// ContentManager CommentManager::cm
	ContentManager_t188544276 * ___cm_12;

public:
	inline static int32_t get_offset_of_deleteButton_2() { return static_cast<int32_t>(offsetof(CommentManager_t4048186478, ___deleteButton_2)); }
	inline GameObject_t3674682005 * get_deleteButton_2() const { return ___deleteButton_2; }
	inline GameObject_t3674682005 ** get_address_of_deleteButton_2() { return &___deleteButton_2; }
	inline void set_deleteButton_2(GameObject_t3674682005 * value)
	{
		___deleteButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___deleteButton_2, value);
	}

	inline static int32_t get_offset_of_commentTexture_3() { return static_cast<int32_t>(offsetof(CommentManager_t4048186478, ___commentTexture_3)); }
	inline MeshRenderer_t2804666580 * get_commentTexture_3() const { return ___commentTexture_3; }
	inline MeshRenderer_t2804666580 ** get_address_of_commentTexture_3() { return &___commentTexture_3; }
	inline void set_commentTexture_3(MeshRenderer_t2804666580 * value)
	{
		___commentTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___commentTexture_3, value);
	}

	inline static int32_t get_offset_of_commentBackground_4() { return static_cast<int32_t>(offsetof(CommentManager_t4048186478, ___commentBackground_4)); }
	inline MeshRenderer_t2804666580 * get_commentBackground_4() const { return ___commentBackground_4; }
	inline MeshRenderer_t2804666580 ** get_address_of_commentBackground_4() { return &___commentBackground_4; }
	inline void set_commentBackground_4(MeshRenderer_t2804666580 * value)
	{
		___commentBackground_4 = value;
		Il2CppCodeGenWriteBarrier(&___commentBackground_4, value);
	}

	inline static int32_t get_offset_of_nameText_5() { return static_cast<int32_t>(offsetof(CommentManager_t4048186478, ___nameText_5)); }
	inline TextMesh_t2567681854 * get_nameText_5() const { return ___nameText_5; }
	inline TextMesh_t2567681854 ** get_address_of_nameText_5() { return &___nameText_5; }
	inline void set_nameText_5(TextMesh_t2567681854 * value)
	{
		___nameText_5 = value;
		Il2CppCodeGenWriteBarrier(&___nameText_5, value);
	}

	inline static int32_t get_offset_of_commentText_6() { return static_cast<int32_t>(offsetof(CommentManager_t4048186478, ___commentText_6)); }
	inline TextMesh_t2567681854 * get_commentText_6() const { return ___commentText_6; }
	inline TextMesh_t2567681854 ** get_address_of_commentText_6() { return &___commentText_6; }
	inline void set_commentText_6(TextMesh_t2567681854 * value)
	{
		___commentText_6 = value;
		Il2CppCodeGenWriteBarrier(&___commentText_6, value);
	}

	inline static int32_t get_offset_of_likeNumber_7() { return static_cast<int32_t>(offsetof(CommentManager_t4048186478, ___likeNumber_7)); }
	inline TextMesh_t2567681854 * get_likeNumber_7() const { return ___likeNumber_7; }
	inline TextMesh_t2567681854 ** get_address_of_likeNumber_7() { return &___likeNumber_7; }
	inline void set_likeNumber_7(TextMesh_t2567681854 * value)
	{
		___likeNumber_7 = value;
		Il2CppCodeGenWriteBarrier(&___likeNumber_7, value);
	}

	inline static int32_t get_offset_of_likeButton_8() { return static_cast<int32_t>(offsetof(CommentManager_t4048186478, ___likeButton_8)); }
	inline GameObject_t3674682005 * get_likeButton_8() const { return ___likeButton_8; }
	inline GameObject_t3674682005 ** get_address_of_likeButton_8() { return &___likeButton_8; }
	inline void set_likeButton_8(GameObject_t3674682005 * value)
	{
		___likeButton_8 = value;
		Il2CppCodeGenWriteBarrier(&___likeButton_8, value);
	}

	inline static int32_t get_offset_of_commentNo_9() { return static_cast<int32_t>(offsetof(CommentManager_t4048186478, ___commentNo_9)); }
	inline int32_t get_commentNo_9() const { return ___commentNo_9; }
	inline int32_t* get_address_of_commentNo_9() { return &___commentNo_9; }
	inline void set_commentNo_9(int32_t value)
	{
		___commentNo_9 = value;
	}

	inline static int32_t get_offset_of_deleteImpact_10() { return static_cast<int32_t>(offsetof(CommentManager_t4048186478, ___deleteImpact_10)); }
	inline int32_t get_deleteImpact_10() const { return ___deleteImpact_10; }
	inline int32_t* get_address_of_deleteImpact_10() { return &___deleteImpact_10; }
	inline void set_deleteImpact_10(int32_t value)
	{
		___deleteImpact_10 = value;
	}

	inline static int32_t get_offset_of_acceptImpact_11() { return static_cast<int32_t>(offsetof(CommentManager_t4048186478, ___acceptImpact_11)); }
	inline int32_t get_acceptImpact_11() const { return ___acceptImpact_11; }
	inline int32_t* get_address_of_acceptImpact_11() { return &___acceptImpact_11; }
	inline void set_acceptImpact_11(int32_t value)
	{
		___acceptImpact_11 = value;
	}

	inline static int32_t get_offset_of_cm_12() { return static_cast<int32_t>(offsetof(CommentManager_t4048186478, ___cm_12)); }
	inline ContentManager_t188544276 * get_cm_12() const { return ___cm_12; }
	inline ContentManager_t188544276 ** get_address_of_cm_12() { return &___cm_12; }
	inline void set_cm_12(ContentManager_t188544276 * value)
	{
		___cm_12 = value;
		Il2CppCodeGenWriteBarrier(&___cm_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
