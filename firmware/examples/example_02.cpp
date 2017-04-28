#include "unit-test.h"

/**
 * Two more tests for our example that show more tools for equal
 */

test(gottaBeKidding) {
	int i = 3*2;
	assertMoreOrEqual(i, 42);
}

test(HelloWorld) {
	assertNotEqual("Hello", "World");
}