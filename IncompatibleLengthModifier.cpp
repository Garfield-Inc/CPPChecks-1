#include <stdio.h>

void fun1()
{
	float f = 0.5;
	long double d = 3.1415926535;
	printf("%hf ", f);
	printf("%Lg", d);
}

void fun2()
{
	short int x = 12;
	long int i = 3;
	printf("%hd ", x);
	printf("%ld", i);
}

int main()
{
	fun1();
}