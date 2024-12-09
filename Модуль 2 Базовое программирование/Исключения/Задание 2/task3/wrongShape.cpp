#include <iostream>
#include <windows.h>
#include "wrongShape.h"

const char* wrongNumSides::what () {
	return "Ошибка создания фигуры. Неверное количество сторон. ";
}

const char* wrongValueAngles::what() {
	return "Ошибка создания фигуры. Неверные значения углов. ";
}

const char* wrongValueSides::what() {
	return "Ошибка создания фигуры. Неверные значения сторон. ";
}

const char* wrongSumAngles::what() {
	return "Ошибка создания фигуры. Неверная сумма углов. ";
}