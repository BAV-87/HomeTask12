//HomeTask 12
#include <iostream>
int main() {
	setlocale(LC_ALL, "Russian");
	int quantity = 0;
	int answer1, answer2, answer3;
	std::cout << "������ 12.1\n����� �������� ���� ������ ������� ���������!\n";
	std::cout << "������ 1: ������� ����� 3�3 ?\n";
	for (int i = 1; ; i++) {
		std::cout << "������� � " << i << ". ����� ����� -> ";
		std::cin >> answer1;
		if (answer1 == 9) {
			std::cout << "� ��� ���������� �����!\n";
			quantity++;
			break;
		}
		std::cout << "������������ �����, �������� ���\n";
		quantity++;
	}
	if (quantity >= 1) {
		std::cout << "������ 2: ������� ����� 6�6 ?\n";
		for (int i = 1; ; i++) {
			std::cout << "������� � " << i << ". ����� ����� -> ";
			std::cin >> answer2;
			if (answer2 == 36) {
				std::cout << "� ��� ���������� �����!\n";
				quantity++;
				break;
			}
			std::cout << "������������ �����, �������� ���\n";
			quantity++;
		}
	}
	if (quantity >= 2) {
		std::cout << "������ 3: ������� ����� 9�9 ?\n";
		for (int i = 1; ; i++) {
			std::cout << "������� � " << i << ". ����� ����� -> ";
			std::cin >> answer3;
			if (answer3 == 81) {
				std::cout << "� ��� ���������� �����!\n\n";
				quantity++;
				break;
			}
			std::cout << "������������ �����, �������� ���\n";
			quantity++;
		}
	}
	if (quantity == 3) 
		std::cout << "����������, �������� ���������! ���� ������������ ����� " << quantity << " �������!\n\n";
	if (quantity > 3 && quantity <= 6) 
		std::cout << "����������, �������� ���������! ���� ������������ " << quantity << " �������!\n\n";
	if (quantity > 6)
		std::cout << "����������, �� ���������! ���� ������������ " << quantity << " �������!\n������������ ������� ���� ������!\n\n";
		return 0;
	}

