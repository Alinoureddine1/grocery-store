#pragma once
#include <string>
#include "Dairy.h"

class Milk:public Dairy
{

private:
	std::string unit;
	std::string name;
	std::string category;
	double price;
	double stock;
public:
	Milk();
	Milk(double, double);;
	virtual void print() const;
	virtual double getcost(double);
	virtual void setrprice(double);
	virtual void setstock(double);
	virtual std::string getcategory();
	virtual std::string getunit();
	virtual double getprice();
	virtual double getstock();
	virtual std::string getname();
	virtual ~Milk();
};

