#pragma once
#include"Property.h"
class bank
{
	long int total_cash;
	Property** properties;
	int no_of_properties;
public:
	
	bank();
	bank(long int, int);
	~bank();
	//getter
	Property** get_properties();

	//read properties from file
	void read_file();
	//functions
	bool check_mortgage(int);
	bool check_ownership(int);
	bool mortgage_property(int);
	void expand(Property**& arr, int& size);
	void addProperty(Property*& p);
	Property* sell_property(int id);
	void add_cash(int cash)
	{
		total_cash += cash;
	}
	int get_propertyIndex(int);
	void reduce_cash(int cash)
	{
		total_cash -= cash;
	}
	int get_cash()
	{
		return total_cash;
	}
};