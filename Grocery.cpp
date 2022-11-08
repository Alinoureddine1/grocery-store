#include "Grocery.h"
#include <iostream>
using namespace std;


Grocery::Grocery() {
	this->name = "Grocery";
}

void Grocery::print() const {
	cout << "Grocery includes:\n" << "Meat\nDairy\nVegetables & Fruits\nPantry\n";
}
std::string Grocery::getname() {
	return this->name;
}
Grocery::~Grocery() {
}
