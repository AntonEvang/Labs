#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int prob1()
{
	float b;
	cout << "Введите размер файла в байтах" << endl; cin >> b;
	int x = ceil(b / 1024);
	cout << "Размер в полных килобайтах = " << x << endl;
	return 0;
}

int prob2()
{
	float a, b;
	cout << "Input A" << endl; cin >> a;
	cout << "Input B" << endl; cin >> b;
	int x = floor(a / b);
	cout << "Количество В в А = " << x << endl;
	return 0;
}

int prob3()
{
	float a, b;
	cout << "Input A" << endl; cin >> a;
	cout << "Input B" << endl; cin >> b;
	float x = a - b * floor(a / b);
	cout << "Длина незанятой части = " << x << endl;
	return 0;
}

int prob4()
{
	cin.ignore(30, '\n');
	string num;
	cout << "Input number" << endl;
	getline(cin, num);
	char mas[2]; mas[0] = num[1]; mas[1] = num[0];
	for (int i = 0; i < 2; i++) cout << mas[i];
	cout << endl;
	return 0;
}

int prob5()
{
	cin.ignore(30, '\n');
	string num;
	cout << "Input number" << endl;
	getline(cin, num);
	char mas[3]; mas[0] = num[1]; mas[1] = num[2]; mas[2] = num[0];
	for (int i = 0; i < 3; i++) cout << mas[i];
	cout << endl;
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