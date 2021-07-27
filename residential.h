#pragma once
#include "Property.h"
#include "Player.h"

class residential :public Property
{
	char* group;
	int  house;
	int  shops;
	bool hotel;
	int payrent;

	//Utilities
	bool gas;
	bool wifi;
	bool electricity;
public:
	residential();
	residential(int,const char* ,int,int,bool,const char*,int,int,bool,bool,bool,bool);
	~residential();
	//Getters
	char* get_group();
	int get_house();
	int get_shops();
	bool get_hotel();
	bool get_gas();
	bool get_wifi();
	bool get_electricity();
	int get_payrent();
	//setters
	void set_house(int);
	void set_shops(int);
	void set_hotel(bool);
	void set_gas(bool);
	void set_wifi(bool);
	void set_electricity(bool);
	void set_payrent(int);

	//void upgrade(Player& whichplayer);

	
};
