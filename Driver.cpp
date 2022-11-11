//Group members:
//Ali Noureddine - 40159265
//Aman singh - 40190387
#include <iostream>
#include "Beef.h"
#include "Meat.h"
#include "Cheese.h"
#include "Chicken.h"
#include "Dairy.h"
#include "CustomerOrder.h"
#include "Eggs.h"
#include "Fish.h"
#include "GroceryManager.h"
#include "Salmon.h"
#include "SeaBass.h"
#include "Yogurt.h"
#include "Haddock.h"
#include "Milk.h"
#include "VegetablesFruits.h"
#include "Apples.h"
#include "Carrots.h"
#include "Pasta.h"
#include "Pantry.h"
int main()
{
	Grocery* store[12];
	GroceryManager* market = new GroceryManager();


	//removing junk data
	for (int i = 0; i < 12; i++)
	{
		store[i] = nullptr;
	}

	//creating items with corresponding stock and prices
	store[0] = new Beef(100.0,15.0);
	store[1] = new Chicken(200.0,20.0);
	store[2] = new Salmon(50.0, 28.0);
	store[3] = new SeaBass(40.0,15.0);
	store[4] = new Haddock(30.0,20.0);
	store[5] = new Eggs(40.0,3.0);
	store[6] = new Milk(200.0,2.0);
	store[7] = new Cheese(30.0,25.0);
	store[8] = new Yogurt(20.0,4.0);
	store[9] = new Apples(15.0,4.0);
	store[10] = new Carrots(20.0,6.0);
	store[11] = new Pasta(30,2);


	//Setting up the market
	for (int i = 0; i < 12; i++)
	{
		market->additem(store[i]);
	}

	//Here Note that the grocerymanager class has functions to create pointers of type customer order and iniitalize them directly
	//everytime we are done with an order we can call the neworder function to create a new Order hence saving the previous one in an array of
	//type customer order
	//this approach to me seemed the best regarding memory managment 
	market->neworder();

	//Purchase function checks for the items then buy them if possible
	//the stocks of bought items is altered correspondingly 

	market->purchase("Beef", 15);
	market->purchase("Chicken", 2.7);
	market->purchase("tuna", 14);    //This element is not in the selection hence it wont be bought
	market->purchase("Pasta", 9.8);

	//initializing a new order
	market->neworder();

	//Buying
	market->purchase("Chicken", 500.0); // wont get processed since 500 is a lot
	market->purchase("Salmon", 2.7);
	market->purchase("Beef", 8.8);
	market->purchase("Haddock", 7);
	market->purchase("Milk", 3);




	//initializing a new order
	market->neworder();

	//Buying
	market->purchase("Eggs", 3); // wont get processed since 500 is a lot
	market->purchase("Carrots", 4);
	market->purchase("SeaBass", 8.8);
	market->purchase("Apples", 9.8);
	market->purchase("Milk", 1.5);
	market->purchase("Cheese", 2.3);


	//Printing the  Receipt for customer 2
	cout << endl;
	market->printorder(2);

	cout << "\n\n\n";


	//Printing all receipts
	market->printallorders();

	//Checking the options available in the FIsh department
	market->checkcategory("Fish");
	cout << endl;
	//Checking the options available in the dairy section
	market->checkcategory("Dairy");


	//Here note it is enough to delete the market object since its delete function is capable of deleting all member objects directly 
	delete market;

	
	return 0;
}





