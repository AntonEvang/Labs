#include <iostream>
#include <math.h>

using namespace std;

int prob1()
{
	float a, b;
	cout << "Введите длину" << endl; cin >> a;
	cout << "Введите ширину" << endl; cin >> b;
	float S = a * b;
	cout << "Площадь = " << S << endl;
	float P = 2 * (a + b);
	cout << "Периметр = " << P << endl;
	return 0;
}

int prob2()
{
	float d;
	cout << "Введите диаметр" << endl; cin >> d;
	double L = d * 3.14;
	cout << "Длина = " << L << endl;
	return 0;
}

int prob3()
{
	float a, b;
	cout << "Введите первое число" << endl; cin >> a;
	cout << "Введите второе число" << endl; cin >> b;
	float S = (a + b) / 2;
	cout << "Среднее арифметическое = " << S << endl;
	return 0;
}

int prob4()
{
	double a, b;
	cout << "Введите первое число" << endl; cin >> a;
	cout << "Введите второе число" << endl; cin >> b;
	double n;
	a *= a;
	b *= b;
	n = a + b; cout << "Сумма = " << n << endl;
	n = a - b; cout << "Разность = " << n << endl;
	n = a * b; cout << "Произведение = " << n << endl;
	n = a / b; cout << "Частное = " << n << endl;
	return 0;
}

int prob5()
{
	float a, b;
	cout << "Введите первое число" << endl; cin >> a;
	cout << "Введите второе число" << endl; cin >> b;
	float n;
	a = fabs(a);
	b = fabs(b);
	n = a + b; cout << "Сумма = " << n << endl;
	n = a - b; cout << "Разность =" << n << endl;
	n = a * b; cout << "Произведение = " << n << endl;
	n = a / b; cout << "Частное = " << n << endl;
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