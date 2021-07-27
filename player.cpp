#include<iostream>
#include<time.h>
#include"Property.h"
#include"player.h"
using namespace std;
void expand(Property**& arr, int& size)
{
	Property** ptr = new Property * [size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = arr[i];
	}
	delete arr;
	arr = new Property * [size + 1];

	if (size != 0)
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = ptr[i];
		}
	}
	delete[]ptr;
	size = size + 1;
}
player::player()
{
	name = nullptr;
	player_sign = '\0';
	cash = 5000;
	properties = nullptr;
	property_count = 0;
	position = 0;
	jail = 0;
	jail_cards = 0;
	bankrupcy = 0;
	in_jail_interval = 0;
	
}
player::player( const char* n, char sign)
{
	int s = strlen(n) + 1;
	name = new char[s];
	for (int i = 0; n[i] != '\0'; i++)
		name[i] = n[i];
	name[s - 1] = '\0';
	cash = 5000;
	player_sign = sign;
	properties = nullptr;
	property_count = 0;
	position = 0;
	jail = 0;
	jail_cards = 0;
	bankrupcy = 0;
	in_jail_interval = 0;
}
player::~player()
{
	if (name != nullptr)
	{
		delete[] name;
		name = nullptr;
	}
	if (properties != nullptr)
	{
		delete[] properties;
		properties = nullptr;
	}
}

int player::get_position()
{
	return position;
}

double player::get_cash()
{
	return cash;
}

bool player::get_jail()
{
	return jail;
}

char player::get_sign()
{
	return player_sign;
}

int player::get_jailcards()
{
	return jail_cards;
}

int player::get_porperty_count()
{
	return property_count;
}

Property** player::get_property()
{
	return properties;
}

void player::set_cash(int cash)
{
	this->cash = cash;
}

void player::set_property_count(int props)
{
	property_count = props;
}

void player::set_jail(bool jail)
{
	this->jail = jail;
}

void player::set_jail_cards(int cards)
{
	jail_cards = cards;
}

void player::set_position(int pos)
{
	position = pos;
}

void player::set_bankrupcy(bool b)
{
	bankrupcy = b;
}

void player::add_jail_cards()
{
	jail_cards += 1;
}
void player::remove_jail_cards()
{
	if (jail_cards != 0)
	{
		jail_cards -= 1;
	}
}
void player::add_cash(int amount)
{
	cash += amount;
}
void player::reduce_cash(int amount)
{
	cash -= amount;
}
void player::add_properties(Property*& obj)
{
		expand(properties, property_count);
		properties[property_count - 1] = obj;
		properties[property_count - 1]->set_owner(true);
}
bool player::check_property(int id)
{
	for (int i = 0; i < property_count; i++)
	{
		if (properties[get_propertyIndex(id)]->get_id() == id)
		{
			return true;
		}
	}
	return false;
}
bool player::check_mortgaged(int id)
{
	if (this->check_property(id) == true)
	{
		if (properties[get_propertyIndex(id)]->get_mortgage() == true)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
int player::get_propertyIndex(int id)
{
	if (id == 1)
		return 0;
	if (id == 2)
		return 1;
	if (id == 3)
		return 2;
	if (id == 4)
		return 3;
	if (id == 5)
		return 4;
	if (id == 6)
		return 5;
	if (id == 7)
		return 6;
	if (id == 11)
		return 7;
	if (id == 12)
		return 8;
	if (id == 13)
		return 9;
	if (id == 14)
		return 10;
	if (id == 15)
		return 11;
	if (id == 16)
		return 12;
	if (id == 18)
		return 13;
	if (id == 19)
		return 14;
	if (id == 21)
		return 15;
	if (id == 22)
		return 16;
	if (id == 24)
		return 17; 
	if (id == 25)
		return 18;
	if (id == 27)
		return 19;
	if (id == 29)
		return 20;
	if (id == 31)
		return 21;
	if (id == 32)
		return 22;
	if (id == 34)
		return 23;
	if (id == 35)
		return 24;
	if (id == 37)
		return 25;
	if (id == 38)
		return 26;
	if (id == 39)
		return 27;
}
bool player::mortgage_property(int id)
{

		properties[get_propertyIndex(id)]->set_mortgaged(true);
		return true;
	
}
void player::reedem(int id)
{
	if (this->check_mortgaged(id) == true)
	{
		properties[get_propertyIndex(id)]->set_mortgaged(false);
	}

}
int player::count_total_house()
{
	int house = 0;
	for (int i = 0; i < property_count; i++)
	{
		residential* downcast = dynamic_cast<residential*>(properties[i]);
		house += downcast->get_house();
	}
	return house;
}
int player::count_total_hotel()
{
	int hotel = 0;
	for (int i = 0; i < property_count; i++)
	{
		residential* downcast = dynamic_cast<residential*>(properties[i]);
		hotel += downcast->get_hotel();
	}
	return hotel;
}
int player::count_total_shop()
{
	int shop = 0;
	for (int i = 0; i < property_count; i++)
	{
		residential* downcast = dynamic_cast<residential*>(properties[i]);
		shop += downcast->get_shops();
	}
	return shop;
}
