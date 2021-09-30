#include <iostream>
#include <cmath>
using namespace std;

float PowerA3(float A)
{
	return powf(A, 3);
}
int prob1()
{
	for (int i = 0; i < 5; i++)
	{
		float a;
		cout << "Input A" << endl; cin >> a;
		float b = PowerA3(a);
		cout << b << endl;
	}
	return 0;
}

int Sign(float X)
{
	if (X > 0) return 1;
	else if (X == 0) return 0;
	else return -1;
}
int prob2()
{
	float a, b;
	cout << "Input A" << endl; cin >> a;
	cout << "Input B" << endl; cin >> b;
	cout << Sign(a) + Sign(b) << endl;
	return 0;
}

double RingS(double R1, double R2)
{
	const double pi = 3.14159;
	double S1 = pi * R1 * R1, S2 = pi * R2 * R2;
	return S1 - S2;
}
int prob3()
{
	for (int i = 0; i < 3; i++)
	{
		double r1, r2;
		cout << "Input R1" << endl; cin >> r1;
		cout << "Input R2" << endl; cin >> r2;
		cout << RingS(r1, r2) << endl;
	}
	return 0;
}

int Quarter(double x, double y)
{
	if (x * y > 0) return (x > 0) ? 1 : 3;
	else return (x > 0) ? 4 : 2;
}
int prob4()
{
	for (int i = 0; i < 3; i++)
	{
		double x, y;
		cout << "Input x" << endl; cin >> x;
		cout << "Input y" << endl; cin >> y;
		cout << "Номер четверти = " << Quarter(x, y) << endl;
	}
	return 0;
}

double Fact2(int n)
{
	double f = 1;
	if (n % 2 == 0)
	{
		for (int i = 2; i <= n; i += 2) 
			f *= i;
	}
	else
	{
		for (int i = 1; i <= n; i += 2) 
			f *= i;
	}
	return f;
}
int prob5()
{
	int N;
	cout << "Input N" << endl; cin >> N;
	cout << Fact2(N) << endl;
	return 0;
}

int main()
{
	setlocale(0, "rus");
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