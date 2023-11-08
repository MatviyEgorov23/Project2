#include <iostream>

int main()
{
	setlocale(LC_ALL, "ukr");

	double pageRate;// Вартість однієї сторінки тексту

	int pageCount;// Кількість сторінок, які потрібно перекласти

	std::cout << "Введіть вартість однієї сторінки тексту: ";

	std::cin >> pageRate;

	std::cout << "Введіть кількість сторінок для перекладу: ";

	std::cin >> pageCount;

	double salary = pageRate * pageCount;// Заробітна плата

	std::cout << "Заробітна плата перекладача: " << salary << std::endl;

	return 0;
}