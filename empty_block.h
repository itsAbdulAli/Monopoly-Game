#pragma once
#include"block.h"
class empty_block :public block {
private:

	bool go;
	bool jail;
	bool goto_jail;
	bool park;
public:
	empty_block();
	empty_block(int , const char* , bool , int );//1-go 2-jail 3-gotojail 4-park
	void set_state(int , bool ); //1-go 2-jail 3-gotojail 4-park
	bool get_state(int ); //1-go 2-jail 3-gotojail 4-park
	~empty_block();
	void make_polymorphic()
	{
		return;
	}
};