#include <iostream>
#include <windows.h>
#include "Square.h"
#include "tetragon.h"
#include "shape.h"
#include "wrongShape.h"

Square::Square(int m, int n, int k, int l, int M, int N, int K, int L) {

	try {

		if ((M + N + K + L) != 360) {
			throw wrongSumAngles();
		}

		if (!(m == n && m == k && m == l)) {
			throw wrongValueSides();
		}

		if (M != 90 || N != 90 || K != 90 || L != 90) {
			throw wrongValueAngles();
		}

		Square::name = "Square";
		Square::numSides = 4;
		Square::setSides(m, n, k, l);
		Square::setAngles(M, N, K, L);
		std::cout << "Квадрат (стороны " << a << ", " << b << ", " << c << ", " << d << ", углы " << A << ", " << B << ", " << C << ", " << D << ") создан.\n\n";
	}

	catch (wrongSumAngles& e) {
		std::cout << e.what() << "Сумма углов должна быть равна 360 градусов.\n" << std::endl;
	}

	catch (wrongValueSides& e) {
		std::cout << e.what() << "Все стороны должны быть равны.\n" << std::endl;
	}

	catch (wrongValueAngles& e) {
		std::cout << e.what() << "Все углы должны быть равны 90 градусов.\n" << std::endl;
	}

	};

	void Square::setSides(int seta, int setb, int setc, int setd) {
		if (seta == setb && setb == setc && setc == setd) {
			Square::a = seta;
			Square::b = setb;
			Square::c = setc;
			Square::d = setd;
		}
		else throw;
	}

	//Функция проверки правильности фигуры:
	bool Square::correct() {
		if (Tetragon::correct() && Square::a == Square::b && Square::b == Square::c && Square::c == Square::d && Square::A == Square::B && Square::B == Square::C && Square::C == Square::D && Square::D == 90) {
			return 1;
		}
		else return 0;
	}

	void Square::setAngles(int setA, int setB, int setC, int setD) {
		if (setA == setB && setB == setC && setC == setD && setD == 90) {
			Square::A = setA;
			Square::B = setB;
			Square::C = setC;
			Square::D = setD;
		}
		else throw;
	}