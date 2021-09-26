#include <iostream>
#include <cmath>

using namespace std;

int prob1()
{
	float n;
	cout << "Input N" << endl; cin >> n;
	float x = n / 60;
	float xn = floor(x);
	cout << "Минут с последней секунды = " << (x - xn)*60 << endl;
	return 0;
}

int prob2()
{
	float k;
	cout << "Input K" << endl; cin >> k;
	float x = k / 7;
	float xn = floor(x);
	cout << "Номер дня = " << (x - xn) * 7 << endl;
	return 0;
}

int prob3()
{
	float n, k;
	cout << "Input K" << endl; cin >> k;
	cout << "Input N" << endl; cin >> n;
	float x = k / 7;
	float xn = floor(x);
	cout << "Номер дня = " << (x - xn) * 7 + n - 1 << endl;
	return 0;
}

int prob4()
{
	float a, b, c;
	cout << "Input A" << endl; cin >> a;
	cout << "Input B" << endl; cin >> b;
	cout << "Input C" << endl; cin >> c;
	int y = floor(a / c);
	int x = floor(b / c);
	if (x == 0 || y == 0)
	{
		cout << "Ни одного квадрата не будет" << endl;
		return 0;
	}
	int otv = x * y;
	int other_otv = a * b - c * c * otv;
	cout << "Количество квадртаов на прямоугольнике = " << otv << ", количество незанятой площади = " << other_otv << endl;
	return 0;
}

int prob5()
{
	float n;
	cout << "Введите номер года" << endl; cin >> n;
	float stoletie = ceil(n / 100);
	cout << "Номер столетия = " << stoletie << endl;
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