#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int prob1()
{
	int a, b;
	cout << "Input A" << endl; cin >> a;
	cout << "Input B" << endl; cin >> b;
	if (a != b)
	{
		int c = max(a, b);
		a = c; b = c;
		cout << "A and B = " << a << " and " << b << endl;
	}
	else
	{
		a = 0; b = 0;
		cout << "A and B = " << a << " and " << b << endl;
	}
	return 0;
}

int prob2()
{
	float a, b, c;
	cout << "Input A" << endl; cin >> a;
	cout << "Input B" << endl; cin >> b;
	cout << "input C" << endl; cin >> c;
	float max1 = max(a, b), max2 = max(b, c);
	if (max1 == max2)
	{
		float max3 = max(a, c);
		cout << "Sum = " << max1 + max3 << endl;
	}
	else
		cout << "Sum = " << max1 + max2 << endl;
	return 0;
}

int prob3()
{
	float xa, ya, xb, yb, xc, yc;
	cout << "Input x(A)" << endl; cin >> xa;
	cout << "Input y(A)" << endl; cin >> ya;
	cout << "Input x(B)" << endl; cin >> xb;
	cout << "Input y(B)" << endl; cin >> yb;
	cout << "Input x(C)" << endl; cin >> xc;
	cout << "Input y(C)" << endl; cin >> yc;
	float db = sqrt(powf(xa - xb, 2) + powf(ya - yb, 2)),
		dc = sqrt(powf(xa - xc, 2) + powf(ya - yc, 2));
	if (db > dc)
		cout << "C is closer than B, " << dc << endl;
	else if (db == dc)
		cout << "B и C на одинаковом расстоянии = " << dc << endl;
	else
		cout << "B is closer than C, " << db << endl;
	return 0;
}

int prob4()
{
	float x, y;
	cout << "Input X" << endl; cin >> x;
	cout << "Input Y" << endl; cin >> y;
	float check = x * y;
	if (check > 0)
	{
		if (x > 0)
			cout << "First" << endl;
		else
			cout << "Third" << endl;
	}
	else
	{
		if (x > 0)
			cout << "Fourth" << endl;
		else
			cout << "Second" << endl;
	}
	return 0;
}

int prob5()
{
	int a;
	string discr;
	cout << "Input A" << endl; cin >> a;
	if (a == 0)
		cout << "Нулевое число" << endl;
	else
	{
		if (a > 0) discr += "положительное";
		else discr += "отрицательное";
		if (a % 2 == 0) discr += " четное число";
		else discr += " нечетное число";
	}
	cout << discr << endl;
	return 0;
}

int prob6()
{
	int a;
	string discr;
	cout << "Input A" << endl; cin >> a;
	if (a % 2 == 0) discr += "четное ";
	else discr += "нечетное ";
	if (a >= 100) discr += "трехзначное число";
	else
	{
		if (a >= 10) discr += "двузначное число";
		else discr += "однозначное число";
	}
	cout << discr << endl;
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