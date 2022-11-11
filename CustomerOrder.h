#pragma once
#include <string>
#include <tuple>
#include <vector>
#include <string>
using namespace std;

class CustomerOrder {

private:
	static int ordernbvar;
	int ordernb;
	std::vector<tuple<std::string, double, double,string>> items; //name, price, quantity, unit
	double price;


public:
	CustomerOrder();
	void printreceipt();
	void addtoreceipt(string, double, double,string);
	void addprice(double);
	~CustomerOrder();
	int getordernb();








};