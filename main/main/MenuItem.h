#pragma once
#include <string>

using namespace std;

namespace SAR {
	class MenuItem {
	private:
		typedef void (*Function)();
		string nameItem;
		Function func;
	public:
		MenuItem(string, Function);
		string getItem();
		void setItem(string newName);
		void printItem();
		void run();
	};
}
