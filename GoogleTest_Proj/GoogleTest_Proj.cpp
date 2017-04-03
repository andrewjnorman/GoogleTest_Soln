// GoogleTest_Proj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "gtest\gtest.h"
#include "..\MyProject2\Class1.h"

int main(int argc, char **argv) {
	printf("Running main() from gtest_main.cc\n");
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(testGroup, firstTest)
{
	Class1 y;

	int x = y.fn_1();

	printf("first test running\n");

	ASSERT_EQ(x, 99);
}

