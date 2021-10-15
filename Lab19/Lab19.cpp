#include <iostream>

using namespace std;

int prob1()
{
	int n;
	float no = 0.1; // данная переменная появилась потому что 0.1 в массиве не равно 0.1 как числу
	cout << "Input N" << endl; cin >> n;
	float* mas = new float[n]; //массив
	for (int i = 0; i < n; i++)
	{
		cout << "mas [" << i << "] = "; cin >> mas[i];
	}
	int coutn = 0;//сколько удалено элементов
	for (int i = 0; i < n - 1; i++)
	{
		int un = 1;
		while (mas[i] == mas[i + un])// от первого одинакового элемента до последнего, все последующие переделываются в 0.1
		{
			mas[i + un] = no;
			coutn += 1;
			un++;
		}
		if (i == n - 2) 
		{
			if (mas[i] == mas[i + 1]) // если последний элемент оказался повторяющимся
			{
				mas[i + 1] = no;
				coutn += 1;
			}
		}
	}
	float* xmas = new float[n - coutn];
	int c_xmas = 0;
	for (int i = 0; i < n; i++)// создание нового массива
	{
		if (mas[i] != no)
		{
			xmas[c_xmas] = mas[i];
			c_xmas += 1;
		}
	}
	cout << "mas = ";
	for (int i = 0; i < c_xmas; i++)
	{
		cout << xmas[i] << ' ';
	}
	cout << '\n';
	return 0;
}

int prob2()
{
	int n, number_of_del = 0;
	float check = 0.1; // переделываю	плохие значения в 0.1 чтобы их не записывать в новый массив
	cout << "Input N" << endl; cin >> n;
	float* mas = new float[n];
	int hell_counter = 0; // набор в массив исключений
	float* hell = new float[n]; // массив исключений, если количество чисел больше 2, то их не удалять верно? вот я не удаляю и их записывается сюда
	// а потом в начале проверяется на нахождения числа в исключениях
	for (int i = 0; i < n; i++) // создание массива
	{
		cout << "mas [" << i << "] = "; cin >> mas[i];
	}
	for (int i = 0; i < n - 1; i++) // берем элемент i
	{
		bool prodolzh = true; // есть ли число в исключениях
		for (int hell_i = 0; hell_i < n; hell_i++) // проверка на нахождение числа в исключениях
		{
			if (mas[i] == hell[hell_i])
			{
				prodolzh = false;
				break;
			}
		}
		if (prodolzh == true) // если нет, то идем сюда
		{
			int num = 1, ask = 0;
			for (int i2 = i + 1; i2 < n; i2++) // сравниваем элемент i с последующими, и находим количество элементов i
			{
				if (mas[i] == mas[i2])
				{
					num += 1; // количество
					ask = i2; // какой элемент последний, нужно если их всего два
				}
			}
			if (num == 2) // если их два то перезаписываем их на 0.1, и прибавляем, что удалили 2 элемента
			{
				number_of_del += 2;
				mas[i] = check; mas[ask] = check;
			}
			else if (num > 2) // если элементов больше двух, то записываем их в исключения и не трогаем больше
			{
				hell[hell_counter] = mas[i];
				hell_counter++;
			}
		}
	}
	int* new_mas = new int[n - number_of_del]; // новый массив по подобию старого
	int un = 0;
	for (int i = 0; i < n; i++)// записываем элемент в  массив, если элемент не равен 0.1, тем самым выкидываем все плохие значения и массив только в инте остается
	{
		if (mas[i] != check)
		{
			new_mas[un] = mas[i];
			un++;
		}
	}
	cout << "new_mas = "; // выводим массив
	for (int i = 0; i < un; i++)
	{
		cout << new_mas[i] << ' ';
	}
	cout << '\n';
	return 0;
}

int prob3()
{
	int N;
	cout << "Input N" << endl; cin >> N; // создаем массив все как есть
	int* mas = new int[N];
	for (int i = 0; i < N; i++)
	{
		cout << "mas[" << i << "] = "; cin >> mas[i];
	}
	int max_m = mas[0], max_id = 0, min_m = mas[0], min_id = 0; // знач макс, номер макс, знач мин, номер мин
	int* new_mas = new int[N + 2]; // новый массив с двумя доп ячейками для нулей
	for (int i = 0; i < N; i++) // находим значения и их номера
	{
		if (mas[i] > max_m)
		{
			max_m = mas[i]; max_id = i;
		}
		if (mas[i] < min_m)
		{
			min_m = mas[i]; min_id = i;
		}
	}
	if (max_id > min_id)
	{
		int cont = 0; // переменная номера элемента
		for (cont; cont < min_id; cont++) // записываем в массив все числа, которые идут до минимального
		{
			new_mas[cont] = mas[cont];
		}
		new_mas[cont] = 0; cont++; // вставляем ноль перед минимальным значением, +1 к счетчику
		new_mas[cont] = mas[cont - 1]; cont++; // добавляем минимальное значение в массив, +1 к счетчику
		for (cont; cont <= max_id + 1; cont++) // записываем в массив все числа, до максимального включительно
		{
			new_mas[cont] = mas[cont - 1];
		}
		new_mas[cont] = 0; cont++; // вставляем ноль после максимального, +1 к счетчику
		for (cont; cont < N + 2; cont++)//записываем числа после максимального
		{
			new_mas[cont] = mas[cont - 2];
		}
	}
	else
	{
		int cont = 0; // переменная номера элемента
		for (cont; cont <= max_id; cont++) // записываем в массив все числа, которые идут до максимального включительно
		{
			new_mas[cont] = mas[cont];
		}
		new_mas[cont] = 0; cont++; // вставляем ноль после максимального значения, +1 к счетчику
		for (cont; cont < min_id + 1; cont++) // записываем в массив все числа, до минимального
		{
			new_mas[cont] = mas[cont - 1];
		}
		new_mas[cont] = 0; cont++; // вставляем ноль перед минимальным
		new_mas[cont] = mas[cont - 2]; cont++; // добавляем минимальное значение в массив, +1 к счетчику
		for (cont; cont < N + 2; cont++)//записываем числа после минимального
		{
			new_mas[cont] = mas[cont - 2];
		}
	}
	cout << "Массив: " << endl;
	for (int i = 0; i < N + 2; i++)
	{
		cout << new_mas[i] << ' ';
	}
	cout << '\n';
	return 0;
}

int prob4()
{
	int n, num_of_neg = 0;
	cout << "Input N" << endl; cin >> n;
	int* mas = new int[n];
	for (int i = 0; i < n; i++) // массив + считаем сколько негативных
	{
		cout << "mas[" << i << "] = "; cin >> mas[i];
		if (mas[i] < 0) num_of_neg++;
	}
	n += num_of_neg;
	int bobr = 0; // сколько было добавлено 0 и на сколько делать отскок назад в mas
	int* new_mas = new int[n];
	for (int i = 0; i < n; i++)
	{
		if (mas[i - bobr] < 0) // добаваляем 0, если негативное
		{
			new_mas[i] = mas[i - bobr];
			new_mas[i + 1] = 0;
			i++; bobr++;
		}
		else
		{
			new_mas[i] = mas[i - bobr]; // если не негативное, то добавляем просто
		}
	}
	cout << "Mas: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << new_mas[i] << ', ';
	}
	cout << '\n';
	return 0;
}

int prob5()
{
	int n, num_of_pos = 0;
	cout << "Input N" << endl; cin >> n;
	int* mas = new int[n];
	for (int i = 0; i < n; i++) // массив + считаем сколько позитивных
	{
		cout << "mas[" << i << "] = "; cin >> mas[i];
		if (mas[i] > 0) num_of_pos++;
	}
	n += num_of_pos;
	int* new_mas = new int[n];
	int bobr = 0;// сколько было добавлено 0 и на сколько делать отскок назад в mas
	for (int i = 0; i < n; i++)
	{
		if (mas[i - bobr] > 0) // если число больше 0, то закидываем в новый сначала 0, потом число
		{
			new_mas[i] = 0;
			new_mas[i + 1] = mas[i - bobr];
			i++; bobr++;
		}
		else // если не больше 0, то закидываем его
		{
			new_mas[i] = mas[i - bobr];
		}
	}
	cout << "Mas: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << new_mas[i] << ', ';
	}
	cout << endl;
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