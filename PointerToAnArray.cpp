#include <iostream>
#include <stdio.h>

using namespace std;

int buffer[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

int test1() {
	char *temp = (char *)buffer;
	int res = (int)(*(temp + 6)); //Non-compliant
	res = *((int*)temp + 6);      //Compliant
	return res;
}



