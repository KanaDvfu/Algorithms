//
//  Length.cpp
//  Algorithms
//
//  Created by Евгений Канашкин on 10.01.2024.
//

#include "Algoritms.h"
#include "SomeFunc.hpp"
#include <iostream>
#include <vector>
#include <cmath>

double Length(double a, double b, double c) {
	
	double value = 0;
	std::vector <double> heights;
	
	a -= c;
	while (a < b) {
		a += c;
		if (func(a) >= 0) {
			heights.push_back(func(a));
		} else {
			if (heights.back() != 0) {
				heights.push_back(0);
			}
		}
	}
	
	for (int i = 0; i < heights.size() - 1; i++) {
		value += sqrt(pow(c, 2) + pow(abs(heights[i] - heights[i+1]), 2));
	}
	
	return value;
}

void Length() {
	std::cout << std::endl;
	std::cout << "Вычисление длины функции.\n";
	std::cout << "Расчет длины конкретной функции на заданном отрезке, с заданной точностью.\n";
	std::cout << "[WARN]: Длина считается только по положительной части функции на заданном отрезке.\n";
	std::cout << "Введите число a, b и точность расчета c...\n";
	double a, b, c;
	std::cin >> a >> b >> c;
	std::cout << std::endl << Length(a, b, c) << std::endl;
}
