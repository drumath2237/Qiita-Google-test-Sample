#include "pch.h"
#include "gtest/gtest.h"
#include "../qiita google test sample/Library.h"

TEST(EuclidTest, Reverse) {
	EXPECT_EQ(euclid(25, 15), 5);
	EXPECT_EQ(euclid(21, 56), 7);
}

TEST(EuclidTest, Minus) {
	EXPECT_EQ(euclid(-1, 3), -1);
}