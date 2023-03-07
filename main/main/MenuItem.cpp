#include <string>
#include <iostream>

#include "MenuItem.h"

using namespace std;

namespace SAR {
	MenuItem::MenuItem(string name, Function f) : nameItem(name), func(f) {};

	string MenuItem::getItem() {
		return nameItem;
	}
	void MenuItem::setItem(string newName) {
		nameItem = newName;
	}
	void MenuItem::printItem() {
		cout << nameItem << endl;
	}
	void MenuItem::run() {
		func();
	}
}
