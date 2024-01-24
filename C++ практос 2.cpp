

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int c;
	float a, b, d;
	cout << "Выберите нужное действие:\n1.Сложение\n2.Вычитание\n3.Частное\n4.Произвeдениe\n5.Возведение в степень\n6.Нахождения квадратного корня\n7.Нахождение 1 процента от числа\n8.Найти факториал числа\n9.Выйти из программы.\n";
	cin >> c;
	switch (c)
	{
		case 1:
			cout << "Введите первое число:\n";
			cin >> a;
			cout << "Введите второе число:\n";
			cin >> b;
			d = a + b;
			cout << "Сложение: " << a << "+" << b << "=" << d;
			break;
		case 2:
			cout << "Введите первое число:\n";
			cin >> a;
			cout << "Введите второе число:\n";
			cin >> b;
			d = a - b;
			cout << "Вычитание: " << a << "-" << b << "=" << d;
			break;
		case 3:
			cout << "Введите первое число:\n";
			cin >> a;
			cout << "Введите второе число:\n";
			cin >> b;
			d = a / b;
			cout << "Деление: " << a << "/" << b << "=" << d;
			break;
		case 4:
			cout << "Введите первое число:\n";
			cin >> a;
			cout << "Введите второе число:\n";
			cin >> b;
			d = a * b;
			cout << "Произведение: " << a << "*" << b << "=" << d;
			break;
		case 5:
			cout << "Введите первое число:\n";
			cin >> a;
			cout << "Введите второе число:\n";
			cin >> b;
			cout << "Возведение в степень: "<< a << "в степени" << b << "=" << pow(a, b);
			break;
		case 6:
			cout << "Введите число:\n";
			cin >> a;
			cout << "Корень из " << a << "=" << sqrt(a);
			break;
		case 7:
			cout << "Введите число:\n";
			cin >> a;
			d = (a/100)*1;
			cout << "1% от числа " << a << " = " << d << endl;
			break;
		case 8:
			cout << "Введите число:\n";
			cin >> a;
			d = 1;
			for (b = 1; b <= a; b++) {
				d = d * b;
			}
			cout << "Факториал " << a << " = " << d;
			break;
		case 9:
			break;
	default:
		break;
	}

}