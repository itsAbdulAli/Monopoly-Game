#pragma once
#include<fstream>
#include<iostream>
#include"player.h"
#include"block.h"
#include"bank.h"
#include "empty_block.h"
#include"Property.h"
#include "non_residential.h"
#include"residential.h"
#include"tax_block.h"
#include"Treasure.h"
#include<sstream>  
#include"card.h"
class monopoly
{
	bank b;
	player** player_arr;
	block** board;
	int no_of_players;
	bool win;
	int current_player;
	int winner;
	card** cards;
public:
	monopoly();
	monopoly(int);
	~monopoly();
	void set_numOfPlayers(int);
	int get_numOfPlayers();
	bool check_win();
	int get_currentplayer();
	void set_currentplayer(int);
	void buyproperty(int, int);
	string rentOf_Property(int);
	string priceOf_property(int);
	void pay_rent(int, int);
	int roll_dice(int player_no);
	void gotojail(int player_no);
	bool add_housse(int, int);
	bool add_shop(int, int,int);
	bool add_hotel(int, int);
	bool add_wifi(int, int);
	bool add_electricity(int, int);
	bool add_gas(int, int);
	int get_shop(int);
	int get_house(int);
	int get_hotel(int);
	bool get_elec(int);
	bool get_gas(int);
	bool get_wifi(int);
	bool tax_collection(int, int);
	int position_ofPlayer(int);
	bool mortgage_property(int block_id, int player_id);
	bool reedem_property(int block_id, int player_id);
	int type_ofblock(int blockid);
	bool get_emptyblocktype(int blockid, int type);
	int get_propertyblocktype(int blockid);
	int get_treasureblocktype(int blockid);
	bool is_propertyOwned(int blockid);
	string give_budget(int player);
	string give_blockname(int blockid);
	string give_tax(int blockid);
	bool deduct_landtax(int player_id);
    bool deduct_propertytax(int player_id);
	int get_owner(int blockid);
	void set_cardOwner(int card , int player);
	int get_propertyIndex(int);
	void draw_cards(sf::RenderWindow& window, int& id, int x, int y);
	bool check_injail(int player);
	int get_propertycount(int player_id);
	bool is_propertyMortgaged(int blockid);
	int chest_action(int p_id, int block_id);
	int chance_action(int p_id, int block_id, int dice);
	string getbankcash();
	int get_jailcards(int player);
	void release_fromjail(int player);
	void remove_jailcard(int player);
	void pay_yourrelease(int player)
	{
		player_arr[player]->reduce_cash(400);
		player_arr[player]->set_jail(0);
	}
	void decrement_jail_interval(int player)
	{
		player_arr[player]->decrement_jailinterval();
	}
	void reset_jail_interval(int player)
	{
		player_arr[player]->reset_jailinterval();
	}
	void set_jail_interval(int player)
	{
		player_arr[player]->set_jailinterval();
	}
	int get_jail_interval(int player)
	{
		return player_arr[player]->get_interval();
	}
	void sell_jail(int p_id);
	bool is_bankrupt(int player)
	{
		bool flag=true;
		if (player_arr[player]->get_cash() <= 100)
		{
			for (int i = 0; i < 40; i++)
			{
				if (board[i]->get_blocktype() == 2)
				{
				
					Property* downcast = dynamic_cast<Property*>(board[i]);
					if (downcast->get_ownerID() == player)
					{
						if (downcast->get_mortgage() == false)
						{
						  flag  = false;
						  break;
						}
					}
				}
			}
			return flag;

		}
		else return false;
	}
	void action_onbankrupt(int player)
	{
		player_arr[player]->set_bankrupcy(1);
	}
	
};
