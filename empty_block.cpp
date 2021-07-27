#include"block.h"
#include"empty_block.h"

empty_block::empty_block()
{
	go = false;
	jail = false;
	goto_jail = false;
	park = false;

}
empty_block::empty_block(int id, const char* name, bool state, int type) :block(id, name,1)
{
	if (type == 1)
	{
		go = state;
	    jail = !state;
		goto_jail = !state;
		park = !state;
	}
	else if (type == 2)
	{
		jail = state;
		go = !state;
		goto_jail = !state;
		park = !state;
	}
	else if (type == 4)
	{
		goto_jail = state;
		go = !state;
		jail = !state;
		park = !state;
	}
	else if (type == 3)
	{
		park = state;
		go = !state;
		jail = !state;
		goto_jail = !state;
	}
}
empty_block::~empty_block()
{

}
void empty_block::set_state(int type, bool state)
{
	if (type == 1)
	{
		go = state;
	}
	else if (type == 2)
	{
		jail = state;
	}
	else if (type == 3)
	{
		park = state;
	}
	else if (type == 4)
	{
		
		goto_jail = state;
	}
}
bool empty_block::get_state(int type)
{
	if (type == 1)
	{
		return go ;
	}
	else if (type == 2)
	{
		return jail;
	}
	else if (type == 3)
	{
		return park;
	}
	else if (type == 4)
	{
		
		return goto_jail;
	}
}
