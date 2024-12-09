#include <iostream>
#include <windows.h>
#include "triangle.h"
#include "shape.h"
#include "wrongShape.h"
#include "wrongShape.h"


	Triangle::Triangle() {
			Triangle::name = "Triangle";
			Triangle::numSides = 3;
	};

	Triangle::Triangle(int m, int n, int k, int M, int N, int K) {

		try {
			if ((M + N + K) != 180) {
				throw wrongValueAngles ();
			}

		Triangle::name = "Triangle";
		Triangle::numSides = 3;
		Triangle::a = m; Triangle::b = n; Triangle::c = k;
		Triangle::A = M; Triangle::B = N; Triangle::C = K;
		std::cout << "Треугольник (стороны " << a << ", " << b << ", " << c << ", углы " << A << ", " << B << ", " << C << ") создан.\n\n";

}
catch (wrongValueAngles& e) {
std::cout << e.what() << "Сумма углов должна быть равна 180 градусов.\n" << std::endl; }
	};

	//Функция проверки правильности фигуры:
	bool Triangle::correct() {
		if (Triangle::numSides == 3 && (Triangle::A + Triangle::B + Triangle::C) == 180) {
			return 1;
		}
		else return 0;
	}

	//Функция вывода на экран значений сторон:
	void Triangle::getSides() {
		std::cout << "Values of sides: a = " << Triangle::a << ", b = " << Triangle::b << ", c = " << Triangle::c << std::endl;
	}

	//Функция вывода на экран значений углов::
	void Triangle::getAngles() {
		std::cout << "Values of angles: A = " << Triangle::A << ", B = " << Triangle::B << ", C = " << Triangle::C << std::endl;
	}

	//Функция вывода на экран:
	void Triangle::toString() {
		
			Shape::toString();
			this->getSides();
			this->getAngles();
			std::cout << std::endl;
		
	}

	//Функция установки значений сторон:
	void Triangle::setSides(int m, int n, int k) {
		Triangle::a = m; Triangle::b = n; Triangle::c = k;
	}

	//Функция установки значений углов:
	void Triangle::setAngles(int M, int N, int K) {
		Triangle::A = M; Triangle::B = N; Triangle::C = K;
	}
