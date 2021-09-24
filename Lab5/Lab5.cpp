#include <iostream>
#include <math.h>
using namespace std;

int prob1()
{
	float x1, x2, y1, y2;
	cout << "Введите x1" << endl; cin >> x1;
	cout << "Введите y1" << endl; cin >> y1;
	cout << "Введите x2" << endl; cin >> x2;
	cout << "Введите y2" << endl; cin >> y2;
	float L = sqrtf(powf(x2 - x1, 2) + powf(y2 - y1, 2));
	cout << "Расстояние = " << L << endl;
	return 0;
}

int prob2()
{
	float A, B, C;
	cout << "Введите A" << endl; cin >> A;
	cout << "Введите В" << endl; cin >> B;
	cout << "Введите С" << endl; cin >> C;
	float AC = fabs(A - C);
	float BC = fabs(C - B);
	float ABC = AC + BC;
	cout << "Длина АС = " << AC << endl;
	cout << "Длина BC = " << BC << endl;
	cout << "Сумма длин отрезков AC и BC = " << ABC << endl;
	return 0;
}

int prob3()
{
	float A, B, C;
	cout << "Введите A" << endl; cin >> A;
	cout << "Введите В" << endl; cin >> B;
	cout << "Введите С" << endl; cin >> C;
	float AC = fabs(A - C);
	float BC = fabs(C - B);
	float ABC = AC * BC;
	cout << "Произведение длин отрезков AC и BC = " << ABC << endl;
	return 0;
}

int prob4()
{
	float x1, x2, y1, y2;
	cout << "Введите x1" << endl; cin >> x1;
	cout << "Введите y1" << endl; cin >> y1;
	cout << "Введите x2" << endl; cin >> x2;
	cout << "Введите y2" << endl; cin >> y2;
	float a = fabs(x2 - x1); float b = fabs(y2 - y1);
	float S = a * b; float P = (a + b) * 2;
	cout << "Площадь = " << S << endl;
	cout << "Периметр = " << P << endl;
	return 0;
}
float dlina(float coord1, float coord2, float coord3, float coord4)
{
	return sqrtf(powf(coord1 - coord2, 2) + powf(coord3 - coord4, 2));
}
int prob5()
{
	float x1, x2, y1, y2, x3, y3;
	cout << "Введите x1" << endl; cin >> x1;
	cout << "Введите y1" << endl; cin >> y1;
	cout << "Введите x2" << endl; cin >> x2;
	cout << "Введите y2" << endl; cin >> y2;
	cout << "Введите x3" << endl; cin >> x3;
	cout << "Введите y3" << endl; cin >> y3;
	float a = dlina(x1, x2, y1, y2);
	float b = dlina(x1, x3, y1, y3);
	float c = dlina(x3, x2, y3, y2);
	if (a + b == c || a + c == b || b + c == a)
	{
		cout << "Точки лежат на одной прямой" << endl;
		return 0;
	}
	float P = a + b + c; float p = P / 2;
	float S = sqrtf(p * (p - a) * (p - b) * (p - c));
	cout << "Периметр = " << P << endl;
	cout << "Площадь = " << S << endl;
	return 0;
}

int main()
{
	int Problem_Number = 3228;
	while (Problem_Number != 0)
	{
		cout << "Введите номер задания, для выхода введите 0" << endl;
		cin >> Problem_Number;
		switch (Problem_Number)
		{
		case 1:
			prob1();
			break;
		case 2:
			prob2();
			break;
		case 3:
			prob3();
			break;
		case 4:
			prob4();
			break;
		case 5:
			prob5();
			break;
		}
	}
	return 0;
}