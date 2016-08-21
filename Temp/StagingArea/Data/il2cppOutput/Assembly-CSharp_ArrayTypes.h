#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// ScreenshotCreator/CameraObject
struct CameraObject_t2652628621;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_ScreenshotCreator_CameraObject2652628621.h"

#pragma once
// ScreenshotCreator/CameraObject[]
struct CameraObjectU5BU5D_t2071295136  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) CameraObject_t2652628621 * m_Items[1];

public:
	inline CameraObject_t2652628621 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline CameraObject_t2652628621 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, CameraObject_t2652628621 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
