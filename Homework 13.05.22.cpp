#include <iostream>
using namespace std;

int main()
{
	/*setlocale(0, "UKR");
	cout << "Введите первое число: ";
	int num1;
	cin >> num1;
	cout << "\nВведите второе число: ";
	int num2;
	cin >> num2;
	cout << "\nВведите третье число: ";
	int num3;
	cin >> num3;

	if (num1 < num2 && num1 < num3)
	{
		cout << "\nНаименьшее число: " << num1;
	}
	else if (num2 < num1 && num2 < num3)
	{
		cout << "\nНаименьшее число: " << num2;
	}
	else if (num3 < num1 && num3 < num2)
	{
		cout << "\nНаименьшее число: " << num3;
	}
	else
		cout << "\nПроизошла ошибка. Пожалуйста, укажите корректные значения.";*/

	/*setlocale(0, "UKR");
	cout << "Введите число: ";
	int num;
	cin >> num;

	if (num > 0)
	{
		cout << "\nЧисло является положительным.\n";
	}
	else if (num < 0)
	{
		cout << "\nЧисло является отрицательным.\n";
	}
	else if (num == 0)
	{
		cout << "\nЧисло равно нулю.\n";
	}*/

	/*setlocale(0, "UKR");
	cout << "Введите первое число: ";
	double num1;
	cin >> num1;
	cout << "Введите второе число: ";
	double num2;
	cin >> num2;

	cout << "\n1. a + b\n2. a - b\n3. a * b\n4. a / b\n5. a % b\n";
	cout << "\nВыберите операцию: ";
	int choice;
	cin >> choice;

	if (choice == 1)
	{
		cout << "\nРезультат: " << num1 + num2 << "\n";
	}
	else if (choice == 2)
	{
		cout << "\nРезультат: " << num1 - num2 << "\n";
	}
	else if (choice == 3)
	{
		cout << "\nРезультат: " << num1 * num2 << "\n";
	}
	else if (choice == 4)
	{
		if (num2 > 0 || num2 < 0)
		{
			cout << "\nРезультат: " << num1 / num2 << "\n";
		}
		else 
		{
			cout << "\nДеление на ноль невозможно.\n";
		}
	}
	else if (choice == 5)
	{
		cout << "\nРезультат: " << int(num1) % int(num2) << "\n";
	}
	else
	{
		cout << "\nПроизошла ошибка. Пожалуйста, укажите корректное значение.\n";
	}*/

	/*setlocale(0, "UKR");
	cout << "Введите символ: ";
	char symbol;
	cin >> symbol;

	if (isdigit(symbol))
	{
		cout << "\nСимвол является цифрой.\n";
	}
	else if (isalpha(symbol))
	{
		cout << "\nСимвол является буквой.\n";
	}
	else if (ispunct(symbol))
	{
		cout << "\nСимвол является знаком пунктуации.\n";
	}
	else
	{
		cout << "\nСимвол не является ни цифрой, ни буквой, ни знаком пунктуации.\n";
	}*/

	/*setlocale(0, "UKR");
	cout << "Введите число: ";
	int num;
	cin >> num;
	
	if (num % 3 == 0 && num % 5 == 0 && num % 7 == 0)
	{
		cout << "\nЧисло кратно 3, 5 и 7 одновременно.\n";
	}
	else
	{
		cout << "\nЧисло не кратно 3, 5 и 7 одновременно.\n";
	}*/

	setlocale(0, "UKR");
	cout << "Введите целое число: ";
	int num;
	cin >> num;

	if (num > 0 and num < 10)
	{
		cout << "\nКоличество цифр: 1.\n";
	}
	else if (num > 10 and num < 100)
	{
		cout << "\nКоличество цифр: 2.\n";
	}
	else if (num > 100 and num < 1000)
	{
		cout << "\nКоличество цифр: 3.\n";
	}
	else if (num > 1000 and num < 10000)
	{
		cout << "\nКоличество цифр: 4.\n";
	}
	else if (num > 10000)
	{
		cout << "\nКоличество цифр превышает 4.\n";
	}
	else
	{
		cout << "\nПожалуйста, укажите корректное значение.\n";
	}
}



