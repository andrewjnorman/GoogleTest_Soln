#include <stdio.h>
#include "Class1.h"



Class1::Class1()
{
}


Class1::~Class1()
{
}

int Class1::fn_1()
{
	printf("Class1::fn_1() called - should return 99\n");

	return 99;

}