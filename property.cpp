#include"Property.h"
#include"block.h"
#include<iostream>
using namespace std;
Property::Property()
{
	price = 0;
	rent = 0;
	owner = false;
	mortgaged = 0;
	type = -1;
	owner_id = -1;
}
Property::Property(int id, const char* name, int price, int rent, bool mortgaged,int type_) : block(id, name,2)
{
	this->price = price;
	this->rent = rent;
	this->mortgaged = mortgaged;
	this->type = type_;
	owner = false;
	owner_id = -1;
}
void Property::set_ownerID(int x)
{
	owner_id = x;

}
int Property::get_ownerID()
{
	return owner_id;

}
Property::~Property()
{

}
int Property::get_price()
{
	return price;
}
double Property::get_rent()
{
	return rent;
}
bool Property::get_owner()
{
	return owner;
}
bool Property::get_mortgage()
{
	return mortgaged;
}
void Property::set_owner(bool owner)
{
	this->owner = owner;
}
void Property::set_price(int price)
{
	this->price = price;
}
void Property::set_rent(int rent)
{
	this->rent = rent;
}
void Property::set_mortgaged(bool mortgaged)
{
	this->mortgaged = mortgaged;
}

//Property::Property()
//{
//
//}
