//
//  Eratosthen.cpp
//  Algorithms
//
//  Created by Евгений Канашкин on 10.01.2024.
//

#include "Algoritms.h"
#include <iostream>
#include <cmath>

int Eratosthen(int x) {
	int *array = new int[x + 1];
	for (int i = 0; i < x + 1; i++)
		array[i] = i;
	for (int p = 2; p < x + 1; p++) {
		if (array[p] != 0) {
			std::cout << array[p] << std::endl;
			for (int j = pow(p, 2); j < x + 1; j += p)
				array[j] = 0;
		}
	}
	std::cout << "...\n" << ">";
	return x;
}

void Eratosthen() {
	std::cout << std::endl;
	std::cout << "Решето Эратосфена\n";
	std::cout << "Расчет всех простых чисел до заданного\n";
	std::cout << "Введите число...\n";
	int x;
	std::cin >> x;
	std::cout << std::endl << Eratosthen(x) << std::endl;
}
