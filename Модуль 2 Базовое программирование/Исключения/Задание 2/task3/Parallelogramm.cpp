#include <iostream>
#include <windows.h>
#include "Parallelogramm.h"
#include "tetragon.h"
#include "shape.h"
#include "wrongShape.h"

Parallelogramm::Parallelogramm(int m, int n, int k, int l, int M, int N, int K, int L) {

	try {
		
		if ((M + N + K + L) != 360) {
			throw wrongSumAngles();
		}
		
		if (m != k || n != l) {
			throw wrongValueSides();
		}

		if (M != K || N != L) {
			throw wrongValueAngles();
		}

		Parallelogramm::name = "Parallelogramm";
		Parallelogramm::numSides = 4;
		Parallelogramm::setSides(m, n, k, l);
		Parallelogramm::setAngles(M, N, K, L);
		std::cout << "Параллелограмм (стороны " << a << ", " << b << ", " << c << ", " << D << ", углы " << A << ", " << B << ", " << C << ", " << D << ") создан.\n\n";
	}
	
	catch (wrongSumAngles& e) {
		std::cout << e.what() << "Сумма углов должна быть равна 360 градусов.\n" << std::endl;
	}
	
	catch (wrongValueAngles& e) {
		std::cout << e.what() << "Углы M и K, N и L должны быть попарно равны.\n" << std::endl;
	}

	catch (wrongValueSides& e) {
		std::cout << e.what() << "Стороны m и k, n и l должны быть попарно равны.\n" << std::endl;
	}

	};

	void Parallelogramm::setSides(int seta, int setb, int setc, int setd) {
		if (seta == setc && setb == setd) {
			Parallelogramm::a = seta;
			Parallelogramm::b = setb;
			Parallelogramm::c = setc;
			Parallelogramm::d = setd;
		}
		else throw;
	}

	//Функция проверки правильности фигуры:
	bool Parallelogramm::correct() {
		if (Tetragon::correct() && Parallelogramm::a == Parallelogramm::c && Parallelogramm::b == Parallelogramm::d && Parallelogramm::A == Parallelogramm::C && Parallelogramm::B == Parallelogramm::D) {
			return 1;
		}
		else return 0;
	}

	void Parallelogramm::setAngles(int setA, int setB, int setC, int setD) {
		if (setA == setC && setB == setD) {
			Parallelogramm::A = setA;
			Parallelogramm::B = setB;
			Parallelogramm::C = setC;
			Parallelogramm::D = setD;
		}
		else throw;
	}