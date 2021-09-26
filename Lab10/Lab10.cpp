#include <iostream>
#include <string>
using namespace std;

int prob1()
{
	int a, b;
	cout << "Input A" << endl; cin >> a;
	cout << "Input B" << endl; cin >> b;
	if (a > 2 && b <= 3)
	{
		cout << "Высказывание «Справедливы неравенства A > 2 и B <= 3» верно" << endl;
		return 0;
	}
	cout << "Высказывание «Справедливы неравенства A > 2 и B <= 3» не верно" << endl;
	return 0;
}

int prob2()
{
	int a, b, c;
	cout << "Input A" << endl; cin >> a;
	cout << "Input B" << endl; cin >> b;
	cout << "Input C" << endl; cin >> c;
	if (a < b && b < c)
	{
		cout << "Высказывание «Справедливо двойное неравенство A < B < C» верно" << endl;
		return 0;
	}
	cout << "Высказывание «Справедливо двойное неравенство A < B < C» не верно" << endl;
	return 0;
}

int prob3()
{
	int a;
	cout << "Input A" << endl; cin >> a;
	if (a % 2 == 0 && a > 9 && a < 100)
	{
		cout << "Высказывание «Данное число является четным двузначным» верно" << endl;
		return 0;
	}
	cout << "Высказывание «Данное число является четным двузначным» не верно" << endl;
	return 0;
}

int prob4()
{
	cin.ignore(30, '\n');
	string a;
	cout << "Input A" << endl; getline(cin, a);
	int x1 = (int)a[0];
	int x2 = (int)a[1];
	int x3 = (int)a[2];
	if ((x1 < x2 && x2 < x3) || (x1 > x2 && x2 > x3))
	{
		cout << "Высказывание «Цифры данного числа образуют возрастающую или убывающую последовательность» верно" << endl;
		return 0;
	}
	cout << "Высказывание «Цифры данного числа образуют возрастающую или убывающую последовательность» не верно" << endl;
	return 0;
	// a = input();
	// x1 = floor(a/100);
	// x2 = floor((a - x1)/10);
	// x3 = floor(a - x1 - x2);
}

int prob5()
{
	cin.ignore(30, '\n');
	string a;
	cout << "Input A" << endl; getline(cin, a);
	if (a[0] == a[3] && a[1] == a[2])
	{
		cout << "Высказывание «Данное число читается одинаково слева направо и справа налево» верно" << endl;
		return 0;
	}
	cout << "Высказывание «Данное число читается одинаково слева направо и справа налево» не верно" << endl;
	return 0;
}

int prob6()
{
	int a, b, c;
	cout << "Input A" << endl; cin >> a;
	cout << "Input B" << endl; cin >> b;
	cout << "Input C" << endl; cin >> c;
	if ((a * a + b * b) == c * c || (a * a + c * c) == b * b || (b * b + c * c) == a * a) 
		cout << "Высказывание «Треугольник со сторонами a, b, c является прямоугольным» верно" << endl;
	else 
		cout << "Высказывание «Треугольник со сторонами a, b, c является прямоугольным» не верно" << endl;
	return 0;
}

int prob7()
{
	int a, b, c;
	cout << "Input A" << endl; cin >> a;
	cout << "Input B" << endl; cin >> b;
	cout << "Input C" << endl; cin >> c;
	if (a + b > c && a + c > b && b + c > a)
		cout << "Высказывание «Существует треугольник со сторонами a, b, c» верно" << endl;
	else
		cout << "Высказывание «Существует треугольник со сторонами a, b, c» не верно" << endl;
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
		case 7:
			prob7();
			break;
		}
	}
	return 0;
}