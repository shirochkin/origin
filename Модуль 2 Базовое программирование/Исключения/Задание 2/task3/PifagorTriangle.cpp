#include <iostream>
#include <windows.h>
#include "PifagorTriangle.h"
#include "triangle.h"
#include "shape.h"
#include "wrongShape.h"



	PifagorTriangle::PifagorTriangle(int m, int n, int k, int M, int N, int K) {

		try {

			if ((M + N + K) != 180) {
				throw wrongSumAngles();
			}

			if (K != 90) {
				throw wrongValueAngles();
			}

			PifagorTriangle::name = "PifagorTriangle";
			PifagorTriangle::numSides = 3;
			PifagorTriangle::a = m; PifagorTriangle::b = n; PifagorTriangle::c = k;
			PifagorTriangle::setAngles(M, N, K);
			std::cout << "Прямоугольный треугольник (стороны " << a << ", " << b << ", " << c << ", углы " << A << ", " << B << ", " << C << ") создан.\n\n";
		}

		catch (wrongSumAngles& e) {
			std::cout << e.what() << "Сумма углов должна быть равна 180 градусов.\n" << std::endl;
		}

		catch (wrongValueAngles& e) {
			std::cout << e.what() << "Угол C должен быть равен 90 градусов.\n" << std::endl;
		}
	}

	//Функция проверки правильности фигуры:
	bool PifagorTriangle::correct() {
		if (Triangle::correct() && C == 90) {
			return 1;
		}
		else return 0;
}

	void PifagorTriangle::setAngles(int setA, int setB, int setC) {
		if (setC == 90) {
			PifagorTriangle::A = setA;
			PifagorTriangle::B = setB;
			PifagorTriangle::C = setC;
		}
		else throw;
	}