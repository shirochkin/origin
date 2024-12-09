#include <iostream>
#include <windows.h>
#include "shape.h"
#include "wrongShape.h"

	//Установка количества сторон:
	int Shape::getNum() {
		if (Shape::numSides == 3 || Shape::numSides == 4) {
			return Shape::numSides;
		}

		else {
			std::cout << "This shape does not exist!\n";
		}
}

	void Shape::toString() {
		if (this->correct()) {
			std::cout << "Name: " << this->name <<std::endl << "Number of sides: " << this->numSides << std::endl << "Correctness: ";
			if (this->correct()) {
				std::cout << "Correct" << std::endl;
			}
			else {
				std::cout << "Incorrect" << std::endl;
			}
		}
}

	//Функция проверки правильности фигуры:
	bool Shape::correct() {
		if (Shape::numSides == 0) {
			return 1;
		}
		else return 0;
	}
