#include<iostream>
#include <fstream>
#include"player.h"
#include"block.h"
#include"bank.h"
#include "Monopoly.h"
#include "empty_block.h"
#include"Property.h"
#include "non_residential.h"
#include"residential.h"
#include"tax_block.h"
#include"Treasure.h"
#include<sstream>  
//bank b;
//player** player_arr;
//block** board;
//int no_of_players;
//bool win;
//int current_player;
//int winner;
monopoly::monopoly():b()
{
	player_arr = nullptr;
	board = nullptr;
	no_of_players = 0;
	win = false;
	current_player = 0;
	winner = 0;
}
monopoly::monopoly(int players)
{
	no_of_players = players;
	win = false;
	current_player = 0;
	winner = 0;
	player_arr = new player * [players];
	for (int i = 0; i < players; i++)
	{
		player_arr[i] = new player("Player", 'no');
	}
	board = new block*[40];
	cards = new card*[38];
	fstream property_file;
	property_file.open("properties.txt");
	if (property_file.is_open() == true)
	{
	
		for (int i = 0; i < 40; i++)
		{
			if (i == 0)
			{
				board[i] = new empty_block(i,"GO", true, 1);
			}
			if (i == 1)
			{
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				char family[30];
				int house;
				int shops;
				bool hotel;
				bool gas;
				bool wifi;
				bool electricity;
				property_file >> id >> name >> price >> rent >> mortgaged >> family >> house >> shops >> hotel >> gas >> wifi >> electricity;
				board[i] = new residential(id, name, price, rent, mortgaged, family , house, shops, hotel , gas , wifi , electricity);
				cards[0] = new card(name, 1, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 2)
			{
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				char family[30];
				int house;
				int shops;
				bool hotel;
				bool gas;
				bool wifi;
				bool electricity;
				property_file >> id >> name >> price >> rent >> mortgaged >> family >> house >> shops >> hotel >> gas >> wifi >> electricity;
				board[i] = new residential(id, name, price, rent, mortgaged, family, house, shops, hotel, gas, wifi, electricity);
				cards[1] = new card(name, 1, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 3) {

				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				property_file >> id >> name >> price >> rent >> mortgaged;
				board[i] = new non_residential(id, name, price, rent, mortgaged);
				cards[2] = new card(name, 0, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}

			if (i == 4) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				char family[30];
				int house;
				int shops;
				bool hotel;
				bool gas;
				bool wifi;
				bool electricity;
				property_file >> id >> name >> price >> rent >> mortgaged >> family >> house >> shops >> hotel >> gas >> wifi >> electricity;
				board[i] = new residential(id, name, price, rent, mortgaged, family, house, shops, hotel, gas, wifi, electricity);
				cards[3] = new card(name, 1, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 5) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				property_file >> id >> name >> price >> rent >> mortgaged;
				board[i] = new non_residential(id, name, price, rent, mortgaged);
				cards[4] = new card(name, 0, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 6) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				char family[30];
				int house;
				int shops;
				bool hotel;
				bool gas;
				bool wifi;
				bool electricity;
				property_file >> id >> name >> price >> rent >> mortgaged >> family >> house >> shops >> hotel >> gas >> wifi >> electricity;
				board[i] = new residential(id, name, price, rent, mortgaged, family, house, shops, hotel, gas, wifi, electricity);
				cards[5] = new card(name, 1, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 7) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				char family[30];
				int house;
				int shops;
				bool hotel;
				bool gas;
				bool wifi;
				bool electricity;
				property_file >> id >> name >> price >> rent >> mortgaged >> family >> house >> shops >> hotel >> gas >> wifi >> electricity;
				board[i] = new residential(id, name, price, rent, mortgaged, family, house, shops, hotel, gas, wifi, electricity);
				cards[6] = new card(name, 1, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 8) {
				board[i] = new treasure(i,"CHANCE");
				treasure* dwncast = dynamic_cast<treasure*>(board[i]);
				dwncast->type = 0;
				dwncast->set_chance_count(0);
			}
			if (i == 9) {
				board[i] = new tax_block(i,"LAND TAX",200); // default value for tax be 200 change it afterwards
			}
			//emptycell
			if (i == 10) {
				board[i] = new empty_block(i, "JAIL", true, 2);
			}
			if (i == 11) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				char family[30];
				int house;
				int shops;
				bool hotel;
				bool gas;
				bool wifi;
				bool electricity;
				property_file >> id >> name >> price >> rent >> mortgaged >> family >> house >> shops >> hotel >> gas >> wifi >> electricity;
				board[i] = new residential(id, name, price, rent, mortgaged, family, house, shops, hotel, gas, wifi, electricity);
				cards[7] = new card(name, 1, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 12) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				property_file >> id >> name >> price >> rent >> mortgaged;
				board[i] = new non_residential(id, name, price, rent, mortgaged);
				cards[8] = new card(name, 0, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 13) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				char family[30];
				int house;
				int shops;
				bool hotel;
				bool gas;
				bool wifi;
				bool electricity;
				property_file >> id >> name >> price >> rent >> mortgaged >> family >> house >> shops >> hotel >> gas >> wifi >> electricity;
				board[i] = new residential(id, name, price, rent, mortgaged, family, house, shops, hotel, gas, wifi, electricity);
				cards[9] = new card(name, 1, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 14) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				char family[30];
				int house;
				int shops;
				bool hotel;
				bool gas;
				bool wifi;
				bool electricity;
				property_file >> id >> name >> price >> rent >> mortgaged >> family >> house >> shops >> hotel >> gas >> wifi >> electricity;
				board[i] = new residential(id, name, price, rent, mortgaged, family, house, shops, hotel, gas, wifi, electricity);
				cards[10] = new card(name, 1, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 15) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				property_file >> id >> name >> price >> rent >> mortgaged;
				board[i] = new non_residential(id, name, price, rent, mortgaged);
				cards[11] = new card(name, 0, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 16) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				char family[30];
				int house;
				int shops;
				bool hotel;
				bool gas;
				bool wifi;
				bool electricity;
				property_file >> id >> name >> price >> rent >> mortgaged >> family >> house >> shops >> hotel >> gas >> wifi >> electricity;
				board[i] = new residential(id, name, price, rent, mortgaged, family, house, shops, hotel, gas, wifi, electricity);
				cards[12] = new card(name, 1, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 17) {
				board[i] = new treasure(i, "COMMUNITY CHEST");
				treasure* dwncast = dynamic_cast<treasure*>(board[i]);
				dwncast->type = 1;
				dwncast->set_chance_count(0);
			}
			if (i == 18) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				char family[30];
				int house;
				int shops;
				bool hotel;
				bool gas;
				bool wifi;
				bool electricity;
				property_file >> id >> name >> price >> rent >> mortgaged >> family >> house >> shops >> hotel >> gas >> wifi >> electricity;
				board[i] = new residential(id, name, price, rent, mortgaged, family, house, shops, hotel, gas, wifi, electricity);
				cards[13] = new card(name, 1, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 19) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				char family[30];
				int house;
				int shops;
				bool hotel;
				bool gas;
				bool wifi;
				bool electricity;
				property_file >> id >> name >> price >> rent >> mortgaged >> family >> house >> shops >> hotel >> gas >> wifi >> electricity;
				board[i] = new residential(id, name, price, rent, mortgaged, family, house, shops, hotel, gas, wifi, electricity);
				cards[14] = new card(name, 1, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 20) {
				board[i] = new empty_block(i, "FREE PARKING", true, 3);
			}
			if (i == 21) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				property_file >> id >> name >> price >> rent >> mortgaged;
				board[i] = new non_residential(id, name, price, rent, mortgaged);
				cards[15] = new card(name, 0, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 22) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				property_file >> id >> name >> price >> rent >> mortgaged;
				board[i] = new non_residential(id, name, price, rent, mortgaged);
				cards[16] = new card(name, 0, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 23) {
				board[i] = new treasure(i, "CHANCE");
				treasure* dwncast = dynamic_cast<treasure*>(board[i]);
				dwncast->type = 0;
				dwncast->set_chance_count(1);
			}
			if (i == 24) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				property_file >> id >> name >> price >> rent >> mortgaged;
				board[i] = new non_residential(id, name, price, rent, mortgaged);
				cards[17] = new card(name, 0, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 25) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				char family[30];
				int house;
				int shops;
				bool hotel;
				bool gas;
				bool wifi;
				bool electricity;
				property_file >> id >> name >> price >> rent >> mortgaged >> family >> house >> shops >> hotel >> gas >> wifi >> electricity;
				board[i] = new residential(id, name, price, rent, mortgaged, family, house, shops, hotel, gas, wifi, electricity);
				cards[18] = new card(name, 1, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 26) {
				board[i] = new tax_block(i, "PROPERTY TAX", 200); // default value for tax be 200 change it afterwards
			}
			if (i == 27) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				char family[30];
				int house;
				int shops;
				bool hotel;
				bool gas;
				bool wifi;
				bool electricity;
				property_file >> id >> name >> price >> rent >> mortgaged >> family >> house >> shops >> hotel >> gas >> wifi >> electricity;
				board[i] = new residential(id, name, price, rent, mortgaged, family, house, shops, hotel, gas, wifi, electricity);
				cards[19] = new card(name, 1, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 28) {
				board[i] = new treasure(i, "COMMUNITY CHEST");
				treasure* dwncast = dynamic_cast<treasure*>(board[i]);
				dwncast->type = 1;
				dwncast->set_chance_count(1);
			}
			if (i == 29) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				char family[30];
				int house;
				int shops;
				bool hotel;
				bool gas;
				bool wifi;
				bool electricity;
				property_file >> id >> name >> price >> rent >> mortgaged >> family >> house >> shops >> hotel >> gas >> wifi >> electricity;
				board[i] = new residential(id, name, price, rent, mortgaged, family, house, shops, hotel, gas, wifi, electricity);
				cards[20] = new card(name, 1, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			//emptyblock
			if (i == 30) {
				board[i] = new empty_block(i, "GO TO JAIL", true, 4);
			}
			if (i == 31) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				char family[30];
				int house;
				int shops;
				bool hotel;
				bool gas;
				bool wifi;
				bool electricity;
				property_file >> id >> name >> price >> rent >> mortgaged >> family >> house >> shops >> hotel >> gas >> wifi >> electricity;
				board[i] = new residential(id, name, price, rent, mortgaged, family, house, shops, hotel, gas, wifi, electricity);
				cards[21] = new card(name, 1, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 32) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				char family[30];
				int house;
				int shops;
				bool hotel;
				bool gas;
				bool wifi;
				bool electricity;
				property_file >> id >> name >> price >> rent >> mortgaged >> family >> house >> shops >> hotel >> gas >> wifi >> electricity;
				board[i] = new residential(id, name, price, rent, mortgaged, family, house, shops, hotel, gas, wifi, electricity);
				cards[22] = new card(name, 1, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 33) {
				board[i] = new treasure(i, "COMMUNITY CHEST");
				treasure* dwncast = dynamic_cast<treasure*>(board[i]);
				dwncast->type = 1;
				dwncast->set_chance_count(2);
			}
			if (i == 34) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				char family[30];
				int house;
				int shops;
				bool hotel;
				bool gas;
				bool wifi;
				bool electricity;
				property_file >> id >> name >> price >> rent >> mortgaged >> family >> house >> shops >> hotel >> gas >> wifi >> electricity;
				board[i] = new residential(id, name, price, rent, mortgaged, family, house, shops, hotel, gas, wifi, electricity);
				cards[23] = new card(name, 1, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 35) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				char family[30];
				int house;
				int shops;
				bool hotel;
				bool gas;
				bool wifi;
				bool electricity;
				property_file >> id >> name >> price >> rent >> mortgaged >> family >> house >> shops >> hotel >> gas >> wifi >> electricity;
				board[i] = new residential(id, name, price, rent, mortgaged, family, house, shops, hotel, gas, wifi, electricity);
				cards[24] = new card(name, 1, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 36) {
				board[i] = new treasure(i, "CHANCE");
				treasure* dwncast = dynamic_cast<treasure*>(board[i]);
				dwncast->type = 0;
				dwncast->set_chance_count(2);
			}
			if (i == 37) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				property_file >> id >> name >> price >> rent >> mortgaged;
				board[i] = new non_residential(id, name, price, rent, mortgaged);
				cards[25] = new card(name, 0, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 38) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				char family[30];
				int house;
				int shops;
				bool hotel;
				bool gas;
				bool wifi;
				bool electricity;
				property_file >> id >> name >> price >> rent >> mortgaged >> family >> house >> shops >> hotel >> gas >> wifi >> electricity;
				board[i] = new residential(id, name, price, rent, mortgaged, family, house, shops, hotel, gas, wifi, electricity);
				cards[26] = new card(name, 1, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
			if (i == 39) {
				int id;
				char name[30];
				int price;
				int rent;
				bool mortgaged;
				char family[30];
				int house;
				int shops;
				bool hotel;
				bool gas;
				bool wifi;
				bool electricity;
				property_file >> id >> name >> price >> rent >> mortgaged >> family >> house >> shops >> hotel >> gas >> wifi >> electricity;
				board[i] = new residential(id, name, price, rent, mortgaged, family, house, shops, hotel, gas, wifi, electricity);
				cards[27] = new card(name, 1, price, rent, mortgaged, -1);
				Property* dwncast = dynamic_cast<Property*>(board[i]);
				b.addProperty(dwncast);
			}
		}
		
	}
}
monopoly::~monopoly()
{
	for (int i = 0; i < 40; i++)
	{
		if (board[i] != nullptr)
		{
			delete board[i];
		}
	}
	if (board != nullptr)
	{
		delete[]board;
		board = nullptr;
	}
	for (int i = 0; i < no_of_players; i++)
	{
		if (player_arr[i] != nullptr)
		{
        	delete player_arr[i];
		}
	}
	if (player_arr != nullptr)
	{
		delete[]player_arr;
		player_arr = nullptr;
	}
}
int monopoly::get_owner(int blockid)
{
	Property* dwncast = dynamic_cast<Property*>(board[blockid]);
	return dwncast->get_ownerID();
}
string monopoly::give_budget(int player)
{
	string ss;
	int money = player_arr[player]->get_cash();
	stringstream sss;
	sss << money;
	sss >> ss;
	return ss;
}
int monopoly::type_ofblock(int blockid)
{
	return board[blockid]->get_blocktype();

}
bool monopoly::get_emptyblocktype(int blockid, int type)
{
	empty_block* dwncast = dynamic_cast<empty_block*>(board[blockid]);
	return dwncast->get_state(type);
}
int monopoly::get_propertyblocktype(int blockid)
{
	Property* dwncast = dynamic_cast<Property*>(board[blockid]);
	return dwncast->type;
}
int monopoly::get_treasureblocktype(int blockid)
{
	treasure* dwncast = dynamic_cast<treasure*>(board[blockid]);
	return dwncast->type;
}
void monopoly::set_numOfPlayers(int players)
{
	no_of_players =  players;
}
int monopoly::get_numOfPlayers()
{
	return no_of_players;
}
bool monopoly::check_win()
{
	return win;
}
int monopoly::get_currentplayer()
{
	return current_player;
}
void monopoly::set_currentplayer(int i)
{
	current_player = i;
}
void monopoly::gotojail(int player_no)
{
		player_arr[player_no]->set_jail(true);
		player_arr[player_no]->set_position(10);
}
void monopoly::buyproperty(int players, int blockid)
{
	double price;
	Property* p = dynamic_cast<Property*>(board[blockid]);
	price = p->get_price();
	double budget = player_arr[players]->get_cash();
	if (budget >= price)
	{
		Property* p = b.sell_property(blockid);
		player_arr[players]->set_cash(player_arr[players]->get_cash() - price);
		player_arr[players]->add_properties(p);
		p->set_owner(1);
		p->set_ownerID(players);
		b.add_cash(price);
		cards[get_propertyIndex(blockid)]->set_owner(players);
	}
	
}
string monopoly::rentOf_Property(int blockid)
{
	Property* dwncast = dynamic_cast<Property*>(board[blockid]);
	double money= dwncast->get_rent();
	stringstream ss;
	ss << money;
	string s;
	ss >> s;
	return s;
}
string monopoly::priceOf_property(int blockid)
{
	Property* dwncast = dynamic_cast<Property*>(board[blockid]);
	double money= dwncast->get_price();
	stringstream ss;
	ss<<money;
	string s;
	ss >> s;
	return s;
}
void monopoly::pay_rent(int players, int blockid)
{
	double price;
	Property* dwncast = dynamic_cast<Property*>(board[blockid]);
	price = dwncast->get_rent();
	player_arr[players]->reduce_cash(price);
	int ownby = dwncast->get_ownerID();
	player_arr[ownby]->add_cash(price);
}
int monopoly::roll_dice(int player_no)
{
	
	int dice = rand() % 6 + 1;
	if (player_arr[player_no]->get_jail()== 0)
	{
		player_arr[player_no]->set_position(player_arr[player_no]->get_position() + dice);
		if (player_arr[player_no]->get_position() > 39)
		{
			player_arr[player_no]->set_position(player_arr[player_no]->get_position() - 39);
			player_arr[player_no]->add_cash(500);
		}

		return dice;
	}
	else return 0;
}
bool monopoly::add_housse(int player_no, int blockid)
{
	residential* dwncast = dynamic_cast<residential*>(board[blockid]);
	double budget;
    budget=	player_arr[player_no]->get_cash();
	char* family_name;
	family_name=dwncast->get_group();
	//check if all properties of a group are owned
	bool check = true;
	for (int i = 0; i < 40; i++)
	{
		if (board[i]->get_blocktype() == 2)
		{
			Property* dwncast2 = dynamic_cast<Property*>(board[i]);
			if (dwncast2->type == 1)
			{
				residential* dwncast3 = dynamic_cast<residential*>(board[i]);
				char* name=dwncast3->get_group();
				if (strcmp(name, family_name) == 1)
				{
					if (dwncast2->get_owner() != 1 || dwncast2->get_ownerID() != player_no)
					{
						check = false;
					}
				}

			}
		
		}
		if (check == false)
		{
			return false;
		}
	}
	//checking if all the OTHER groupmembers have same or less amount of properties
	int pcounter = 0;
	int propertiesarr[4];
	if (check == true)
	{	
		for (int i = 0; i < 40; i++)
		{
			if (board[i]->get_blocktype() == 2)
			{
				Property* dwncast2 = dynamic_cast<Property*>(board[i]);
				if (dwncast2->type == 1)
				{
					residential* dwncast3 = dynamic_cast<residential*>(board[i]);
					char* name = dwncast3->get_group();
					if (strcmp(name ,family_name)==1)
					{
						
						if (i != blockid)
						{
							propertiesarr[pcounter] = i;
							pcounter++;
						}
					}

				}

			}
			
		}
	}
	int no_ofhouses[4];
	for (int i = 0; i < pcounter; i++)
	{
		residential* dwncast4 = dynamic_cast<residential*>(board[propertiesarr[i]]);
		no_ofhouses[i]=dwncast4->get_house();
	}
	residential* dwncast5 = dynamic_cast<residential*>(board[blockid]);
	bool check2 = false;
	for (int i = 0; i < pcounter; i++)
	{
		if (dwncast5->get_house() <= no_ofhouses[i])
		{
			check2 = true;
		}
		else
		{
			check2 = false;
			break;
		}

	
	}
	Property* dwncast7 = dynamic_cast<Property*>(board[blockid]);
	if (check2 == true && dwncast7->get_mortgage() == false && budget > 100)
	{
		dwncast->set_house(dwncast->get_house() + 1);
		player_arr[player_no]->reduce_cash(100);
		b.add_cash(100);
		int h_ = dwncast->get_house();
		cards[get_propertyIndex(blockid)]->set_house(h_);
		return true;
	}
	else return false;
}
bool monopoly::add_hotel(int player_no, int blockid)
{
	residential* dwncast = dynamic_cast<residential*>(board[blockid]);
	char* family_name;
	family_name = dwncast->get_group();
	//check if all properties of a group are owned
	bool check = true;
	for (int i = 0; i < 40; i++)
	{
		if (board[i]->get_blocktype() == 2)
		{
			Property* dwncast2 = dynamic_cast<Property*>(board[i]);
			if (dwncast2->type == 1)
			{
				residential* dwncast3 = dynamic_cast<residential*>(board[i]);
				char* name = dwncast3->get_group();
				if (name == family_name)
				{
					if (dwncast2->get_owner() != 1 || dwncast2->get_ownerID() != player_no)
					{
						check = false;
					}
				}

			}

		}
		if (check == false)
		{
			return false;
		}
	}
	//checking if all the OTHER groupmembers have same or less amount of properties
	int pcounter = 0;
	int propertiesarr[4];
	if ( check==true)
	{
		for (int i = 0; i < 40; i++)
		{
			if (board[i]->get_blocktype() == 2)
			{
				Property* dwncast2 = dynamic_cast<Property*>(board[i]);
				if (dwncast2->type == 1)
				{
					residential* dwncast3 = dynamic_cast<residential*>(board[i]);
					char* name = dwncast3->get_group();
					if (name == family_name)
					{

						if (i != blockid)
						{
							propertiesarr[pcounter] = i;
							pcounter++;
						}
					}

				}

			}

		}
	}
	int no_ofhouses[4];
	for (int i = 0; i < pcounter; i++)
	{
		residential* dwncast4 = dynamic_cast<residential*>(board[propertiesarr[i]]);
		no_ofhouses[i] = dwncast4->get_hotel();
	}
	residential* dwncast5 = dynamic_cast<residential*>(board[blockid]);
	bool check2 = false;
	for (int i = 0; i < pcounter; i++)
	{
		if (dwncast5->get_hotel() <= no_ofhouses[i])
		{
			check2 = true;
		}
		else
		{
			check2 = false;
			break;
		}


	}
	Property* dwncast7 = dynamic_cast<Property*>(board[blockid]);
	if (check2 == true && dwncast7->get_mortgage() == false)
	{
		if (dwncast->get_house() >= 4 && dwncast->get_shops() >= 2)
		{
			dwncast->set_hotel(dwncast->get_hotel() + 1);
			dwncast->set_house(dwncast->get_house() - 4);
			dwncast->set_shops(dwncast->get_shops() - 2);
			//increase rent
			return true;
		}
		else return false;
		
	}
	else return false;
}
bool monopoly::add_shop(int player_no, int blockid, int option)//1-> From houses 2->from budget
{
	residential* dwncast = dynamic_cast<residential*>(board[blockid]);
	char* family_name;
	family_name = dwncast->get_group();
	//check if all properties of a group are owned
	bool check = true;
	for (int i = 0; i < 40; i++)
	{
		if (board[i]->get_blocktype() == 2)
		{
			Property* dwncast2 = dynamic_cast<Property*>(board[i]);
			if (dwncast2->type == 1)
			{
				residential* dwncast3 = dynamic_cast<residential*>(board[i]);
				char* name = dwncast3->get_group();
				if (name == family_name)
				{
					if (dwncast2->get_owner() != 1 || dwncast2->get_ownerID() != player_no)
					{
						check = false;
					}
				}

			}

		}
		if (check == false)
			return false;
	}
	//checking if all the OTHER groupmembers have same or less amount of properties
	int pcounter = 0;
	int propertiesarr[4];
	if (check==true)
	{
		for (int i = 0; i < 40; i++)
		{
			if (board[i]->get_blocktype() == 2)
			{
				Property* dwncast2 = dynamic_cast<Property*>(board[i]);
				if (dwncast2->type == 1)
				{
					residential* dwncast3 = dynamic_cast<residential*>(board[i]);
					char* name = dwncast3->get_group();
					if (name == family_name)
					{

						if (i != blockid)
						{
							propertiesarr[pcounter] = i;
							pcounter++;
						}
					}

				}

			}

		}
	}
	int no_ofhouses[4];
	for (int i = 0; i < pcounter; i++)
	{
		residential* dwncast4 = dynamic_cast<residential*>(board[propertiesarr[i]]);
		no_ofhouses[i] = dwncast4->get_shops();
	}
	residential* dwncast5 = dynamic_cast<residential*>(board[blockid]);
	bool check2 = false;
	for (int i = 0; i < pcounter; i++)
	{
		if (dwncast5->get_shops() <= no_ofhouses[i])
		{
			check2 = true;
		}
		else
		{
			check2 = false;
			break;
		}


	}
	Property* dwncast7 = dynamic_cast<Property*>(board[blockid]);
	if (option == 1)
	{
		if (check2 == true && dwncast7->get_mortgage() == false)
		{
			if (dwncast->get_house() >= 2)
			{
				dwncast->set_house(dwncast->get_house() - 2);
				dwncast->set_shops(dwncast->get_shops() + 1);
				//increase rent
				return true;
			}

		}
		else return false;
	}
	else if (option == 2)
	{
		double budget;
		budget = player_arr[player_no]->get_cash();
		if (check2 == true && dwncast7->get_mortgage() == false)
		{
			if (budget>=300)
			{
			    dwncast->set_shops(dwncast->get_shops() + 1);
				player_arr[player_no]->reduce_cash(300);
				//increase rent
				//pay cost to bank
				return true;
			}
			else return false;

		}
		else return false;
	}
}
bool monopoly::add_electricity(int player_no, int blockid)
{
	residential* dwncast = dynamic_cast<residential*>(board[blockid]);
	char* family_name;
	family_name = dwncast->get_group();
	//check if all properties of a group are owned
	bool check = true;
	for (int i = 0; i < 40; i++)
	{
		if (board[i]->get_blocktype() == 2)
		{
			Property* dwncast2 = dynamic_cast<Property*>(board[i]);
			if (dwncast2->type == 1)
			{
				residential* dwncast3 = dynamic_cast<residential*>(board[i]);
				char* name = dwncast3->get_group();
				if (name == family_name)
				{
					if (dwncast2->get_owner() != 1 || dwncast2->get_ownerID() != player_no)
					{
						check = false;
					}
				}

			}

		}
		if (check == false)
			return false;
	}
	double budget;
	budget = player_arr[player_no]->get_cash();
	if (check == true && dwncast->get_electricity() == false && budget>=50)
	{
		dwncast->set_electricity(true);
		player_arr[player_no]->reduce_cash(50);
		//increae rent
		//pay bank
		return true;
	}
	else return false;
}
bool monopoly::add_wifi(int player_no, int blockid)
{
	residential* dwncast = dynamic_cast<residential*>(board[blockid]);
	char* family_name;
	family_name = dwncast->get_group();
	//check if all properties of a group are owned
	bool check = true;
	for (int i = 0; i < 40; i++)
	{
		if (board[i]->get_blocktype() == 2)
		{
			Property* dwncast2 = dynamic_cast<Property*>(board[i]);
			if (dwncast2->type == 1)
			{
				residential* dwncast3 = dynamic_cast<residential*>(board[i]);
				char* name = dwncast3->get_group();
				if (name == family_name)
				{
					if (dwncast2->get_owner() != 1 || dwncast2->get_ownerID() != player_no)
					{
						check = false;
					}
				}

			}

		}
		if (check == false)
			return false;
	}
	double budget;
	budget = player_arr[player_no]->get_cash();
	if (check == true && dwncast->get_wifi() == false && budget >= 30)
	{
		dwncast->set_wifi(true);
		player_arr[player_no]->reduce_cash(30);
		//increae rent
		//pay bank
		return true;
	}
	else return false;
}
bool monopoly::add_gas(int player_no, int blockid)
{
	residential* dwncast = dynamic_cast<residential*>(board[blockid]);
	char* family_name;
	family_name = dwncast->get_group();
	//check if all properties of a group are owned
	bool check = true;
	for (int i = 0; i < 40; i++)
	{
		if (board[i]->get_blocktype() == 2)
		{
			Property* dwncast2 = dynamic_cast<Property*>(board[i]);
			if (dwncast2->type == 1)
			{
				residential* dwncast3 = dynamic_cast<residential*>(board[i]);
				char* name = dwncast3->get_group();
				if (name == family_name)
				{
					if (dwncast2->get_owner() != 1 || dwncast2->get_ownerID() != player_no)
					{
						check = false;
					}
				}

			}

		}
		if (check == false)
			return false;
	}
	double budget;
	budget = player_arr[player_no]->get_cash();
	if (check == true && dwncast->get_gas() == false && budget >= 50)
	{
		dwncast->set_gas(true);
		player_arr[player_no]->reduce_cash(50);
		//increae rent
		//pay bank
		return true;
	}
	else return false;
}
bool monopoly::tax_collection(int player_no, int blockid)
{
	tax_block* dwncast = dynamic_cast<tax_block*>(board[blockid]);
	double tax = dwncast->get_tax();
	double budget=player_arr[player_no]->get_cash();
	if (budget >= tax) {
		player_arr[player_no]->reduce_cash(tax);
		//pay to bank
		return true;
	}
	else return false;
}
int monopoly::position_ofPlayer(int player)
{
	return player_arr[player]->get_position();
}
int monopoly:: get_propertycount(int player_id)
{
	return player_arr[player_id]->get_porperty_count();
}
bool monopoly:: is_propertyMortgaged(int blockid)
{
	Property* dwncast = dynamic_cast<Property*> (board[blockid]);
	return dwncast->get_mortgage();
}
bool monopoly::mortgage_property(int block_id, int player_id)
{
	Property* dwncast = dynamic_cast<Property*> (board[block_id]);
	dwncast->set_mortgaged(1);
    double half_price = dwncast->get_price() / 2;
	player_arr[player_id]->add_cash(half_price);
	b.reduce_cash(half_price);
	cards[get_propertyIndex(block_id)]->set_mortgage(1);
	return true;
	
}
bool monopoly::reedem_property(int block_id, int player_id)
{
	Property* dwncast = dynamic_cast<Property*> (board[block_id]);
	double half_price = dwncast->get_price() / 2;
	double reedem_price = half_price + ((dwncast->get_price() *0.2));
	if (player_arr[player_id]->get_cash()>reedem_price)
	{
		dwncast->set_mortgaged(0);
		player_arr[player_id]->reduce_cash(reedem_price);
		b.add_cash(reedem_price);
		cards[get_propertyIndex(block_id)]->set_mortgage(0);
	}
	else
	{
		cout << "Not Sufficient amount to reedem property" << endl;
		return false;
	}
}
bool monopoly::is_propertyOwned(int blockid)
{
	Property* dwncast = dynamic_cast<Property*>(board[blockid]);
	return dwncast->get_owner();
}
string monopoly::give_blockname(int blockid)
{
	return board[blockid]->give_sname();
}
string monopoly::give_tax(int blockid)
{
	tax_block* dwncast = dynamic_cast<tax_block*>(board[blockid]);
	int money = dwncast->get_tax();
	stringstream ss;
	ss << money;
	string s;
	ss >> s;
	dwncast->set_tax(0);
	return s;
}
bool monopoly::deduct_landtax(int player_id)
{
	
	int player = player_id;
	int tax_=0;
 	for (int i = 0; i < 39; i++)
	{
		if (board[i]->get_blocktype() == 2)
		{
			double twenty = 20;
			double hundred = 100;
			Property* dwncast = dynamic_cast<Property*>(board[i]);
			if(dwncast->get_ownerID()==player_id)
			{
				int p = dwncast->get_price();
				tax_ = tax_ + p  * (twenty/hundred);
			}
				
		}
	
	}
	tax_block* dwncast = dynamic_cast<tax_block*>(board[9]);
	dwncast->set_tax(tax_);
	/*if (player_arr[player_id]->get_cash() >= tax_)
	{
		player_arr[player_id]->reduce_cash(tax_);
		b.add_cash(tax_);
		return true;
	}*/
	player_arr[player_id]->reduce_cash(tax_);
	b.add_cash(tax_);
	return true;
	//return false;
	
	
}
bool monopoly::deduct_propertytax(int player_id)
{
	double tax = 0;
	for (int i = 0; i < 39; i++)
	{
		if (board[i]->get_blocktype() == 2)
		{
			double twenty = 20;
			double hundred = 100;
			double thirty = 30;
			Property* dwncast = dynamic_cast<Property*>(board[i]);
			if (dwncast->get_ownerID() == player_id)
			{
				tax = tax + dwncast->get_price() * (twenty/hundred);
				if (dwncast->type == 1)
				{
					residential* dwncast2 = dynamic_cast<residential*>(board[i]);
					tax = tax + dwncast2->get_house() * (twenty / hundred);
					tax = tax + dwncast2->get_hotel() * (thirty / hundred);
					tax = tax + dwncast2->get_shops() * (thirty / hundred);
				}
			}
			
		}

	}
	tax_block* dwncast = dynamic_cast<tax_block*>(board[26]);
	dwncast->set_tax(tax);
	/*if (player_arr[player_id]->get_cash() >= tax)
	{
		player_arr[player_id]->reduce_cash(tax);
		b.add_cash(tax);
		return true;
	}
	return false;*/
	player_arr[player_id]->reduce_cash(tax);
	b.add_cash(tax);
	return true;
}
int monopoly::get_house(int blockid)
{
	residential* dwncast = dynamic_cast<residential*>(board[blockid]);
	return dwncast->get_house();


}
int monopoly::get_shop(int blockid)
{
	residential* dwncast = dynamic_cast<residential*>(board[blockid]);
	return dwncast->get_shops();


}
int monopoly::get_hotel(int blockid)
{
	residential* dwncast = dynamic_cast<residential*>(board[blockid]);
	return dwncast->get_hotel();


}
bool monopoly::get_elec(int blockid)
{
	residential* dwncast = dynamic_cast<residential*>(board[blockid]);
	return dwncast->get_electricity();


}
bool monopoly::get_wifi(int blockid)
{
	residential* dwncast = dynamic_cast<residential*>(board[blockid]);
	return dwncast->get_wifi();


}
bool monopoly::get_gas(int blockid)
{
	residential* dwncast = dynamic_cast<residential*>(board[blockid]);
	return dwncast->get_gas();


}
void monopoly::set_cardOwner(int cardid, int player)
{
	cards[get_propertyIndex(cardid)]->set_owner(player);

}
int monopoly::get_propertyIndex(int id)
{
	if (id == 0)
	{
		return 27;
	}
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
	if (id == 40)
		return 0;
}
void monopoly::draw_cards(sf::RenderWindow &window,int& cardid, int x, int y)
{
	int current_index =cardid;
	
	cards[current_index]->draw(window, x+220, y);
	current_index++;
	cards[current_index ]->draw(window, x + 440, y);
	current_index++;
	cards[current_index ]->draw(window, x + 660, y);
	current_index++;
	
}
bool monopoly::check_injail(int player)
{
	return player_arr[player]->get_jail();

}
int monopoly::chance_action(int p_id, int block_id, int dice)
{
	treasure* downcast_ = dynamic_cast<treasure*>(board[block_id]);
	downcast_->increment_chance_count();
	if (block_id == 8)
	{
		treasure* downcast2 = dynamic_cast<treasure*>(board[23]);
		downcast2->increment_chance_count();
		treasure* downcast3 = dynamic_cast<treasure*>(board[36]);
		downcast3->increment_chance_count();
	}
	if (block_id == 23)
	{
		treasure* downcast2 = dynamic_cast<treasure*>(board[8]);
		downcast2->increment_chance_count();
		treasure* downcast3 = dynamic_cast<treasure*>(board[36]);
		downcast3->increment_chance_count();
	}
	if (block_id == 36)
	{
		treasure* downcast2 = dynamic_cast<treasure*>(board[23]);
		downcast2->increment_chance_count();
		treasure* downcast3 = dynamic_cast<treasure*>(board[8]);
		downcast3->increment_chance_count();
	}
	int card_number = downcast_->get_chance_count();
	if (card_number > 15)
	{
		downcast_->set_chance_count(0);
	}
	if (card_number == 1)
	{
		if (player_arr[p_id]->get_cash() >= 300)
		{
			player_arr[p_id]->add_cash(300);
			b.reduce_cash(300);
		}

		player_arr[p_id]->set_position(0);
		return card_number;
	}
	else if (card_number == 2)
	{
		player_arr[p_id]->set_position(31);
		return card_number;
	}
	else if (card_number == 3)
	{
		int utility_id = 0;
		int i = block_id;
		while(1)
		{
			if (i == 3)
			{
				utility_id = i;
				break;
			}
			else if (i == 5)
			{
				utility_id = i;
				break;
			}
			else if (i == 21)
			{
				utility_id = i;
				break;
			}
			else if (i == 24)
			{
				utility_id = i;
				break;
			}
			i++;
			if (i == 40)
			{
				i = 0;
			}
		}
		player_arr[p_id]->set_position(utility_id);
		non_residential* downcast2 = dynamic_cast<non_residential*>(board[utility_id]);
		if (downcast2->get_owner() == true)
		{
			double amount = 5 * dice;
			if (player_arr[p_id]->get_cash() > amount)
			{
				player_arr[p_id]->reduce_cash(amount);
				int id=downcast2->get_ownerID();
				player_arr[id]->add_cash(amount);
				/*for (int i = 0; i < no_of_players; i++)
				{
					if (player_arr[i]->check_property(utility_id) == true)
					{
						player_arr[i]->set_cash(amount);
					}
				}*/
			}

		}
		else
		{
			buyproperty(p_id, utility_id);
		}
		return card_number;
	}
	else if (card_number == 4)
	{

		int stationId = 0;
		int i = block_id;
		while(1)
		{
			if (i == 12)
			{
				stationId = i;
				break;
			}
			else if (i == 15)
			{
				stationId = i;
				break;
			}
			else if (i == 22)
			{
				stationId = i;
				break;
			}
			else if (i == 37)
			{
				stationId = i;
				break;
			}
			i++;
			if (i == 40)
			{
				i = 0;
			}
		}
		player_arr[p_id]->set_position(stationId);
		non_residential* downcast21 = dynamic_cast<non_residential*>(board[stationId]);
		if (downcast21->get_owner() == true)
		{
			double amount = 2 * downcast21->get_price();
			if (player_arr[p_id]->get_cash() > amount)
			{
				player_arr[p_id]->reduce_cash(amount);
				player_arr[downcast21->get_ownerID()]->add_cash(amount);
				/*for (int i = 0; i < no_of_players; i++)
				{
					if (player_arr[i]->check_property(stationId) == true)
					{
						player_arr[i]->set_cash(amount);
					}
				}*/
			}
		}
		else
		{
			buyproperty(p_id, stationId);
		}
		return card_number;
	}
	else if (card_number == 5)
	{
		int stationId = 0;
		int i = block_id;
		while(1)
		{
			if (i == 12)
			{
				stationId = i;
				break;
			}
			else if (i == 15)
			{
				stationId = i;
				break;
			}
			else if (i == 22)
			{
				stationId = i;
				break;
			}
			else if (i == 37)
			{
				stationId = i;
				break;
			}
			i++;
			if (i == 40)
			{
				i = 0;
			}
		}
		player_arr[p_id]->set_position(stationId);
		non_residential* downcast2 = dynamic_cast<non_residential*>(board[stationId]);
		if (downcast2->get_owner() == true)
		{
			double amount = 2 * downcast2->get_price();
			if (player_arr[p_id]->get_cash() > amount)
			{
				player_arr[p_id]->reduce_cash(amount);
				player_arr[downcast2->get_ownerID()]->add_cash(amount);
				/*for (int i = 0; i < no_of_players; i++)
				{
					if (player_arr[i]->check_property(stationId) == true)
					{
						player_arr[i]->set_cash(amount);
					}
				}*/
			}
		}
		else
		{
			buyproperty(p_id, stationId);
		}
		return card_number;
	}
	else if (card_number == 6)
	{
		if (block_id > 16 && block_id < 40)
		{
		
				player_arr[p_id]->add_cash(300);
				b.reduce_cash(300);
			
		}
		player_arr[p_id]->set_position(16);
		return card_number;
	}
	else if (card_number == 7)
	{
		if (player_arr[p_id]->get_cash() >= 100)
		{
			player_arr[p_id]->add_cash(100);
			b.reduce_cash(100);
		}
		return card_number;
	}
	else if (card_number == 8)
	{
		if (player_arr[p_id]->get_jail() == false)
		{
			player_arr[p_id]->add_jail_cards();
			//if you want to sale ask user use any bool variabe # flag
			/*if (flag == true)
			{
				player_arr[p_id]->set_cash(500);
				player_arr[p_id]->remove_jail_cards();
			}*/
		}
		else
		{
			player_arr[p_id]->remove_jail_cards();
			player_arr[p_id]->set_jail(false);
		}
		return card_number;
	}
	else if (card_number == 9)
	{
		player_arr[p_id]->set_position(player_arr[p_id]->get_position() - 4);
		return card_number;
	}
	else if (card_number == 10)
	{
	int total_properties = 0;
	for (int i = 0; i < 39; i++)
	{
		if (board[i]->get_blocktype() == 2)
		{
			Property* dwncast10 = dynamic_cast<Property*>(board[i]);
			if (dwncast10->get_ownerID() == p_id)
			{
				total_properties++;
			}
		}
	}
	int cost = 100 * total_properties;
	if (player_arr[p_id]->get_cash() >= cost)
	{
		player_arr[p_id]->reduce_cash(cost);
		b.add_cash(cost);
	}

	return card_number;
		return card_number;
	}
	else if (card_number == 11)
	{
		if (player_arr[p_id]->get_cash() >= 25)
		{
			player_arr[p_id]->reduce_cash(25);
			b.add_cash(25);
		}

		return card_number;
	}
	else if (card_number == 12)
	{
		for (int i = 0; i < no_of_players; i++)
		{
			if (i != p_id)
			{
				if (player_arr[p_id]->get_cash() >= 25)
				{
					player_arr[p_id]->reduce_cash(25);
					player_arr[i]->add_cash(25);
				}

			}
		}
		return card_number;

	}
	else if (card_number == 13)
	{
		if (player_arr[p_id]->get_cash() >= 150)
		{
			player_arr[p_id]->add_cash(150);
			b.reduce_cash(150);

		}
		return card_number;
	}
	else if (card_number == 14)
	{
		player_arr[p_id]->set_position(12);
		return card_number;
	}
	else if (card_number == 15)
	{
		player_arr[p_id]->set_position(37);
		return card_number;
	}
}
int monopoly::chest_action(int p_id, int block_id)
{
	treasure* downcast_ = dynamic_cast<treasure*>(board[block_id]);
	downcast_->increment_chest_count();
	if (block_id == 17)
	{
		treasure* downcast2 = dynamic_cast<treasure*>(board[28]);
		downcast2->increment_chest_count();
		treasure* downcast3 = dynamic_cast<treasure*>(board[33]);
		downcast3->increment_chest_count();
	}
	if (block_id == 28)
	{
		treasure* downcast2 = dynamic_cast<treasure*>(board[17]);
		downcast2->increment_chest_count();
		treasure* downcast3 = dynamic_cast<treasure*>(board[33]);
		downcast3->increment_chest_count();
	}
	if (block_id == 33)
	{
		treasure* downcast2 = dynamic_cast<treasure*>(board[28]);
		downcast2->increment_chest_count();
		treasure* downcast3 = dynamic_cast<treasure*>(board[17]);
		downcast3->increment_chest_count();
	}
	int card_number = downcast_->get_chest_count();
	if (card_number > 15)
	{
		downcast_->set_chest_count(0);
	}
	if (card_number == 1)
	{
		if (player_arr[p_id]->get_cash() >= 400)
		{
			player_arr[p_id]->add_cash(400);
			b.reduce_cash(400);
		}

		player_arr[p_id]->set_position(0);
		return card_number;

	}
	else if (card_number == 2)
	{
		if (player_arr[p_id]->get_cash() >= 200)
		{
			player_arr[p_id]->add_cash(200);
			b.reduce_cash(200);
		}

		return card_number;
	}
	else if (card_number == 3)
	{
		if (player_arr[p_id]->get_cash() >= 200)
		{
			player_arr[p_id]->reduce_cash(200);
			b.add_cash(200);
		}

		return card_number;
	}
	else if (card_number == 4)
	{
		if (player_arr[p_id]->get_cash() >= 50)
		{
			player_arr[p_id]->add_cash(50);
			b.reduce_cash(50);
		}

		return card_number;
	}
	else if (card_number == 5)
	{
		if (player_arr[p_id]->get_jail() == false)
		{
			player_arr[p_id]->add_jail_cards();
			//if you want to sale ask user use any bool variabe # flag
			/*if (flag == true)
			{
				player_arr[p_id]->set_cash(500);
				player_arr[p_id]->remove_jail_cards();
			}*/
		}
		else
		{
			player_arr[p_id]->remove_jail_cards();
			player_arr[p_id]->set_jail(false);
		}
		return card_number;
	}
	else if (card_number == 6)
	{
		if (player_arr[p_id]->get_cash() >= 150)
		{
			player_arr[p_id]->add_cash(150);
			b.reduce_cash(150);
		}
		return card_number;
	}
	else if (card_number == 7)
	{
		if (player_arr[p_id]->get_cash() >= 200)
		{
			player_arr[p_id]->add_cash(200);
			b.reduce_cash(200);
		}

		return card_number;
	}
	else if (card_number == 8)
	{
		if (player_arr[p_id]->get_cash() >= 100)
		{
			player_arr[p_id]->reduce_cash(100);
			b.add_cash(100);
		}

		return card_number;
	}
	else if (card_number == 9)
	{
		if (player_arr[p_id]->get_cash() >= 200)
		{
			player_arr[p_id]->reduce_cash(200);
			b.add_cash(200);
		}

		return card_number;
	}
	else if (card_number == 10)
	{
		if (player_arr[p_id]->get_cash() >= 50)
		{
			player_arr[p_id]->add_cash(50);
			b.reduce_cash(50);
		}
		return card_number;

	}
	else if (card_number == 11)
	{
		int total_properties=0;
		for (int i = 0; i < 39; i++)
		{
			if (board[i]->get_blocktype() == 2)
			{
				Property* dwncast10 = dynamic_cast<Property*>(board[i]);
				if (dwncast10->get_ownerID() == p_id)
				{
					total_properties++;
				}
			}
		}
		int cost = 100 * total_properties;
		if (player_arr[p_id]->get_cash() >= cost)
		{
			player_arr[p_id]->reduce_cash(cost);
			b.add_cash(cost);
		}

		return card_number;
	}
	else if (card_number == 12)
	{
		if (player_arr[p_id]->get_cash() >= 300)
		{
			player_arr[p_id]->add_cash(300);
			b.reduce_cash(300);
		}

		return card_number;
	}
	else if (card_number == 13)
	{
		if (player_arr[p_id]->get_cash() >= 50)
		{
			player_arr[p_id]->reduce_cash(50);
			b.add_cash(50);
		}
		return card_number;
	}
	else if (card_number == 14)
	{
		if (player_arr[p_id]->get_cash() >= 80)
		{
			player_arr[p_id]->reduce_cash(80);
			b.add_cash(80);
		}

		return card_number;

	}
	else if (card_number == 15)
	{
		if (player_arr[p_id]->get_cash() >= 50)
		{
			player_arr[p_id]->reduce_cash(50);
			b.add_cash(50);
		}
		return card_number;
	}
}
string monopoly:: getbankcash()
{
	stringstream ss;
	ss << b.get_cash();
	string s;
	ss >> s;
	return s;

}
int monopoly::get_jailcards(int player_id)
{
	return player_arr[player_id]->get_jailcards();

}
void monopoly::release_fromjail(int player)
{
	player_arr[player]->set_jail(0);
}
void monopoly::remove_jailcard(int player)
{
	player_arr[player]->remove_jail_cards();
}
void monopoly::sell_jail(int p_id)
{
	player_arr[p_id]->add_cash(500);
	b.reduce_cash(500);
	player_arr[p_id]->remove_jail_cards();
}
