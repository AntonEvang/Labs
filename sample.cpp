#include <iostream>

using namespace std;

int prob1()
{
	
	return 0;
}

int prob2()
{
	
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