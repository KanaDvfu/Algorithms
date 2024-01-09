//
//  Greetings.cpp
//  Algorithms
//
//  Created by Евгений Канашкин on 09.01.2024.
//
#include "Greetings.h"
#include <iostream>
#include <vector>

int Greetings() {
	
	std::vector <std::string> ProgNum {"Euclid", "DayOfWeek", "Eratosthen", "Integral", "Length"};

	std::cout << "ˇ  Что следует выполнить...\n";
	
	for (int i = 0; i < ProgNum.size(); i++)
		std::cout << i+1 << ") " << ProgNum[i] << std::endl;
	
	int num;
	std::cin >> num;
	return num;
}
