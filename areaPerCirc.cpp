// Copyright (c) 2021 Ina Tolo All rights reserved.
// Created by: Ina Tolo
// Created on: Nov. 25, 2021
// This program calculates and displays the area and
// circumference of a rectangle with a radius of 12mm.

#include <iostream>
#include <cmath>

int main() {
  std::cout << "For a circle with a radius of 12mm:\n";
  std::cout << "\n";
  std::cout << "Area\n";
  std::cout << "= π * r^2\n";
  std::cout << "= π * (12)^2\n";
  std::cout << "= " << M_PI*pow(12, 2) << "mm \n";
  std::cout << "\n";
  std::cout << "Circumference\n";
  std::cout << "= 2 * π * r\n";
  std::cout << "= 2 * π * (12)\n";
  std::cout << "= " << 2*M_PI*12 << "mm \n";
}
