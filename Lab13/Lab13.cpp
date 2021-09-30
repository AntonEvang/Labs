#include <iostream>

using namespace std;

int prob1()
{
	float x;
	cout << "Input X" << endl; cin >> x;
	for (float i = 0.1; i <= 1.1; i += 0.1)
	{
		cout << "Стоимость за " << i << "кг = " << x * i << endl;
	}
	return 0;
}

int prob2()
{
	int n;
	cout << "Input N" << endl; cin >> n;
	float x = 1.1, s = 1.1;
	for (int i = 1; i < n; i++)
	{
		x += 0.1;
		s *=x;
	}
	cout << s << endl;
	return 0;
}

int prob3()
{
	int n;
	cout << "Input N" << endl; cin >> n;
	int s = 1;
	int i = 1;
	while (s < pow(n, 2))
	{
		i += 2;
		s += i;
		cout << s << endl;
	}
	return 0;
}

int prob4()
{
	float a, s = 0;
	int n;
	cout << "Input A" << endl; cin >> a;
	cout << "Input N" << endl; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		s += powf(a, i);
	}
	cout << s << endl;
	return 0;
}

int prob5()
{
	float a, s = 0;
	int n;
	cout << "Input A" << endl; cin >> a;
	cout << "Input N" << endl; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		s += powf(-a, i);// отрицательное число в четной степени = положительное, в нечетной = отрицательное
	}
	cout << s << endl;
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