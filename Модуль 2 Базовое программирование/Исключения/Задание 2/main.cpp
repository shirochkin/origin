#include <iostream>
#include <windows.h>
#include "task3/shape.h"
#include "task3/triangle.h"
#include "task3/tetragon.h"
#include "task3/SymmetricTriangle.h"
#include "task3/EqualTriangle.h"
#include "task3/Parallelogramm.h"
#include "task3/Rhomb.h"
#include "task3/Square.h"
#include "task3/Rect.h"
#include "task3/PifagorTriangle.h"
#include "task3/wrongShape.h"


void printInfo(Shape* shape) {
		shape->toString();
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Создание объектов:
	Triangle triangle(10, 20, 30, 50, 60, 70);
	Triangle wrongTriangle(10, 20, 30, 50, 80, 70);

	PifagorTriangle pifagorTriangle(10, 20, 30, 30, 60, 90);
	PifagorTriangle wrongPifagorTriangle(10, 20, 30, 30, 70, 80);

	SymmetricTriangle symmetricTriangle(10, 20, 10, 50, 80, 50);
	SymmetricTriangle wrongSymmetricTriangle(10, 20, 15, 50, 80, 50);

	EqualTriangle equalTriangle(30, 30, 30, 60, 60, 60);
	EqualTriangle wrongEqualTriangle(30, 40, 30, 60, 60, 60);

	Tetragon tetragon(10, 20, 30, 40, 75, 85, 95, 105);

	Rect rect(10, 20, 10, 20, 90, 90, 90, 90);
	Rect wrongRect(10, 20, 10, 20, 90, 80, 90, 100);

	Square square(20, 20, 20, 20, 90, 90, 90, 90);
	Square wrongSquare(25, 20, 20, 15, 90, 90, 90, 90);

	Parallelogramm parallelogramm(20, 30, 20, 30, 80, 100, 80, 100);
	Parallelogramm wrongParallelogramm(20, 25, 20, 30, 30, 40, 30, 40);

	Rhomb rhomb(30, 30, 30, 30, 110, 70, 110, 70);
	Rhomb wrongRhomb(30, 30, 35, 30, 95, 45, 115, 105);

	//Печать объектов:
	//printInfo(&triangle);
	//printInfo(&pifagorTriangle);
	//printInfo(&symmetricTriangle);
	//printInfo(&equalTriangle);
	//printInfo(&tetragon);
	//printInfo(&rect);
	//printInfo(&square);
	//printInfo(&parallelogramm);
	//printInfo(&rhomb);

	return 0;
}