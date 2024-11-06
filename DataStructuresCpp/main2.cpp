#include "Stack.h"
#include "Utils.h"
#include <iostream>

int main()
{
	int choice = 0;
	int element = 0;
	Stack* s = new Stack;
	initStack(s);
	while (choice != 5)
	{
		std::cout << "MENU: " << std::endl;
		std::cout << "1.Push " << std::endl;
		std::cout << "2.Pop " << std::endl;
		std::cout << "3.cleanStack " << std::endl;
		std::cout << "4.isEmpty " << std::endl;
		std::cout << "5.Leave " << std::endl;
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			std::cout << "Enter number to push: ";
			std::cin >> element;
			push(s, element);
			break;
		case 2:
			std::cout << "Popped: " << pop(s);
			break;
		case 3:
			cleanStack(s);
			initStack(s);
			break;
		case 4:
			std::cout << std::boolalpha << isEmpty(s);
			break;
		case 5:
			break;
		default:
			std::cout << "Choose a valid option";
			break;
		}
		std::cout << "\n";
	}
}