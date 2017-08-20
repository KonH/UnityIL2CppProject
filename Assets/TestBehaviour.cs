using UnityEngine;

public class TestBehaviour : MonoBehaviour {

	TestClass _test;

	void Start () {
		InstanceMethod();
	}

	void InstanceMethod() {
		TestClass.StaticMethod();
		_test = new TestClass(0);
	}

	void Update () {
		_test.InstanceMethod();
	}
}
