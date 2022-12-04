#include "Stack.h"

Stack::Stack() {
	count = 0;
	top = nullptr; //nullptr zastêpuje zmienn¹ null
}

bool Stack::Push(Item* item) {
	if (item == nullptr) return false;
	count++; //count zwiêkszaymy o 1
	item->setPrevious(top);
	top = item;
	return true;
}

Stack::~Stack() { //~ - destruktor - gdy obiekt wykracza poza zakres to automatycznie wystepuje delete
	if (count != 0) {
		Item* item = top;
		Item* temp = nullptr;
		while (item != nullptr) {
			item = item;
			item = item->getPrevious();
			delete temp;
		}
		count = 0;
		top = nullptr;
	}
}
std::ostream& operator<<(std::ostream& os, const Stack& stack) { // operator przekierowania strumienia
	if (stack.GetCount() == 0)  {
		os << "Stos jest pusty!!!" << std::endl;
		return os;
	}
	os << "Informacje o stosie : rozmiar:" << stack.GetCount() << std::endl;
	Item* temp = stack.GetTop();
	while (temp != nullptr) {
		os << temp;
		temp = temp->getPrevious(); //(*temp).getPrevious();
	}
	return os;
}
Item* Stack::Pop() { //Pop - œci¹ga ostani element (ze stosa)
	Item* item = top;
	top = item->getPrevious();
	count--; //count zmniejamy o 1
	return item;
}