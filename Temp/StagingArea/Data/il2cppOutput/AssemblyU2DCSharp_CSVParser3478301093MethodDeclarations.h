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

// CSVParser
struct CSVParser_t3478301093;
// System.String
struct String_t;
// System.String[,]
struct StringU5BU2CU5D_t4054002953;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void CSVParser::.ctor()
extern "C"  void CSVParser__ctor_m3104601446 (CSVParser_t3478301093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CSVParser::Start()
extern "C"  void CSVParser_Start_m2051739238 (CSVParser_t3478301093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CSVParser::getCellText(System.Int32,System.Int32)
extern "C"  String_t* CSVParser_getCellText_m3488087354 (Il2CppObject * __this /* static, unused */, int32_t ___row0, int32_t ___col1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CSVParser::DebugOutputGrid(System.String[,])
extern "C"  void CSVParser_DebugOutputGrid_m2774549442 (Il2CppObject * __this /* static, unused */, StringU5BU2CU5D_t4054002953* ___grid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[,] CSVParser::SplitCsvGrid(System.String)
extern "C"  StringU5BU2CU5D_t4054002953* CSVParser_SplitCsvGrid_m3089143635 (Il2CppObject * __this /* static, unused */, String_t* ___csvText0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] CSVParser::SplitCsvLine(System.String)
extern "C"  StringU5BU5D_t4054002952* CSVParser_SplitCsvLine_m1889327749 (Il2CppObject * __this /* static, unused */, String_t* ___line0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
