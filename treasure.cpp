#include<iostream>
#include<fstream>
#include"Treasure.h"
using namespace std;
treasure::treasure()
{
	chest_count = 0;
	chance_count = 0;
}
treasure::treasure(int id, const char* name) :block(id, name,3)
{
	chest_count = 0;
	chance_count = 0;
}
void treasure::chance_read()
{
	ifstream fin;
	if (chance_count == 0)
	{
		fin.open("Chance.txt", std::ios_base::app);
	}
	if (fin.is_open())
	{
		char* temp = new char[120];
		fin.getline(temp, 120);
		chance_count++;
		cout << temp << endl;
		if (chance_count == 15)
		{
			chance_count = 0;
			fin.close();
		}
		delete[]temp;
	}
}
void treasure::chest_read()
{
	ifstream fin;
	if (chest_count == 0)
	{
		fin.open("CommunityChest.txt", std::ios_base::app);
	}
	if (fin.is_open())
	{
		char* temp = new char[120];
		fin.getline(temp, 120);
		chest_count++;
		cout << temp << endl;
		if (chest_count == 15)
		{
			chest_count = 0;
			fin.close();
		}
		delete[]temp;
	}
}