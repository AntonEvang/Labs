#include <iostream>

using namespace std;

int prob1()
{
	float A, B, C;
	cout << "Input A" << endl; cin >> A;
	cout << "Input B" << endl; cin >> B;
	C = A; A = B; B = C;
	cout << "New A = " << A << endl;
	cout << "New B = " << B << endl;
	return 0;
}

int prob2()
{
	float A, B, C, D, E;
	cout << "Input A" << endl; cin >> A; //  cout << "New A = " << C << endl;
	cout << "Input B" << endl; cin >> B; //  cout << "New B = " << A << endl;
	cout << "Input C" << endl; cin >> C; //  cout << "New C = " << B << endl;
	D = A; E = B; A = C; B = D; C = E;
	cout << "New A = " << A << endl;
	cout << "New B = " << B << endl;
	cout << "New C = " << C << endl;
	return 0;
}

int prob3()
{
	float A, B, C, D, E;
	cout << "Input A" << endl; cin >> A;
	cout << "Input B" << endl; cin >> B;
	cout << "Input C" << endl; cin >> C;
	D = C; E = B; C = A; A = E; B = D;
	cout << "New A = " << A << endl;
	cout << "New B = " << B << endl;
	cout << "New C = " << C << endl;
	return 0;
}

int prob4()
{
	float x;
	cout << "Input X" << endl; cin >> x;
	float y = 3 * powf(x, 6) - 6 * powf(x, 2) - 7;
	cout << "y = " << y << endl;
	return 0;
}

int prob5()
{
	float x;
	cout << "Input X" << endl; cin >> x;
	float y = 4 * powf(x - 3, 6) - 7 * powf(x - 3, 3) + 2;
	cout << "y = " << y << endl;
	return 0;
}

int prob6()
{
	float a;
	cout << "Input A" << endl; cin >> a;
	float x = a * a;
	x = x * x;
	float A8 = x * x;
	cout << "A^8 = " << A8 << endl;
	return 0;
}

int prob7()
{
	float a;
	cout << "Input A" << endl; cin >> a;
	float x, y;
	x = a * a;
	x = x * x;
	x = x * a;
	y = x;
	x = x * x;
	float A15 = x * y;
	cout << "A^15 = " << A15 << endl;
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
		case 6:
			prob6();
			break;
		case 7:
			prob7();
			break;
		}
	}
	return 0;
}