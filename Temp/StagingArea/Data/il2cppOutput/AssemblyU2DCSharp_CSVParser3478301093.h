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
// System.String[,]
struct StringU5BU2CU5D_t4054002953;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CSVParser
struct  CSVParser_t3478301093  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.TextAsset CSVParser::csvFile
	TextAsset_t3836129977 * ___csvFile_2;

public:
	inline static int32_t get_offset_of_csvFile_2() { return static_cast<int32_t>(offsetof(CSVParser_t3478301093, ___csvFile_2)); }
	inline TextAsset_t3836129977 * get_csvFile_2() const { return ___csvFile_2; }
	inline TextAsset_t3836129977 ** get_address_of_csvFile_2() { return &___csvFile_2; }
	inline void set_csvFile_2(TextAsset_t3836129977 * value)
	{
		___csvFile_2 = value;
		Il2CppCodeGenWriteBarrier(&___csvFile_2, value);
	}
};

struct CSVParser_t3478301093_StaticFields
{
public:
	// System.String[,] CSVParser::grid
	StringU5BU2CU5D_t4054002953* ___grid_3;

public:
	inline static int32_t get_offset_of_grid_3() { return static_cast<int32_t>(offsetof(CSVParser_t3478301093_StaticFields, ___grid_3)); }
	inline StringU5BU2CU5D_t4054002953* get_grid_3() const { return ___grid_3; }
	inline StringU5BU2CU5D_t4054002953** get_address_of_grid_3() { return &___grid_3; }
	inline void set_grid_3(StringU5BU2CU5D_t4054002953* value)
	{
		___grid_3 = value;
		Il2CppCodeGenWriteBarrier(&___grid_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
