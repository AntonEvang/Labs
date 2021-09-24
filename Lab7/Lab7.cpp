#include <iostream>
const double pi = 3.14159265358979323846;
using namespace std;

int prob1()
{
	double a;
	cout << "Input a" << endl; cin >> a;
	double x = (a * pi) / 180;
	cout << "a in radians = " << x << endl;
	return 0;
}

int prob2()
{
	double a;
	cout << "Input a" << endl; cin >> a;
	double x = (180 * a) / pi;
	cout << "a in degrees = " << x << endl;
	return 0;
}

int prob3()
{
	float X, A, Y;
	cout << "Input X kg" << endl; cin >> X;
	cout << "Input A rub" << endl; cin >> A;
	float price = A / X;
	cout << "Price for 1 kg = " << price << endl;
	cout << "Input Y kg" << endl; cin >> Y;
	float price_for_Y = price * Y;
	cout << "Price for " << Y << " kg = " << price_for_Y << endl;
	return 0;
}

int prob4()
{
	float v1, v2, s, t;
	cout << "Input V1" << endl; cin >> v1;
	cout << "Input V2" << endl; cin >> v2;
	cout << "Input S" << endl; cin >> s;
	cout << "Input T" << endl; cin >> t;
	float distance = (v1 + v2) * t + s;
	cout << "Distance between cars = " << distance << endl;
	return 0;
}

int prob5()
{
	float a, b;
	cout << "Input A" << endl; cin >> a;
	cout << "Input B" << endl; cin >> b;
	float x = (-b) / a;
	cout << "X = " << x << endl;
	return 0;
}

int prob6()
{
	float a1, b1, c1, a2, b2, c2;
	cout << "Input A1" << endl; cin >> a1;
	cout << "Input B1" << endl; cin >> b1;
	cout << "Input C1" << endl; cin >> c1;
	cout << "Input A2" << endl; cin >> a2;
	cout << "Input B2" << endl; cin >> b2;
	cout << "Input C2" << endl; cin >> c2;
	// с помощью матрицы
	float delta = (a1 * b2) - (a2 * b1);
	float deltaX = (c1 * b2) - (b1 * c2);
	float deltaY = (a1 * c2) - (a2 * c1);
	if (delta == 0 && ((powf(deltaX, 2) + powf(deltaY, 2)) > 0))
	{
		cout << "Система не имеет решений" << endl;
		return 0;
	}
	if (delta == 0 && deltaX == 0 && deltaY == 0)
	{
		cout << "Система либо не имеет решений, либо имеет бесконечно много решений" << endl;
		return 0;
	}
	float x = deltaX / delta;
	float y = deltaY / delta;
	cout << "X = " << x << "; Y = " << y << endl;
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
		case 6:
			prob6();
			break;
		}
	}
	return 0;
}