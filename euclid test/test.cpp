#include "pch.h"
#include "gtest/gtest.h"
#include "../qiita google test sample/Library.h"

TEST(TestCaseName, TestName) {
	EXPECT_EQ(euclid(25, 15), 5);
	EXPECT_EQ(euclid(21, 54), 7);
	//EXPECT_EQ(euclid(-3, 9), -1);
}