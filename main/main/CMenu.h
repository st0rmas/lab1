#pragma once

#include "MenuItem.h"
using namespace std;

namespace SAR {
	class CMenu {
	private:
		
		string menuName;
		int lastSelect{};
		MenuItem* listOfItems;

	public:
		CMenu(string name, MenuItem* menuItems);

		string getMenuName();
		void setMenuName(string name);
		int getLastSelect();
		MenuItem* getItems();
		void setLastSelect(int lastSelect);

		int selectItem();
		void printMenu();
		void start();
		void startF(int lastSelect);
	};
}