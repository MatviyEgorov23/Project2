#include <iostream>

int main()
{
	setlocale(LC_ALL, "ukr");

	double pageRate;// ������� ���� ������� ������

	int pageCount;// ʳ������ �������, �� ������� ����������

	std::cout << "������ ������� ���� ������� ������: ";

	std::cin >> pageRate;

	std::cout << "������ ������� ������� ��� ���������: ";

	std::cin >> pageCount;

	double salary = pageRate * pageCount;// �������� �����

	std::cout << "�������� ����� �����������: " << salary << std::endl;

	return 0;
}