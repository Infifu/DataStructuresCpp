#include "Stack.h"
#include "Utils.h"
#include <iostream>

int main()
{
	int choice = 0;
	int element = 0;
	Stack* s = new Stack;
	while (choice != 6)
	{
		std::cout << "MENU: " << std::endl;
		std::cout << "1.initStack " << std::endl;
		std::cout << "2.Push " << std::endl;
		std::cout << "3.Pop " << std::endl;
		std::cout << "4.cleanStack " << std::endl;
		std::cout << "5.isEmpty " << std::endl;
		std::cout << "6.Leave " << std::endl;
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			initStack(s);
			break;
		case 2:
			std::cout << "Enter number to push: ";
			std::cin >> element;
			push(s, element);
			break;
		case 3:
			pop(s);
			break;
		case 4:
			cleanStack(s);
			break;
		case 5:
			std::cout << std::boolalpha << isEmpty(s);
			break;
		case 6:
			break;
		default:

			break;
		}
	}
}