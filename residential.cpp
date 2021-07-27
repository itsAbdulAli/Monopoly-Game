#include"residential.h"
residential::residential()
{
	group = nullptr;
	house = 0;
	shops = 0;
	hotel = 0;
	gas = 0;
	wifi = 0;
	electricity = 0;
	payrent = 0;
}

residential::residential(int id,const char* name, int price, int rent, bool mortgaged,const char* family, int house, int shops, bool hotel, bool gas, bool wifi, bool electricity) :Property(id,name, price, rent, mortgaged,1)
{
	int s = strlen(family) + 1;
	group = new char[s];
	for (int i = 0; family[i] != '\0'; i++)
		group[i] = family[i];
	group[s - 1] = '\0';
	this->house = house;
	this->shops = shops;
	this->hotel = hotel;
	this->gas = gas;
	this->wifi = wifi;
	this->electricity = electricity;
	payrent = get_rent(); //the default rent of a Property without any building
}

residential::~residential()
{
	
}

char* residential::get_group()
{
	return group;
}

int residential::get_house()
{
	return house;
}

int residential::get_shops()
{
	return shops;
}

bool residential::get_hotel()
{
	return hotel;
}

bool residential::get_gas()
{
	return gas;
}

bool residential::get_wifi()
{
	return wifi;
}

bool residential::get_electricity()
{
	return electricity;
}

int residential::get_payrent()
{
	return payrent;
}
void residential::set_house(int h)
{
	house = h;
}
void residential::set_shops(int s)
{
	shops = s;
}
void residential::set_hotel(bool h)
{
	hotel = h;
}
void residential::set_gas(bool g)
{
	gas = g;
}
void residential::set_wifi(bool w)
{
	wifi = w;
}
void residential::set_electricity(bool e)
{
	electricity=e;
}
void residential::set_payrent(int p)
{
	payrent=p;
}