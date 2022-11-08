#pragma once
#include <string>
#include "Meat.h"

class Beef:public Meat
{

private:
	std::string unit;
	std::string name;
	std::string category;
	const double price = 15.0;
	double stock;
public:
	Beef();
	virtual void print() const;
	virtual double getcost(double);
	virtual std::string getcategory();
	virtual std::string getunit();
	virtual double getprice();
	virtual double getstock();
	virtual std::string getname();
	virtual ~Beef();
};

