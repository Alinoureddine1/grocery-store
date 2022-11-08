#pragma once
#include "Meat.h"
#include <string>

class Fish:public Meat
{
private:
	std::string name;

public:
	Fish();
	virtual void print() const;
	virtual double getcost(double);
	virtual std::string getcategory();
	virtual double getstock();
	virtual double getprice();
	virtual std::string getunit();
	virtual std::string getname();
	virtual ~Fish();
};

