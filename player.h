#pragma once
#include<iostream>
#include"Property.h"
#include "non_residential.h"
#include"residential.h"
using namespace std;
class player
{
	char player_sign;
	char* name;
	int cash;
	Property** properties;
	int property_count;
	int position;
	bool jail;
	int jail_cards;
	bool bankrupcy;
	int in_jail_interval;
public:
	
	player();
	player(const char*, char);
	~player();
	
	//Getters
	int get_position();
	double get_cash();
	bool get_jail();
	char get_sign();
	int get_jailcards();
	int get_porperty_count();
	Property** get_property();
	//Setters
	void set_cash(int);
	void set_property_count(int);
	void set_jail(bool);
	void set_jail_cards(int);
	void set_position(int);
	void set_bankrupcy(bool);
	//Funtions
	void add_jail_cards();
	void remove_jail_cards();
	void add_cash(int);
	void reduce_cash(int);
	void add_properties(Property*&);
	bool mortgage_property(int);
	bool check_property(int);
	bool check_mortgaged(int);
	int get_propertyIndex(int);
	void reedem(int id);
	int count_total_house();	
	int count_total_hotel();	
	int count_total_shop();
	void decrement_jailinterval()
	{
		in_jail_interval--;
	}
	void reset_jailinterval()
	{
		in_jail_interval=0;
	}
	void set_jailinterval()
	{
		in_jail_interval = 3;
	}
	int get_interval()
	{
		return in_jail_interval;
	}
	bool givebankrupt()
	{
		return bankrupcy;
	}
};