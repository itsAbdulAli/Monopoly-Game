#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
class card {
private:
	string name;
	int price;
	int type;
	int rent;
	bool mortgaged;
	int owner_id;
	int house;
	int hotel;
	int shop;
	bool wifi;
	bool electricity;
	bool gas;
public:
	card();
	card(char name[], int type,int price, int rent, bool mortgage, int ownerid);
	~card();
	void set_price(int);
	void set_rent(int);
	void set_mortgage(bool);
	void set_owner(int);
	void set_house(int);
	void set_hotel(int);
	void set_shop(int);
	void set_wifi(bool);
	void set_elec(bool);
	void set_gas(bool);
	void draw(sf::RenderWindow& window, int x, int y);

};
