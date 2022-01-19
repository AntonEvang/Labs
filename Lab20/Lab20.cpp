#include <iostream>

using namespace std;

int prob1()
{
	int n;
	cout << "Input N" << endl; cin >> n;
	int* mas = new int[n];
	int num_of_pair = 1;
	for (int i = 0; i < n; i++)
	{
		cout << "mas [" << i << "] = "; cin >> mas[i];
	}
	for (int i = 0; i < n - 1; i++) // считаем количество серий
	{
		if (mas[i] != mas[i + 1])
		{
			num_of_pair++;
		}
	}
	int* val = new int[num_of_pair]; // ззначение в серии
	int* num = new int[num_of_pair]; // количество чисел в серии
	int i = 0;
	for (int yuads = 0; yuads < num_of_pair; yuads++) // индекс у новых массивов
	{
		int count = 1; // сколько чисел в серии, начиная с 1, потому что минимальное это один
		val[yuads] = mas[i]; // запись значения серии
		while (i < n - 1 && mas[i] == mas[i + 1]) // пока первый равен второму идет счет и передвижение по mas
		{
			count++;
			i++;
		}
		i++; // после счета серии переход на новую серию
		num[yuads] = count; // запись количества чисел в серии
	}
	cout << "Первая строка - значение, втроая длина" << endl; // вывод
	for (int i = 0; i < num_of_pair; i++)
	{
		cout << val[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < num_of_pair; i++)
	{
		cout << num[i] << ' ';
	}
	cout << endl;
	return 0;
}

int prob2()
{
	//int n, l;
	//cout << "Input N, length of mas" << endl; cin >> n;
	//cout << "Input L, max range of series" << endl; cin >> l;
	//int* mas = new int[n];
	//for (int i = 0; i < n; i++)
	//{
	//	cout << "mas[" << i << "] = "; cin >> mas[i];
	//}
	int n = 25, l = 3;
	int mas[25] = {1, 1, 1, 1, 3, 3, 2, 2, 2, 2, 5, 5, 5, 6, 6, 6, 6, 6, 6, 1, 5, 8, 8, 8, 8 };
	for 

	


	return 0;
}

int prob3()
{

	return 0;
}

int prob4()
{

	return 0;
}

int prob5()
{

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