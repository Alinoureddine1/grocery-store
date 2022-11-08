#pragma once
#include <string>
#include <tuple>
#include <vector>
#include <string>
using namespace std;

class CustomerOrder {

private:
	static int ordernb;
	std::vector<tuple<std::string, double, double>> items; //name,price, quantity
	double price;


public:
	CustomerOrder();
	void printreceipt();
	void addtoreceipt(string, double, double);
	void addprice(double);
	~CustomerOrder();
	int getordernb();








};