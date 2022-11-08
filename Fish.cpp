#include "Fish.h"
#include <iostream>
using namespace std;


Fish::Fish() {
	this->  name = "fish";
}

Fish::~Fish() {

}
void Fish::print() const {
	cout << "Fish section includes: \n";
	cout << "Salmon\nSeaBass\nHaddock\n";

}

double Fish::getstock() {
	return 0.0;
}

std::string Fish::getname() {
	return this->name;
}

std::string Fish::getcategory() {
	return "";
}

double Fish::getprice() {
	return 0;
}

std::string Fish::getunit() {
	return "";
}
double Fish::getcost(double x) {
	cout << "Please make your selection from the following categories: \n";
	cout << "Beef\nChicken\nHaddock\nSalmon\nSeaBass\n";
	return 0;
}