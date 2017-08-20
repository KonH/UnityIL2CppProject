#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_TestBehaviour930884329.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_TestClass1183229268.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_Object2689449295.h"

// TestBehaviour
struct TestBehaviour_t930884329;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// TestClass
struct TestClass_t1183229268;
// System.Object
struct Il2CppObject;
extern Il2CppClass* TestClass_t1183229268_il2cpp_TypeInfo_var;
extern const uint32_t TestBehaviour_InstanceMethod_m3802251226_MetadataUsageId;




// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestBehaviour::InstanceMethod()
extern "C"  void TestBehaviour_InstanceMethod_m3802251226 (TestBehaviour_t930884329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestClass::StaticMethod()
extern "C"  void TestClass_StaticMethod_m3596601608 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestClass::.ctor(System.Int32)
extern "C"  void TestClass__ctor_m3867534822 (TestClass_t1183229268 * __this, int32_t ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TestClass::InstanceMethod()
extern "C"  void TestClass_InstanceMethod_m2173834289 (TestClass_t1183229268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m2551263788 (Il2CppObject * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TestBehaviour::.ctor()
extern "C"  void TestBehaviour__ctor_m79303438 (TestBehaviour_t930884329 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestBehaviour::Start()
extern "C"  void TestBehaviour_Start_m3566543662 (TestBehaviour_t930884329 * __this, const MethodInfo* method)
{
	{
		TestBehaviour_InstanceMethod_m3802251226(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestBehaviour::InstanceMethod()
extern "C"  void TestBehaviour_InstanceMethod_m3802251226 (TestBehaviour_t930884329 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TestBehaviour_InstanceMethod_m3802251226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TestClass_StaticMethod_m3596601608(NULL /*static, unused*/, /*hidden argument*/NULL);
		TestClass_t1183229268 * L_0 = (TestClass_t1183229268 *)il2cpp_codegen_object_new(TestClass_t1183229268_il2cpp_TypeInfo_var);
		TestClass__ctor_m3867534822(L_0, 0, /*hidden argument*/NULL);
		__this->set__test_2(L_0);
		return;
	}
}
// System.Void TestBehaviour::Update()
extern "C"  void TestBehaviour_Update_m1664852881 (TestBehaviour_t930884329 * __this, const MethodInfo* method)
{
	{
		TestClass_t1183229268 * L_0 = __this->get__test_2();
		NullCheck(L_0);
		TestClass_InstanceMethod_m2173834289(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestClass::.ctor(System.Int32)
extern "C"  void TestClass__ctor_m3867534822 (TestClass_t1183229268 * __this, int32_t ___a0, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___a0;
		__this->set__a_0(L_0);
		return;
	}
}
// System.Void TestClass::StaticMethod()
extern "C"  void TestClass_StaticMethod_m3596601608 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TestClass::InstanceMethod()
extern "C"  void TestClass_InstanceMethod_m2173834289 (TestClass_t1183229268 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get__a_0();
		__this->set__a_0(((int32_t)((int32_t)L_0+(int32_t)1)));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
