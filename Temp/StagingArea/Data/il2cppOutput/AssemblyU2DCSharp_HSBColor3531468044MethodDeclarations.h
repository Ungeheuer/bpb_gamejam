#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// HSBColor
struct HSBColor_t3531468044;
struct HSBColor_t3531468044_marshaled_pinvoke;
struct HSBColor_t3531468044_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_HSBColor3531468044.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

// System.Void HSBColor::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void HSBColor__ctor_m4032596587 (HSBColor_t3531468044 * __this, float ___h0, float ___s1, float ___b2, float ___a3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HSBColor::.ctor(System.Single,System.Single,System.Single)
extern "C"  void HSBColor__ctor_m4238934534 (HSBColor_t3531468044 * __this, float ___h0, float ___s1, float ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HSBColor::.ctor(UnityEngine.Color)
extern "C"  void HSBColor__ctor_m1533143799 (HSBColor_t3531468044 * __this, Color_t4194546905  ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HSBColor HSBColor::FromColor(UnityEngine.Color)
extern "C"  HSBColor_t3531468044  HSBColor_FromColor_m2446591377 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color HSBColor::ToColor(HSBColor)
extern "C"  Color_t4194546905  HSBColor_ToColor_m1585826978 (Il2CppObject * __this /* static, unused */, HSBColor_t3531468044  ___hsbColor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color HSBColor::ToColor()
extern "C"  Color_t4194546905  HSBColor_ToColor_m2368531758 (HSBColor_t3531468044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HSBColor::ToString()
extern "C"  String_t* HSBColor_ToString_m2805151844 (HSBColor_t3531468044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HSBColor HSBColor::Lerp(HSBColor,HSBColor,System.Single)
extern "C"  HSBColor_t3531468044  HSBColor_Lerp_m3351269006 (Il2CppObject * __this /* static, unused */, HSBColor_t3531468044  ___a0, HSBColor_t3531468044  ___b1, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HSBColor::Test()
extern "C"  void HSBColor_Test_m3464411239 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct HSBColor_t3531468044;
struct HSBColor_t3531468044_marshaled_pinvoke;

extern "C" void HSBColor_t3531468044_marshal_pinvoke(const HSBColor_t3531468044& unmarshaled, HSBColor_t3531468044_marshaled_pinvoke& marshaled);
extern "C" void HSBColor_t3531468044_marshal_pinvoke_back(const HSBColor_t3531468044_marshaled_pinvoke& marshaled, HSBColor_t3531468044& unmarshaled);
extern "C" void HSBColor_t3531468044_marshal_pinvoke_cleanup(HSBColor_t3531468044_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct HSBColor_t3531468044;
struct HSBColor_t3531468044_marshaled_com;

extern "C" void HSBColor_t3531468044_marshal_com(const HSBColor_t3531468044& unmarshaled, HSBColor_t3531468044_marshaled_com& marshaled);
extern "C" void HSBColor_t3531468044_marshal_com_back(const HSBColor_t3531468044_marshaled_com& marshaled, HSBColor_t3531468044& unmarshaled);
extern "C" void HSBColor_t3531468044_marshal_com_cleanup(HSBColor_t3531468044_marshaled_com& marshaled);
