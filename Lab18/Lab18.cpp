#include <iostream>

using namespace std;

int prob1()
{
	int n;
	cout << "Input N" << endl; cin >> n;
	float* A = new float[n];
	float* B = new float[n];
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "] = "; cin >> A[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << "B[" << i << "] = "; cin >> B[i];
	}
	float* C = new float[n];
	C = A; A = B; B = C;
	cout << "A = ";
	for (int i = 0; i < n; i++)
		cout << A[i] << ' ';
	cout << '\n' << "B = ";
	for (int i = 0; i < n; i++)
		cout << B[i] << ' ';
	cout << '\n';
	return 0;
}

int prob2()
{
	int n;
	cout << "Input N" << endl; cin >> n;
	float* A = new float[n];
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "] = "; cin >> A[i];
	}
	float* B = new float[n];
	for (int k = 0; k < n; k++)
	{
		float sum = 0;
		for (int i = 0; i <= k; i++)
			sum += A[i];
		B[k] = sum / (k+1);
	}
	cout << "B = ";
	for (int i = 0; i < n; i++)
		cout << B[i] << ' ';
	cout << '\n';
	return 0;
}

int prob3()
{
	int n, c;
	cout << "Input N" << endl; cin >> n;
	int* mas = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "mas [" << i << "] = "; cin >> mas[i];
		if (mas[i] % 2 != 0) // нахождение последнего нечетного числа происходит прямо при вводе
			c = mas[i];
	}
	for (int i = 0; i < n; i++)	
		if (mas[i] % 2 != 0) mas[i] 
			+= c;
	cout << "mas = ";
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << ' ';
	}
	cout << '\n';
	return 0;
}

int prob4()
{
	int n;
	cout << "Input N" << endl; cin >> n;
	float* mas = new float[n];
	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "] = "; cin >> mas[i];
	}
	int min_n = 0, max_n = 0;
	float min_m = mas[0], max_m = mas[0]; 
	for (int i = 0; i < n; i++)
	{
		if (mas[i] > max_m)
		{
			max_m = mas[i];
			max_n = i;
		}
		if (mas[i] < min_m)
		{
			min_m = mas[i];
			min_n = i;
		}
	}
	if (max_n > min_n)
	{
		for (int i = min_n + 1; i < max_n; i++)
			mas[i] = 0;
	}
	else
	{
		for (int i = max_n + 1; i < min_n; i++)
			mas[i] = 0;
	}
	cout << "mas = ";
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << ' ';
	}
	cout << '\n';
	return 0;
}

int prob5()
{
	int n; 
	cout << "input N" << endl; cin >> n;
	float* mas = new float[n];
	float* cop = new float[n];
	for (int i = 0; i < n; i++)
	{
		cout << "mas [" << i << "] = "; cin >> mas[i];
	}
	float zas = mas[0];
	cop[0] = mas[1];
	bool ch = false; // на случай если первый элемент самый большой
	for (int i = 1; i < n - 1; i++)
	{
		if (zas > mas[i] && zas > mas[i + 1])
		{
			cop[i] = mas[i+1];
		}
		else if (zas > mas[i] && zas < mas[i + 1])
		{
			cop[i] = zas;
			for (int i2 = i + 1; i2 < n; i2++)
			{
				cop[i2] = mas[i2];
			}
			ch = true;
			break;
		}
	}
	if (ch == false)
	{
		for (int i = n - 1; i < n; i++)// забавно, что cop[n] = zas не работает, а это работает
		{
			cop[i] = zas;
		}
	}
	mas = cop;
	cout << "mas = ";
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << ' ';
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