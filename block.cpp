#include"block.h"
#include<iostream>
using namespace std;
block::block()
{
	block_type = 0;
	block_Id = 0;
	block_name = nullptr;
}
block::block(int id, const char* name, int bktyp=0)
{
	block_type = bktyp;
	block_Id = id;
	int s = strlen(name) + 1;
	block_name = new char[s];
	for (int i = 0; name[i] != '\0'; i++)
		block_name[i] = name[i];
	block_name[s - 1] = '\0';
}
block::  ~block()
{
	if (block_name != nullptr)
	{
		delete[] block_name;
		block_name = nullptr;
	}
}
int block::get_id()
{
	return block_Id;
}
char* block::get_name()
{
	return block_name;
}
void block::set_id(int id)
{
	block_Id = id;
}
void block::set_name(const char* name)
{
	int s = strlen(name) + 1;
	block_name = new char[s];
	for (int i = 0; name[i] != '\0'; i++)
		block_name[i] = name[i];
	block_name[s - 1] = '\0';
}
int block::get_blocktype()
{
	return block_type;
}
string block::give_sname()
{
	string name = block_name;
	return name;
}