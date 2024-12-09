#include <iostream>
#include <windows.h>
#include "Rect.h"
#include "tetragon.h"
#include "shape.h"
#include "wrongShape.h"

Rect::Rect(int m, int n, int k, int l, int M, int N, int K, int L) {

	try {

		if ((M + N + K + L) != 360) {
			throw wrongSumAngles();
		}

		if (m != k || n != l) {
			throw wrongValueSides();
		}

		if (M != 90 || N != 90 || K != 90 || L != 90) {
			throw wrongValueAngles();
		}

		Rect::name = "Rectangle";
		Rect::numSides = 4;
		Rect::setSides(m, n, k, l);
		Rect::setAngles(M, N, K, L);
		std::cout << "Прямоугольник (стороны " << a << ", " << b << ", " << c << ", " << D << ", углы " << A << ", " << B << ", " << C << ", " << D << ") создан.\n\n";
	}

	catch (wrongSumAngles& e) {
		std::cout << e.what() << "Сумма углов должна быть равна 360 градусов.\n" << std::endl;
	}

	catch (wrongValueSides& e) {
		std::cout << e.what() << "Стороны m и k, n и l должны быть попарно равны.\n" << std::endl;
	}

	catch (wrongValueAngles& e) {
		std::cout << e.what() << "Все углы должны быть равны 90 градусов.\n" << std::endl;
	}

	};

	void Rect::setSides(int seta, int setb, int setc, int setd) {
		if (seta == setc && setb == setd) {
			Rect::a = seta;
			Rect::b = setb;
			Rect::c = setc;
			Rect::d = setd;
		}
		else throw;
	}

	//Функция проверки правильности фигуры:
	bool Rect::correct() {
		if (Tetragon::correct() && Rect::a == Rect::c && Rect::b == Rect::d && Rect::A == Rect::B && Rect::B == Rect::C && Rect::C == Rect::D && Rect::D == 90) {
			return 1;
		}
		else return 0;
	}

	void Rect::setAngles(int setA, int setB, int setC, int setD) {
		if (setA == setB && setB == setC && setC == setD && setD == 90) {
			Rect::A = setA;
			Rect::B = setB;
			Rect::C = setC;
			Rect::D = setD;
		}
		else throw;
	}