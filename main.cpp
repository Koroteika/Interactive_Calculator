#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	bool continue_programm = true;
	int operation;
	float first_num, second_num;
	while (continue_programm)
	{
		cout << "\n" << "Интерактивный калькулятор" << endl;
		cout << "1.Cложение '+'" << endl;
		cout << "2.Разность '-'" << endl;
		cout << "3.Произведение '*'" << endl;
		cout << "4.Целочисленное деление '/'" << endl;
		cout << "5.Факториал '!'" << endl;
		cout << "6.Возведение в степень '^'" << endl;
		cout << "\n" << "Выберите операцию: ";

		cin >> operation;
		if (operation >= 1 && operation <= 4)
		{
			cout << "Введите первое число: ";
			cin >> first_num;
			cout << "Введите второе число: ";
			cin >> second_num;
		}
		else if (operation == 5)
		{
			cout << "Введите число для которого найти факториал: ";
			cin >> first_num;
		}
		else if (operation == 6)
		{
			cout << "Введите число основание: ";
			cin >> first_num;
			cout << "Введите степень: ";
			cin >> second_num;
		}
		else {
			continue_programm = false;
		}

		switch (operation)
		{
		case 1:
		{
			cout << "Вы выбрали операцию сложение, сумма чисел = " << first_num + second_num << endl;
			break;
		}
		case 2:
			cout << "Вы выбрали операцию разность, разность чисел = " << first_num - second_num << endl;
			break;
		case 3:
			cout << "Вы выбрали операцию произведение, произведение чисел = " << first_num * second_num << endl;
			break;
		case 4:
			if (second_num != 0)
			{
				cout << "Вы выбрали операцию целочисленное деление, частное чисел = " << first_num / second_num << endl;
			}
			else
			{
				cout << "На ноль нельзя поделить, введите корректное число: ";
				cin >> second_num;
				cout << "Вы выбрали операцию целочисленное деление, частное чисел = " << float(first_num) / second_num << endl;
			}
			break;
		case 5:
		{
			int factorial = 1;
			int  i = 1;
			if (first_num < 0)
			{
				cout << "Нельзя посчитать факториал отрицательного числа, введите другое число:";
				cin >> first_num;
			}
			else if (first_num >= 0);
			{
				while (i < first_num)
				{
					factorial *= ++i;
				}
				cout << "Вы выбрали операцию факториал, факториал = " << factorial << endl;
			}
			break;
		}
		case 6:
		{
			int i = 0;
			int power = 1;
			int reverse = -second_num;
			if (second_num >= 0)
			{
				while (i < second_num)
				{
					power *= first_num;
					i++;
				}
				cout << "Вы выбрали операцию возведения числа " << first_num << " в степень " << second_num << " = " << power << endl;
			}
			else if (second_num < 0)
			{
				while (i < reverse)
				{
					power *= first_num;
					i++;
				}
				cout << "Вы выбрали операцию возведения числа " << first_num << " в степень " << second_num << " = " << 1 / float(power) << endl;
			}
			break;
		}
		default:
			break;
		}
	}
	return 0;
}