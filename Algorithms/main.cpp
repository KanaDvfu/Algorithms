//
//  main.cpp
//  Algorithms
//
//  Created by Евгений Канашкин on 09.01.2024.
//

#include <iostream>
#include "Materials/Algoritms.h"
#include "Greetings/Greetings.h"

// Done 1, 3, 11
// Theory 2, 5, 10, 14

int main() {
	switch (Greetings()) {
			
			// 1)
		case 1:
			Euclid();
			break;
		case 2:
			DayOfWeek();
			break;
			
			// 3)
		case 3:
			Eratosthen();
			break;
			
			// 11)
		case 4:
			Integral();
			break;
		case 5:
			Length();
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
