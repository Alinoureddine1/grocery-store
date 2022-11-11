#pragma once
#include <string>
#include "Fish.h"
class Haddock: public Fish
{

private:
	std::string unit;
	std::string name;
	std::string category;
	double price;
	double stock;
public:
	Haddock();
	Haddock(double, double);
	virtual double getcost(double);
	virtual void print() const ;
	virtual std::string getcategory();
	virtual double getprice();
	virtual std::string getunit();
	virtual void setrprice(double);
	virtual void setstock(double);
	virtual double getstock();
	virtual std::string getname();
	virtual ~Haddock();

};

