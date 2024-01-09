//
//  main.cpp
//  Algorithms
//
//  Created by Евгений Канашкин on 09.01.2024.
//

#include <iostream>
#include "Materials/Algoritms.h"
#include "Greetings/Greetings.h"

int main() {
	switch (Greetings()) {
			// 1) Данные, величины, выражения
		case 1:
			Euclid();
			break;
		case 2:
			DayOfWeek();
			break;
		case 3:
			Eratosthen();
			break;
			// 2) Обработка строк, распознавание
		case 4:
			
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
			
		default:
			std::cout << "Неверный ввод. Завершение программы...\n";
			break;
	}
	
	return 0;
}
