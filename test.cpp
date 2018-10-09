//
// Created by jjbee on 2-10-2018.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "calculator.h"

using testing::Eq;

namespace {
    calculator calculator;
    TEST(testInt, square1){
        EXPECT_EQ(5,calculator.square(25));
    }
    TEST(TestInt, add1){
        EXPECT_EQ(12, calculator.add(10,2));
    }
    TEST(testInt, divide1){
        EXPECT_EQ(5,calculator.divide(10,2));
    }
    TEST(TestInt, subtract1){
        EXPECT_EQ(8, calculator.subtract(10,2));
    }
    TEST(testInt, multiply){
        EXPECT_EQ(20,calculator.multiply(10,2));
    }
}