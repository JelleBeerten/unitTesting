//
// Created by jjbee on 2-10-2018.
//

#include "calculator.h"
#include <iostream>
#include <cmath>

double calculator::add(double first, double second) {
    return first + second;
}

int calculator::add(int first, int second) {
    return first + second;
}

double calculator::subtract(double first, double second) {
    return first - second;
}

int calculator::subtract(int first, int second) {
    return first - second;
}

double calculator::multiply(double first, double second) {
    return first * second;
}

int calculator::multiply(int first, int second) {
    return first * second;
}

double calculator::divide(double first, double second) {
    if (second != 0) {
        return first / second;
    } else {
        std::cout << "devision by zero not possible!" << std::endl;
        exit(1);
    }
}

int calculator::divide(int first, int second) {
    if (second != 0) {
        return first / second;
    } else {
        std::cout << "devision by zero not possible!" << std::endl;
        exit(1);
    }
}

double calculator::square(double first) {
    return sqrt(first);
}

double calculator::square(int first) {
    return sqrt(first);
}