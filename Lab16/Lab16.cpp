#include <iostream>

using namespace std;

int prob1()
{
	int n;
	cout << "Input N" << endl; cin >> n;
	int* mas = new int[n];
	mas[0] = 1;
	for (int i = 1; i < n + 1; i++)
	{
		mas[i] = i * 2 + 1;
	}
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	cout << '\n';
	return 0;
}

int prob2()
{
	int n;
	float a, d;
	cout << "Input N" << endl; cin >> n;
	cout << "Input A" << endl; cin >> a;
	cout << "Input D" << endl; cin >> d;
	float* mas = new float[n];
	for (int i = 0; i < n + 1; i++)
	{
		mas[i] = a * powf(d, i);
	}
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	cout << '\n';
	return 0;
}

int prob3()
{
	int n, a, b;
	cout << "Input N" << endl; cin >> n;
	cout << "Input A" << endl; cin >> a;
	cout << "Input B" << endl; cin >> b;
	int* mas = new int[n];
	mas[0] = a; mas[1] = b;
	for (int i = 2; i < n + 1; i++)
	{
		int s = 0;
		for (int i2 = i - 1; i2 > -1; i2--)
		{
			s += mas[i2];
		}
		mas[i] = s;
	}
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	cout << '\n';
	return 0;
}

int prob4()
{
	int n;
	cout << "Input N" << endl; cin >> n;
	int* A = new int[n];
	for (int i = 0; i < n; i++)
	{
		int a;
		cout << "A[" << i << "] = "; cin >> a; cout << '\n';
		A[i] = a;
	}
	for (int i = 0; i < n / 2; i++)
	{
		cout << A[i] << ' ';
		cout << A[n - i - 1] << ' ';
	}
	if (n % 2 != 0)
	{
		int i = ceil(n / 2);
		cout << A[i];
	}
	cout << '\n';
	return 0;
}

int prob5()
{
	int n;
	cout << "Input N" << endl; cin >> n;
	float* A = new float[n];
	for (int i = 0; i < n; i++)
	{
		int a;
		cout << "A[" << i << "] = "; cin >> a; cout << '\n';
		A[i] = a;
	}
	for (int i = 1; i <= n - 1; i += 2)
	{
		cout << A[i] << ' ';
	}
	if (n % 2 == 0)
	{
		for (int i = n - 2; i >= 0; i -= 2)
		{
			cout << A[i] << ' ';
		}
	}
	else
	{
		for (int i = n - 1; i >= 0; i -= 2)
		{
			cout << A[i] << ' ';
		}
	}
	cout << '\n';
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