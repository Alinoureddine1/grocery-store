#pragma once
#include <string>
#include "Meat.h"

class Chicken:public Meat
{

private:
	std::string unit;
	std::string name;
	std::string category;
	double price;
	double stock;
public:
	Chicken();
	Chicken(double, double);
	virtual void print() const;
	virtual double getcost(double);
	virtual std::string getcategory();
	virtual double getstock();
	virtual double getprice();
	virtual void setrprice(double);
	virtual void setstock(double);
	virtual std::string getunit();
	virtual std::string getname();
	virtual ~Chicken();

};

