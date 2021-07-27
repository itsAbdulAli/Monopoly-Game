#include"bank.h"
		#include"Property.h"
#include"non_residential.h"
#include"residential.h"
#include<fstream>
void bank:: expand(Property**& arr, int& size)
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
bank::bank()
{
	total_cash = 50000;
	no_of_properties = 0;
	properties = nullptr;
}
bank::bank(long int cash, int count)
{
	total_cash = cash;
	no_of_properties = count;
	properties = nullptr;
}
bank::~bank()
{
	if (properties != nullptr)
	{
		delete[]properties;
		properties = nullptr;
	}
}
Property** bank::get_properties()
{
	return properties;
}
void bank::read_file()
{
	ifstream fin;
	fin.open("properties.txt");
	int id;
	char* name = new char[30];
	int rent;
	int price;
	bool mort;
	char* grp = new char[10];
	int house;
	int shop;
	bool hotel;
	bool gas;
	bool net;
	bool elec;
	if (fin.is_open())
	{
		while (!(fin.eof()))
		{
			expand(properties, no_of_properties);
			fin >> id;
			if(id==3 || id == 5 || id == 12 || id == 15 || id ==  21 || id == 22|| id == 24|| id == 37)
			{
				fin >> name;
				fin >> price;
				fin >> rent;
				fin >> mort;
				properties[no_of_properties - 1] = new non_residential(id, name, price, rent, mort);
			}
			else
			{
				fin >> name;
				fin >> price;
				fin >> rent;
				fin >> mort;
				fin >> grp;
				fin >> house;
				fin >> shop;
				fin >> hotel;
				fin >> gas;
				fin >> net;
				fin >> elec;
				properties[no_of_properties - 1] = new residential(id, name, price, rent, mort,grp,house,shop,hotel,gas,net,elec);

			}
		}
	}
	delete[] name;
	name = nullptr;
	delete[]grp;
	grp = nullptr;
	fin.close();

}
bool bank::check_mortgage(int id)
{
	for (int i = 0; i < no_of_properties; i++)
	{
		if (properties[i]->get_id() == id)
		{
			if (properties[i]->get_mortgage() == true)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
}
bool bank::check_ownership(int id)
{
	for (int i = 0; i < no_of_properties; i++)
	{
		if (properties[i]->get_id() == id)
		{
			if (properties[i]->get_owner() == true)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
}
bool bank::mortgage_property(int id)
{
	if (properties[get_propertyIndex(id)]->get_owner() == true && properties[get_propertyIndex(id)]->get_mortgage() == false)
	{
		properties[get_propertyIndex(id)]->set_mortgaged(true);
		return true;
	}
	else
	{
		return false;
	}
}
void bank::addProperty(Property*& p)
{

	expand(properties, no_of_properties);
	properties[no_of_properties - 1] = p;
	
}
Property* bank::sell_property(int id)
{
	if (properties[get_propertyIndex(id)]->get_owner() == false)
	{
		properties[get_propertyIndex(id)]->set_owner(true);
		return properties[get_propertyIndex(id)];
	}
	else
		return nullptr;
}
int bank::get_propertyIndex(int id)
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