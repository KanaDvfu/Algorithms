//
//  Euclid.cpp
//  Algorithms
//
//  Created by Евгений Канашкин on 09.01.2024.
//

#include "Algoritms.h"
#include <iostream>

int Euclid(int x, int y) {
	
	while (x != 0 && y != 0)
		(x >= y) ? (x -= y) : (y -= x);
	
	return x + y;
}

void Euclid() {
	std::cout << std::endl;
	std::cout << "Алгоритм Евклида.\n";
	std::cout << "Расчет наименьшего общего делителя двух заданных чисел.\n";
	std::cout << "Введите 2 числа...\n";
	int x, y;
	std::cin >> x >> y;
	std::cout << std::endl << ">" << Euclid(x, y) << std::endl;
}
