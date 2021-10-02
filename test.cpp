 /**
 * @file calculator.cpp
 * @author Telushkin Artem (you@domain.com)
 * @brief  Это программа "Калькулятор". Здесь вы можете выполнить действие и получить ответ!
 * @version 0.1
 * @date 2021-09-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <conio.h>
int main() 
{/**
 * @brief Здесь мы вводим значения 2-х переменных и операцию
 * 
 */
    int a = 0;
    int b = 0;
    char operation;
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;
    std::cout << "Enter operation: ";
    std::cin >> operation;
    /**
     * @brief А здесь мы используем поиск операции, выбранной пользователем, в кейсах и выводи соответсвующий ответ
     * 
     */
    switch (operation) 
    {
    case '-':
        std::cout << "a - b = " << a - b << '\n';
        break;
    case '+':
        std::cout << "a + b = " << a + b << '\n';
        break;
    case '*':
        std::cout << "a * b = " << a * b << '\n';
        break;
    case '/':
        std::cout << "a / b = " << a / b << '\n';
        break;
    default:
        std::cout << "Error\n";
    } 
  // system("pause"); 
  /**
   * @brief С помощью getch() мы блокируем автоматическое закрытие консоли (закрытие происходит после нажатия на любую кнопку)
   * не забываем про библиотеку #include <conio.h> где хранится getch()
   */
    getch();
    return 0;
}