#include <iostream>
#include <windows.h>
#include "SymmetricTriangle.h"
#include "triangle.h"
#include "shape.h"
#include "wrongShape.h"


	SymmetricTriangle::SymmetricTriangle(int m, int n, int k, int M, int N, int K) {

		try {

			if ((M + N + K) != 180) {
				throw wrongSumAngles();
			}

			if (m != k) {
				throw wrongValueSides();
			}
			if (M != K) {
				throw wrongValueAngles();
			}

			SymmetricTriangle::name = "SymmetricTriangle";
			SymmetricTriangle::numSides = 3;
			SymmetricTriangle::setSides(m, n, k);
			SymmetricTriangle::setAngles(M, N, K);
			std::cout << "Равнобедренный треугольник (стороны " << a << ", " << b << ", " << c << ", углы " << A << ", " << B << ", " << C << ") создан.\n\n";
		}

		catch (wrongSumAngles& e) {
			std::cout << e.what() << "Сумма углов должна быть равна 180 градусов.\n" << std::endl;
		}

		catch (wrongValueSides& e) {
			std::cout << e.what() << "Стороны m и k должны быть равными.\n" << std::endl;
		}

		catch (wrongValueAngles& e) {
			std::cout << e.what() << "Углы M и K должны быть равными.\n" << std::endl;
		}
	}

	void SymmetricTriangle::setSides(int seta, int setb, int setc) {
		if (seta == setc) {
			SymmetricTriangle::a = seta;
			SymmetricTriangle::b = setb;
			SymmetricTriangle::c = setc;
		}
		else throw;
	}

	//Функция проверки правильности фигуры:
	bool SymmetricTriangle::correct() {
		if (Triangle::correct() && SymmetricTriangle::a == SymmetricTriangle::c &&SymmetricTriangle::A == SymmetricTriangle::C) {
			return 1;
		}
		else return 0;
	}

	void SymmetricTriangle::setAngles(int setA, int setB, int setC) {
		if (setA == setC) {
			SymmetricTriangle::A = setA;
			SymmetricTriangle::B = setB;
			SymmetricTriangle::C = setC;
		}
		else throw;
	}