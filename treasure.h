#pragma once
#include"block.h"
class treasure:public block
{
	int chance_count;
	int chest_count;
public:
	int type;//0->chance 1->chest
	treasure();
	treasure(int, const char*);
	void chance_read();
	void chest_read();
	void make_polymorphic() {
		return;
	}
	int get_chance_count()
	{
		return chance_count;
	}

	int get_chest_count()
	{
		return chest_count;
	}
	void increment_chance_count()
	{
		chance_count++;
	}
	void increment_chest_count()
	{
		chest_count++;
	}
	void set_chance_count(int count)
	{
		chance_count = count;
	}
	void set_chest_count(int count)
	{
		chest_count = count;
	}
};