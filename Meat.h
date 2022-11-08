#pragma once
#include "Grocery.h"
#include <string>
class Meat: public Grocery
{

private:
	std::string name;
public:
	Meat();
	virtual void print() const  ;
	virtual double getcost(double);
	virtual double getstock();
	virtual std::string getcategory();
	virtual double getprice();
	virtual std::string getunit();
	virtual std::string getname();
	virtual ~Meat();
};

