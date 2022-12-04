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
			temp = item;
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
Item* Stack::Pop() {
	if (top == nullptr) {
		exit(1);
	}
	Item* item = top;
	count--;
	if (top->getPrevious() == nullptr) {
		top = nullptr;
		return item;
	}
	Item* penult_item = top;
	while (penult_item->getPrevious()->getPrevious() != nullptr) {
		penult_item = penult_item->getPrevious();
	}
	item = penult_item->getPrevious();
	penult_item->setPrevious(nullptr);
	return item;
}