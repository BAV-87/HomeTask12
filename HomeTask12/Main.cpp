//HomeTask 12
#include <iostream>
int main() {
	setlocale(LC_ALL, "Russian");
	int quantity = 0;
	int answer1, answer2, answer3;
	std::cout << "Задача 12.1\nДавай проверим твои знания таблицы умножения!\n";
	std::cout << "Вопрос 1: Сколько будет 3х3 ?\n";
	for (int i = 1; ; i++) {
		std::cout << "Попытка № " << i << ". Введи ответ -> ";
		std::cin >> answer1;
		if (answer1 == 9) {
			std::cout << "И это правильный ответ!\n";
			quantity++;
			break;
		}
		std::cout << "Неправильный ответ, попробуй ещё\n";
		quantity++;
	}
	if (quantity >= 1) {
		std::cout << "Вопрос 2: Сколько будет 6х6 ?\n";
		for (int i = 1; ; i++) {
			std::cout << "Попытка № " << i << ". Введи ответ -> ";
			std::cin >> answer2;
			if (answer2 == 36) {
				std::cout << "И это правильный ответ!\n";
				quantity++;
				break;
			}
			std::cout << "Неправильный ответ, попробуй ещё\n";
			quantity++;
		}
	}
	if (quantity >= 2) {
		std::cout << "Вопрос 3: Сколько будет 9х9 ?\n";
		for (int i = 1; ; i++) {
			std::cout << "Попытка № " << i << ". Введи ответ -> ";
			std::cin >> answer3;
			if (answer3 == 81) {
				std::cout << "И это правильный ответ!\n\n";
				quantity++;
				break;
			}
			std::cout << "Неправильный ответ, попробуй ещё\n";
			quantity++;
		}
	}
	if (quantity == 3) 
		std::cout << "Поздравляю, отличный результат! Тебе понадобилось всего " << quantity << " попытки!\n\n";
	if (quantity > 3 && quantity <= 6) 
		std::cout << "Поздравляю, неплохой результат! Тебе понадобилось " << quantity << " попытки!\n\n";
	if (quantity > 6)
		std::cout << "Поздравляю, ты справился! Тебе понадобилось " << quantity << " попыток!\nРекомендация подтяни свои знания!\n\n";
		return 0;
	}

