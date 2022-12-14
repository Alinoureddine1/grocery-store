#pragma once
#include <string>
#include "Fish.h"

class Salmon:public Fish
{
private:
	std::string unit;
	std::string name;
	std::string category;
	double price;
	double stock;
public:
	Salmon();
	Salmon(double, double);;
	virtual double getcost(double);
	virtual double getstock();
	virtual std::string getcategory();
	virtual double getprice();
	virtual void setrprice(double);
	virtual void setstock(double);
	virtual std::string getunit();
	virtual std::string getname();
	virtual void print() const;
	virtual ~Salmon();
};

