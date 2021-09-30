#include <iostream>

using namespace std;

int prob1()
{
	int n, k, l;
	cout << "Input N" << endl; cin >> n;
	float* mas = new float[n];
	for (int i = 0; i < n; i++)
	{
		float a;
		cout << "mas[" << i << "] = "; cin >> a;
		mas[i] = a;
	}
	cout << "Input K" << endl; cin >> k;
	cout << "Input L" << endl; cin >> l;
	k--; l--;
	int number = l - k + 1;
	float s = 0;
	for (int i = k; i <= l; i++) s += mas[i];
	cout <<"Среднее аримфметическое = " << s / number << endl;
	return 0;
}

int prob2()
{
	int n;
	cout << "Input N" << endl; cin >> n;
	int* mas = new int[n];
	for (int i = 0; i < n; i++)
	{
		float a;
		cout << "mas[" << i << "] = "; cin >> a;
		mas[i] = a;
	}
	int d = mas[1] - mas[0];
	for (int i = 0; i < n - 1; i++)
	{
		if (mas[i + 1] - mas[i] == d) {}
		else
		{
			cout << '0' << endl;
			return 0;
		}
	}
	cout << d << endl;
	return 0;
}

int prob3()
{
	int n;
	cout << "Input N" << endl; cin >> n;
	float* mas = new float[n];
	for (int i = 0; i < n; i++)
	{
		float a;
		cout << "mas[" << i << "] = "; cin >> a;
		mas[i] = a;
	}
	float a = mas[2];
	for (int i = 2; i < n; i += 2)
	{
		(mas[i] < a) ? a = mas[i] : a = a;
	}
	cout << "min = " << a << endl;
	return 0;
}

int prob4()
{
	int n;
	cout << "Input N" << endl; cin >> n;
	float* mas = new float[n];
	for (int i = 0; i < n; i++)
	{
		float a;
		cout << "mas[" << i << "] = "; cin >> a;
		mas[i] = a;
	}
	int a = 0;
	for (int i = 1; i < n - 1; i++)
	{
		if (mas[i] > mas[i - 1] && mas[i] > mas[i + 1]) a = i;
	}
	cout << a << endl;
	return 0;
}

int prob5()
{
	int n;
	cout << "Input N" << endl; cin >> n;
	int* mas = new int[n];
	for (int i = 0; i < n; i++)
	{
		float a;
		cout << "mas[" << i << "] = "; cin >> a;
		mas[i] = a;
	}
	for (int i1 = 0; i1 < n - 1; i1++)
	{
		for (int i2 = i1 + 1; i2 < n; i2++)
		{
			if (mas[i1] == mas[i2])
			{
				cout << i1 << ' ' << i2 << endl;
				return 0;
			}
		}
	}
	cout << "А где??" << endl;
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