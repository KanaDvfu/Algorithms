//
//  DayOfWeek.cpp
//  Algorithms
//
//  Created by Евгений Канашкин on 09.01.2024.
//

#include "Algoritms.h"
#include <iostream>
#include <vector>

std::vector <int> MonthDayCount {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
std::vector <std::string> Week {"Пн", "Вт", "Ср", "Чт", "Пт", "Сб", "Вс"};

std::string DayOfWeek(int y, int m, int d) {
	int temp = 1, tempDayValue = 0;
	
	//Расчет дней годов
	while (temp < y) {
		if ((temp % 4 != 0) || (temp % 100 == 0 && temp % 400 != 0)) {
			tempDayValue += 365;
		} else {
			tempDayValue += 366;
		}
		tempDayValue %= 7;
		temp++;
	}
	
	temp = 0;
	
	//Расчет дней месяцев
	while (temp < (m - 1)) {
		if (temp == 1 && !((y % 4 != 0) || (y % 100 == 0 && y % 400 != 0))) {
			tempDayValue++;
		}
		tempDayValue += MonthDayCount[temp];
		tempDayValue %= 7;
		temp++;
		
	}
	
	//Расчет дней
	tempDayValue += d - 1;
	tempDayValue %= 7;
	
	return Week[tempDayValue];
}

void DayOfWeek() {
	std::cout << std::endl;
	std::cout << "Алгоритм нахождения дня недели по заданной дате\n";
	std::cout << "Расчет дня недели заданной даты\n";
	std::cout << "Введите числовыми значениями год, месяц и день соответсвтенно...\n";
	int y, m, d;
	std::cin >> y >> m >> d;
	std::cout << std::endl << ">" << DayOfWeek(y, m, d) << std::endl;
}
