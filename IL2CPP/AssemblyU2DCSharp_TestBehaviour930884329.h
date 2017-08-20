#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// TestClass
struct TestClass_t1183229268;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TestBehaviour
struct  TestBehaviour_t930884329  : public MonoBehaviour_t1158329972
{
public:
	// TestClass TestBehaviour::_test
	TestClass_t1183229268 * ____test_2;

public:
	inline static int32_t get_offset_of__test_2() { return static_cast<int32_t>(offsetof(TestBehaviour_t930884329, ____test_2)); }
	inline TestClass_t1183229268 * get__test_2() const { return ____test_2; }
	inline TestClass_t1183229268 ** get_address_of__test_2() { return &____test_2; }
	inline void set__test_2(TestClass_t1183229268 * value)
	{
		____test_2 = value;
		Il2CppCodeGenWriteBarrier(&____test_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
