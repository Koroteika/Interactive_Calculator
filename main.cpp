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
		cout << "\n" << "������������� �����������" << endl;
		cout << "1.C������� '+'" << endl;
		cout << "2.�������� '-'" << endl;
		cout << "3.������������ '*'" << endl;
		cout << "4.������������� ������� '/'" << endl;
		cout << "5.��������� '!'" << endl;
		cout << "6.���������� � ������� '^'" << endl;
		cout << "\n" << "�������� ��������: ";

		cin >> operation;
		if (operation >= 1 && operation <= 4)
		{
			cout << "������� ������ �����: ";
			cin >> first_num;
			cout << "������� ������ �����: ";
			cin >> second_num;
		}
		else if (operation == 5)
		{
			cout << "������� ����� ��� �������� ����� ���������: ";
			cin >> first_num;
		}
		else if (operation == 6)
		{
			cout << "������� ����� ���������: ";
			cin >> first_num;
			cout << "������� �������: ";
			cin >> second_num;
		}
		else {
			continue_programm = false;
		}

		switch (operation)
		{
		case 1:
		{
			cout << "�� ������� �������� ��������, ����� ����� = " << first_num + second_num << endl;
			break;
		}
		case 2:
			cout << "�� ������� �������� ��������, �������� ����� = " << first_num - second_num << endl;
			break;
		case 3:
			cout << "�� ������� �������� ������������, ������������ ����� = " << first_num * second_num << endl;
			break;
		case 4:
			if (second_num != 0)
			{
				cout << "�� ������� �������� ������������� �������, ������� ����� = " << first_num / second_num << endl;
			}
			else
			{
				cout << "�� ���� ������ ��������, ������� ���������� �����: ";
				cin >> second_num;
				cout << "�� ������� �������� ������������� �������, ������� ����� = " << float(first_num) / second_num << endl;
			}
			break;
		case 5:
		{
			int factorial = 1;
			int  i = 1;
			if (first_num < 0)
			{
				cout << "������ ��������� ��������� �������������� �����, ������� ������ �����:";
				cin >> first_num;
			}
			else if (first_num >= 0);
			{
				while (i < first_num)
				{
					factorial *= ++i;
				}
				cout << "�� ������� �������� ���������, ��������� = " << factorial << endl;
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
				cout << "�� ������� �������� ���������� ����� " << first_num << " � ������� " << second_num << " = " << power << endl;
			}
			else if (second_num < 0)
			{
				while (i < reverse)
				{
					power *= first_num;
					i++;
				}
				cout << "�� ������� �������� ���������� ����� " << first_num << " � ������� " << second_num << " = " << 1 / float(power) << endl;
			}
			break;
		}
		default:
			break;
		}
	}
	return 0;
}