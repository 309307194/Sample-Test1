#include "pch.h"
#include <gtest/gtest.h>
#include <iostream>

int add(int a, int b) {
	return a + b;
}

//TEST(TestCaseName, TestName) {
//  EXPECT_EQ(1, 1);
//  EXPECT_TRUE(true);
//}

TEST(test, add1) {
	EXPECT_EQ(add(3, 4), 7);	//==
	EXPECT_NE(add(3, 4), 6);	//!=
	EXPECT_LT(add(3, 4), 8);	//<
	EXPECT_LE(add(3, 4), 7);	//<=
	EXPECT_GT(add(3, 4), 6);	//>
	EXPECT_GE(add(3, 4), 7);	//>=
	//EXPECT_TRUE(true);
}

TEST(test, add2) {
	EXPECT_EQ(add(3, 4), 7);	//==
	EXPECT_NE(add(3, 4), 7);	//!=
	EXPECT_LT(add(3, 4), 8);	//<
	EXPECT_LE(add(3, 4), 7);	//<=
	EXPECT_GT(add(3, 4), 6);	//>
	EXPECT_GE(add(3, 4), 7);	//>=
	//EXPECT_TRUE(true);
}

TEST(test, add3) {
	for (size_t i = 0; i < 100; i++)
	{
		EXPECT_EQ(add(i, 4), 7);	//==
	}
	//EXPECT_EQ(add(3, 4), 7);	//==
	//EXPECT_NE(add(3, 4), 7);	//!=
	//EXPECT_LT(add(3, 4), 8);	//<
	//EXPECT_LE(add(3, 4), 7);	//<=
	//EXPECT_GT(add(3, 4), 6);	//>
	//EXPECT_GE(add(3, 4), 7);	//>=
	//EXPECT_TRUE(true);
}

int main(int argc, char* argv[])
{
	//using testing::InitGoogleTest;
	//InitGoogleTest();
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
	//return 0;
}