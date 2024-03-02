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
	std::cout << "Здравcтвуйте, что бы вы хотели заказать";
	std::cout << "1. Маргарита - $10.00\n";
	std::cout << "2. Пепперони - $10.00\n";
	std::cout << "3. Сырная - $10.00\n";
	std::cout << "4. С сосиками - $10.00\n";
	std::cout << "5. Лемонад - $3.00\n";
	std::cout << "6. Чай - $3.00\n";
	std::cout << "7. Вода - $2.00\n";
	std::cout << "Чтобы закончить выбирать нажмите 0\n";
	std::cin >> code;

	while (code != 0)
	{
		std::cin >> klv;

		if (code >= 1 && code <= 4)
		{
			if (code % 5 == 0)
			{
				total += klv * pizzaPrice;
				klv--; // Сделали скидку каждую на 5 пиццу
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
		{ //Только напитки
			klv += 0.15 * (klv * drinkPrice);
		}

		totalPrice = total - klv;

		// чек
		std::cout << "Чек:\n";
		std::cout << "Вся стоимость: $" << total << "\n";
		std::cout << "Скидка: $" << klv << "\n";
		std::cout << "Цена для оплаты: $" << totalPrice << "\n";






	}
	return 0;
}
