#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Color[]
struct ColorU5BU5D_t2441545636;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "AssemblyU2DCSharp_IconGenerator_Pattern3057159323.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IconGenerator/IconSettings
struct  IconSettings_t602743185  : public Il2CppObject
{
public:
	// System.Int32 IconGenerator/IconSettings::pixelScale
	int32_t ___pixelScale_0;
	// UnityEngine.Color IconGenerator/IconSettings::baseColor
	Color_t4194546905  ___baseColor_1;
	// System.Int32 IconGenerator/IconSettings::baseColorProbability
	int32_t ___baseColorProbability_2;
	// System.Boolean IconGenerator/IconSettings::randomOtherColors
	bool ___randomOtherColors_3;
	// UnityEngine.Color[] IconGenerator/IconSettings::otherColors
	ColorU5BU5D_t2441545636* ___otherColors_4;
	// System.Boolean IconGenerator/IconSettings::multipleColors
	bool ___multipleColors_5;
	// IconGenerator/Pattern IconGenerator/IconSettings::pattern
	int32_t ___pattern_6;

public:
	inline static int32_t get_offset_of_pixelScale_0() { return static_cast<int32_t>(offsetof(IconSettings_t602743185, ___pixelScale_0)); }
	inline int32_t get_pixelScale_0() const { return ___pixelScale_0; }
	inline int32_t* get_address_of_pixelScale_0() { return &___pixelScale_0; }
	inline void set_pixelScale_0(int32_t value)
	{
		___pixelScale_0 = value;
	}

	inline static int32_t get_offset_of_baseColor_1() { return static_cast<int32_t>(offsetof(IconSettings_t602743185, ___baseColor_1)); }
	inline Color_t4194546905  get_baseColor_1() const { return ___baseColor_1; }
	inline Color_t4194546905 * get_address_of_baseColor_1() { return &___baseColor_1; }
	inline void set_baseColor_1(Color_t4194546905  value)
	{
		___baseColor_1 = value;
	}

	inline static int32_t get_offset_of_baseColorProbability_2() { return static_cast<int32_t>(offsetof(IconSettings_t602743185, ___baseColorProbability_2)); }
	inline int32_t get_baseColorProbability_2() const { return ___baseColorProbability_2; }
	inline int32_t* get_address_of_baseColorProbability_2() { return &___baseColorProbability_2; }
	inline void set_baseColorProbability_2(int32_t value)
	{
		___baseColorProbability_2 = value;
	}

	inline static int32_t get_offset_of_randomOtherColors_3() { return static_cast<int32_t>(offsetof(IconSettings_t602743185, ___randomOtherColors_3)); }
	inline bool get_randomOtherColors_3() const { return ___randomOtherColors_3; }
	inline bool* get_address_of_randomOtherColors_3() { return &___randomOtherColors_3; }
	inline void set_randomOtherColors_3(bool value)
	{
		___randomOtherColors_3 = value;
	}

	inline static int32_t get_offset_of_otherColors_4() { return static_cast<int32_t>(offsetof(IconSettings_t602743185, ___otherColors_4)); }
	inline ColorU5BU5D_t2441545636* get_otherColors_4() const { return ___otherColors_4; }
	inline ColorU5BU5D_t2441545636** get_address_of_otherColors_4() { return &___otherColors_4; }
	inline void set_otherColors_4(ColorU5BU5D_t2441545636* value)
	{
		___otherColors_4 = value;
		Il2CppCodeGenWriteBarrier(&___otherColors_4, value);
	}

	inline static int32_t get_offset_of_multipleColors_5() { return static_cast<int32_t>(offsetof(IconSettings_t602743185, ___multipleColors_5)); }
	inline bool get_multipleColors_5() const { return ___multipleColors_5; }
	inline bool* get_address_of_multipleColors_5() { return &___multipleColors_5; }
	inline void set_multipleColors_5(bool value)
	{
		___multipleColors_5 = value;
	}

	inline static int32_t get_offset_of_pattern_6() { return static_cast<int32_t>(offsetof(IconSettings_t602743185, ___pattern_6)); }
	inline int32_t get_pattern_6() const { return ___pattern_6; }
	inline int32_t* get_address_of_pattern_6() { return &___pattern_6; }
	inline void set_pattern_6(int32_t value)
	{
		___pattern_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
