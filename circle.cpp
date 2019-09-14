// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: September 2019
// This is a program which can find the area and perimeter or a circle.

#include <iostream>
#include <cmath>

// This is what finds the area and perimeter of the circle.
int main() {
    std::cout << "If a circle has the radius:" << std::endl;
    std::cout << "3cm" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Then area is:" << (M_PI*pow(3.0, 2.0)) << "cm^2" << std::endl;
    std::cout << "and perimeter is:" << (2*M_PI*3) << "cm" << std::endl;
}
