#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int prob1()
{
	int month, day;
	cout << "Input day" << endl; cin >> day;
	cout << "Input month" << endl; cin >> month;
	string d;
	if (day < 20)
	{
		if (day == 1) d += "первое "; else if (day == 2) d += "второе "; else if (day == 3) d += "третье "; else if (day == 4) d += "четвертое "; else if (day == 5) d += "пятое "; else if (day == 6) d += "шестое "; else if (day == 7) d += "седьмое "; else if (day == 8) d += "восьмое "; else if (day == 9) d += "девятое "; else if (day == 10) d += "десятое "; else if (day == 11) d += "одиннадцатое "; else if (day == 12) d += "двенадцатое "; else if (day == 13) d += "тринадцатое "; else if (day == 14) d += "четырнадцатое "; else if (day == 15) d += "пятнадцатое "; else if (day == 16) d += "шестнадцатое "; else if (day == 17) d += "семнадцатое "; else if (day == 18) d += "восемнадцатое "; else if (day == 19) d += "девятнадцатое ";
	}
	// написал другой скрипт на питоне, чтобы все ввел, а не ручками
	else if (day < 30)
	{
		if (day % 10 == 0) d += "двадцатое ";
		else
		{
			d += "двадцать";
			if (day % 10 == 1) d += " первое "; else if (day % 10 == 2) d += " второе "; else if (day % 10 == 3) d += " третье "; else if (day % 10 == 4) d += " четвертое "; else if (day % 10 == 5) d += " пятое "; else if (day % 10 == 6) d += " шестое "; else if (day % 10 == 7) d += " седьмое "; else if (day % 10 == 8) d += " восьмое "; else if (day % 10 == 9) d += " девятое ";
		}
	}
	else
	{
		if (day == 30) d += "тридцатое ";
		else d += "тридцать первое ";
	}
	if (month == 1) d += " января"; else if (month == 2) d += " февраля"; else if (month == 3) d += " март"; else if (month == 4) d += " апреля"; else if (month == 5) d += " мая"; else if (month == 6) d += " июня"; else if (month == 7) d += " июля"; else if (month == 8) d += " августа"; else if (month == 9) d += " сентября"; else if (month == 10) d += " октября"; else if (month == 11) d += " ноября"; else if (month == 12) d += " декабря";
	cout << d << endl;
	return 0;
}

int prob2()
{
	string n;
	char c;
	cin.ignore(10, '\n');
	cout << "Input C" << endl; cin >> c;
	cin.ignore(10, '\n');
	cout << "Input N" << endl; getline(cin,n);
	int ci = 0;
	if(c == 'С') ci = 4; else if(c == 'З') ci = 1; else if(c == 'Ю') ci = 2; else if(c == 'В') ci = 3;
	int ni = stoi(n);
	char otv = 'a';
	ci = ci + ni;
	if (ci == 4) otv = 'С'; else if (ci == 5) otv = 'З'; else if (ci == 3) otv = 'В'; else if (ci == 2) otv = 'Ю'; else if (ci == 1) otv = 'З'; else if (ci == 0) otv = 'С';
	cout << otv << endl;
	// обозначил С В Ю З за 4 3 2 1, а движение 1, 0, -1 перевел в инт и складывал с исходным и получалось, что движение идет как по циферблату
	return 0;
}

int prob3()
{
	int a;
	string d;
	cout << "Input A" << endl; cin >> a;
	if (a > 9 && a < 20)
	{	
		if (a == 10) d += "десять "; else if (a == 11) d += "одиннадцать "; else if (a == 12) d += "двенадцать "; else if (a == 13) d += "тринадцать "; else if (a == 14) d += "четырнадцать "; else if (a == 15) d += "пятнадцать "; else if (a == 16) d += "шестнадцать "; else if (a == 17) d += "семнадцать "; else if (a == 18) d += "восемьнадцать "; else if (a == 19) d += "девятнадцать ";
		d += "учебных заведений";
		cout << d << endl;
	} 
	else
	{
		if (a == 21) // сначала проверит 21 и 31 и только потом пойдет к промежуткам
		{
			d += "двадцать одно учебное заведение";
			cout << d << endl;
			return 0;
		}
		else if (a == 31)
		{
			d += "тридцать одно учебное заведение";
			cout << d << endl;
			return 0;
		}
		else if (a > 19 && a < 30)
		{
			d += "двадцать ";
			if (a == 22) d += "два "; else if (a == 23) d += "три "; else if (a == 24) d += "четыре "; else if (a == 25) d += "пять "; else if (a == 26) d += "шесть "; else if (a == 27) d += "семь "; else if (a == 28) d += "восемь "; else if (a == 29) d += "девять ";
		}
		else if (a > 29 && a < 40)
		{
			d += "тридцать ";
			if (a == 32) d += "два "; else if (a == 33) d += "три "; else if (a == 34) d += "четыре "; else if (a == 35) d += "пять "; else if (a == 36) d += "шесть "; else if (a == 37) d += "семь "; else if (a == 38) d += "восемь "; else if (a == 39) d += "девять ";
		}
		else d += "сорок ";
		d += "учебных заведений";
		cout << d << endl;
	}
	return 0;
}

int prob4()
{
	cin.ignore(10, '\n');
	string s, d;
	cout << "Input N" << endl; getline(cin, s);
	if (s[0] == '1') d += "сто "; else if (s[0] == '2') d += "двести "; else if (s[0] == '3') d += "триста "; else if (s[0] == '4') d += "четыреста "; else if (s[0] == '5') d += "пятьсот "; else if (s[0] == '6') d += "шестьсот "; else if (s[0] == '7') d += "семьсот "; else if (s[0] == '8') d += "восемьсот "; else if (s[0] == '9') d += "девятьсот ";
	if (s[1] == '1')
	{
		if (s[2] == '1') d += "одиннадцать"; else if (s[2] == '2') d += "двенадцать"; else if (s[2] == '3') d += "тринадцать"; else if (s[2] == '4') d += "четырнадцать"; else if (s[2] == '5') d += "пятнадцать"; else if (s[2] == '6') d += "шестнадцать"; else if (s[2] == '7') d += "семнадцать"; else if (s[2] == '8') d += "восемьнадцать"; else if (s[2] == '9') d += "девятнадцать";
		cout << d << endl;
	}
	else
	{
		if (s[1] == '2') d += "двадцать "; else if (s[1] == '3') d += "тридцать "; else if (s[1] == '4') d += "сорок "; else if (s[1] == '5') d += "пятьдесят "; else if (s[1] == '6') d += "шестьдесят "; else if (s[1] == '7') d += "семьдесят "; else if (s[1] == '8') d += "восемьдесят "; else if (s[1] == '9') d += "девяносто ";
		if (s[2] == '0') d += ""; else if (s[2] == '1') d += "один"; else if (s[2] == '2') d += "два"; else if (s[2] == '3') d += "три"; else if (s[2] == '4') d += "четыре"; else if (s[2] == '5') d += "пять"; else if (s[2] == '6') d += "шесть"; else if (s[2] == '7') d += "семь"; else if (s[2] == '8') d += "восемь"; else if (s[2] == '9') d += "девять";
		cout << d << endl;
	}
	return 0;
}

int prob5() // кто придумал это задание...
{
	int a;
	cout << "Input A" << endl; cin >> a;
	if (a < 1984)
	{
		cout << "1984 - начало цикла" << endl;
		return 0;
	}
	a -= 1984;
	if (a % 60 == 0) cout << "год зеленой крысы" << endl;
	else
	{
		float m = a;
		string d = "год ";
		int cycle = (m / 12 - floor(m / 12)) * 12;
		if (cycle == 0) d += "зеленой "; else if (cycle == 1) d += "красной "; else if (cycle == 2) d += "желтой "; else if (cycle == 3) d += "белой "; else if (cycle == 4) d += "черной ";
		int name = (m / 5 - floor(m / 5)) * 5;
		cout << m / 12 << " " << floor(m / 12) << endl;
		if (name == 0) d += "крысы"; else if (name == 1) d += "коровы"; else if (name == 2) d += "тигра"; else if (name == 3) d += "зайца"; else if (name == 4) d += "дракона"; else if (name == 5) d += "змеи"; else if (name == 6) d += "лошади"; else if (name == 7) d += "овцы"; else if (name == 8) d += "обезьяны"; else if (name == 9) d += "курицы"; else if (name == 10) d += "собаки"; else if (name == 11) d += "свиньи";
		cout << d << endl;
	}
	return 0;
}

int main()
{
	setlocale(0, "rus"); //в беседе скинули функцию, думал надо в настройках vs что-то подключать
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