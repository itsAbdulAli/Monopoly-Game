#include "card.h"
#include<sstream>
using namespace std;


card::card()
{
	name = "x";
}
card::card(char name_[], int type_, int price_, int rent_, bool mortgage_, int ownerid_)
{
	string n = name_;
	name = n;
	type = type_;
	price = price_;
	rent = rent_;
	mortgaged = mortgage_;
	owner_id = ownerid_;
	if (type == 1)
	{
		house = 0;
		hotel = 0;
		shop = 0;
		wifi = false;
		electricity = false;
		gas = false;
	}
}
card::~card()
{
}
void card::set_price(int price_)
{
	price = price_;
}
void card::set_rent(int x)
{
	rent = x;
}
void card::set_mortgage(bool x)
{
	mortgaged = x;
}
void card::set_owner(int x)
{
	owner_id = x;
}
void card::set_house(int x)
{
	if (type == 1)
	{
		house = x;
	}
}
void card::set_hotel(int x)
{
	if (type == 1)
	{
		hotel = x;
	}

}
void card::set_shop(int x)
{
	if (type == 1)
	{
		shop = x;
	}
}
void card::set_wifi(bool x)
{
	if (type == 1)
	{
		wifi = x;
	}

}
void card::set_elec(bool x)
{
	if (type == 1)
	{
		electricity = x;
	}
}
void card::set_gas(bool x)
{
	if (type == 1)
	{
		gas = x;
	}
}
void card::draw(sf::RenderWindow& window, int x, int y)
{
	sf::RectangleShape square; 
	square.setFillColor(sf::Color::White);
	square.setSize(sf::Vector2f(200,300));
	square.setPosition(sf::Vector2f(x, y));
	
	sf::Font font;
	font.loadFromFile("arial.ttf");
	sf::Text enter;
	enter.setCharacterSize(18);
	enter.setFillColor(sf::Color::Blue);
	enter.setFont(font);
	enter.setString(name);
	x = x + 10;
	y = y + 20;
	enter.setPosition(x, y);
	window.draw(square);
	window.draw(enter);
	enter.setCharacterSize(12);
	x = x + 5;
	y += 40;
	stringstream ss;
	string s;
	ss << price;
	ss >> s;
	enter.setString("Price: " +s);
	enter.setPosition(x , y);
	window.draw(enter);
	stringstream ss1;
	ss1 << rent;
	ss1 >> s;
	y += 20;
	enter.setString("Rent: " + s);
	enter.setPosition(x, y);
	window.draw(enter);

	if (owner_id >= 0)
	{
		stringstream ss2;
		ss2 << owner_id+1;
		ss2 >> s;
		y += 20;
		enter.setString("Owner: " + s);
		enter.setPosition(x, y);
		window.draw(enter);
	}
	else {
		enter.setString("Owner: Bank");
		y += 20;
		enter.setPosition(x, y);
		window.draw(enter);
	}
	
	stringstream ss3;
	ss3 << mortgaged;
	ss3 >> s;
	y += 20;
	enter.setString("Mortgage: " + s);
	enter.setPosition(x, y);
	window.draw(enter);
	if (type == 1)
	{
		stringstream ss5;
		ss5 << house;
		ss5 >> s;
		y += 20;
		enter.setString("Houses: " + s);
		enter.setPosition(x, y);
		window.draw(enter);
		stringstream ss6;
		ss6 << hotel;
		ss6 >> s;
		y += 20;
		enter.setString("Hotels: " + s);
		enter.setPosition(x, y);
		window.draw(enter);
		stringstream ss7;
		ss7 << shop;
		ss7 >> s;
		y += 20;
		enter.setString("Shops: " + s);
		enter.setPosition(x, y);
		window.draw(enter);
		stringstream ss8;
		ss8 << electricity;
		ss8 >> s;
		y += 20;
		enter.setString("Electricity: " + s);
		enter.setPosition(x, y);
		window.draw(enter);
		stringstream ss9;
		ss9 << gas;
		ss9 >> s;
		y += 20;
		enter.setString("Gas: " + s);
		enter.setPosition(x, y);
		window.draw(enter);
		stringstream ss10;
		ss10 << wifi;
		ss10 >> s;
		y += 20;
		enter.setString("Wifi: " + s);
		enter.setPosition(x, y);
		window.draw(enter);
	
	}
}