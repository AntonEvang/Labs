#include <iostream>

using namespace std;

int prob1()
{
	int a, b;
	cout << "Input A" << endl; cin >> a;
	cout << "Input B" << endl; cin >> b;
	a += 1;
	for (a; a < b; a++)
	{
		for (int i = 1; i <= a; i++) cout << a << " ";
		cout << '\n';
	}
	return 0;
}

int prob2()
{
	int a, b;
	cout << "Input A" << endl; cin >> a;
	cout << "Input B" << endl; cin >> b;
	while (true)
	{
		if (a - b < 0)
		{
			cout << a << endl;
			return 0;
		}
		a -= b;
	}
}

int prob3()
{
	int n = 0, k = 0;
	cout << "Input N" << endl; cin >> n;
	for (int i = 1; k < n; i++) k += i;
	cout << k << endl;
	return 0;
}

int prob4()
{
	float s = 1000, p;
	int k = 0;
	cout << "Input P" << endl; cin >> p;
	while (s < 1100)
	{
		float q = s * p / 100;
		s += q;
		k += 1;
	}
	cout << k << " месяцев, " << s << " сумма" << endl;
	return 0;
}

int prob5()
{
	int a, b;
	cout << "Input A" << endl; cin >> a;
	cout << "Input B" << endl; cin >> b;
	if (b > a)
	{
		int c = b;
		b = a;
		a = c;
	}
	while (true)
	{
		if (a % b == 0)
		{
			cout << b << " - нод" << endl;
			return 0;
		}
		int c = a;
		a = b;
		b = c % b;
	}
}

int prob6()
{
	int n, number = 1;
	cout << "Input N" << endl; cin >> n;
	int a = 1, b = 0;
	if (n == 0)
	{
		cout << "1" << endl;
		return 0;
	}
	else if (n == 1)
	{
		cout << "1 и 2" << endl;
		return 0;
	}
	for (int i = 1; a != n; i++)
	{
		number = i + 2;
		int c = a;
		a += b;
		b = c;
	}
	cout << number << endl;
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
		case 6:
			prob6();
			break;
		}
	}
	return 0;
}