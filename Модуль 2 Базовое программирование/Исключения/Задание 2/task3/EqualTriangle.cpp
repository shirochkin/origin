#include <iostream>
#include <windows.h>
#include "triangle.h"
#include "EqualTriangle.h"
#include "shape.h"
#include "wrongShape.h"

EqualTriangle::EqualTriangle(int m, int n, int k, int M, int N, int K) {
		
	try {
		if ((M + N + K) != 180) {
			throw wrongSumAngles();
		}
		
		if (!(m == n && m == k)) {
			throw wrongValueSides();
		}
		if (M != 60 || N != 60 || K != 60) {
			throw wrongValueAngles();
		}



		EqualTriangle::name = "EqualTriangle";
		EqualTriangle::numSides = 3;
		EqualTriangle::setSides(m, n, k);
		EqualTriangle::setAngles(M, N, K);
		std::cout << "Равносторонний треугольник (стороны " << a << ", " << b << ", " << c << ", углы " << A << ", " << B << ", " << C << ") создан.\n\n";
	}

	catch (wrongSumAngles& e) {
		std::cout << e.what() << "Сумма углов должна быть равна 180 градусов.\n" << std::endl;
	}
	
	catch (wrongValueSides& e) {
		std::cout << e.what() << "Все стороны должны быть равными.\n" << std::endl;
	}

	catch (wrongValueAngles& e) {
		std::cout << e.what() << "Все углы должны быть равными 60 градусов.\n" << std::endl;
	}

	}

	void EqualTriangle::setSides(int seta, int setb, int setc) {
		if (seta == setb && setb == setc) {
			EqualTriangle::a = seta;
			EqualTriangle::b = setb;
			EqualTriangle::c = setc;
		}
		else throw;
	}

	//Функция проверки правильности фигуры:
	bool EqualTriangle::correct() {
		if (Triangle::correct() && EqualTriangle::a == EqualTriangle::b && EqualTriangle::b == EqualTriangle::c && EqualTriangle::A == EqualTriangle::B && EqualTriangle::B == EqualTriangle::C && EqualTriangle::C == 60) {
			return 1;
		}
		else return 0;
	}

	void EqualTriangle::setAngles(int setA, int setB, int setC) {
		if (setA == setB && setB == setC && setC == 60) {
			EqualTriangle::A = setA;
			EqualTriangle::B = setB;
			EqualTriangle::C = setC;
		}
		else throw;
	}