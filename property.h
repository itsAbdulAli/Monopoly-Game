#pragma once
#include "block.h"
class Property : public block
{
	int price;
	int rent;
	bool owner;
	bool mortgaged;
	int owner_id;
public:
	int type;//1->residential 0->nonresidential
	Property();
	Property(int,const char*,int,int,bool,int);
	~Property();
	//Getters
	int get_price();
	double get_rent();
	bool get_owner();
	bool get_mortgage();
	int get_ownerID();
	//Setters
	void set_ownerID(int);
	void set_price(int);
	void set_rent(int);
	void set_owner(bool);
	void set_mortgaged(bool);
	void make_polymorphic()
	{
		return;
	}
};
