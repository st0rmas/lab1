#include <iostream>
#include <string>
#include <iostream>

#include "CMenu.h"

using namespace std;

void pause() {
	char temp;
	cout << "Введите любой символ: ";
	cin >> temp;
}

namespace SAR {
	CMenu::CMenu(string name, MenuItem* menuItems) : menuName(name), listOfItems(menuItems) {};

	string CMenu::getMenuName() {
		return menuName;
	}
	int CMenu::getLastSelect() {
		return lastSelect;
	}
	MenuItem* CMenu::getItems() {
		return listOfItems;
	}
	void CMenu::printMenu() {
		for (int i = 0; i < 3; i++)
		{
			cout << i + 1<<". ";
			listOfItems[i].printItem();
		}
		cout << "0. Выход" << endl;

	}
	int CMenu::selectItem() {
		cin >> lastSelect;
		if (lastSelect<0 || lastSelect>3)
		{
			cout << "Такого пункта меню не существует! Введите еще раз: ";
			cin >> lastSelect;
		}
		return lastSelect;
	}
	void CMenu::start() {
		do
		{
			cout << menuName << endl;
			printMenu();
			selectItem();
			system("cls");
			listOfItems[lastSelect - 1].run();
			pause();
			system("cls");
		} while (lastSelect != 0);
	}
}


