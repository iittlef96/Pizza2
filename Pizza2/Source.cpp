#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int code;
	int klv;
	double total = 0;
	double pizzaPrice = 10.0;
	double drinkPrice = 3.0;
	double totalPrice = 0;
	std::cout << "�����c������, ��� �� �� ������ ��������";
	std::cout << "1. ��������� - $10.00\n";
	std::cout << "2. ��������� - $10.00\n";
	std::cout << "3. ������ - $10.00\n";
	std::cout << "4. � �������� - $10.00\n";
	std::cout << "5. ������� - $3.00\n";
	std::cout << "6. ��� - $3.00\n";
	std::cout << "7. ���� - $2.00\n";
	std::cout << "����� ��������� �������� ������� 0\n";
	std::cin >> code;

	while (code != 0)
	{
		std::cin >> klv;

		if (code >= 1 && code <= 4)
		{
			if (code % 5 == 0)
			{
				total += klv * pizzaPrice;
				klv--; // ������� ������ ������ �� 5 �����
			}
			total += klv * pizzaPrice;
		}
		else if (code >= 5 && code <= 7)
		{
			total += klv * drinkPrice;
		}
		std::cin >> code;
	}
	if (total > 50)
	{
		if (total > 50)
		{
			klv = 0.20 * total;
		}

		if (total > 2 * 3 && klv > 3)
		{ //������ �������
			klv += 0.15 * (klv * drinkPrice);
		}

		totalPrice = total - klv;

		// ���
		std::cout << "���:\n";
		std::cout << "��� ���������: $" << total << "\n";
		std::cout << "������: $" << klv << "\n";
		std::cout << "���� ��� ������: $" << totalPrice << "\n";






	}
	return 0;
}
