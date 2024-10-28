#include <iostream>

#include "MyClass.h"

// PG proj
// LE2A_06_オザワ

int main() {

	MyClass<int, int>		intXint		(8, 256);
	MyClass<int, float>		intXfloat	(8, 25.6f);
	MyClass<int, double>	intXdouble	(8, 2.56);

	MyClass<float, float>	floatXfloat		(0.8f, 25.6f);
	MyClass<float, double>	floatXdouble	(0.8f, 2.56);

	MyClass<double, double>	doubleXdouble	(0.8, 2.56);



	return 0;
}