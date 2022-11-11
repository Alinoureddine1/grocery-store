#pragma once
#include <string>
#include "Dairy.h"

class Cheese:public Dairy
{

private:
	std::string unit;
	std::string name;
	std::string category;
	double price;
	double stock;
public:
	Cheese();
	Cheese(double, double);;
	virtual void print() const;
	virtual double getcost(double);
	virtual std::string getcategory();
	virtual std::string getunit();
	virtual void setrprice(double);
	virtual void setstock(double);
	virtual double getprice();
	virtual double getstock();
	virtual std::string getname();
	virtual ~Cheese();
};

