#pragma once
#include <iostream>
using namespace std;
class block {
private:
	int block_type; //1->empty 2->property 3->treasure 4->tax 
	int block_Id;
	char* block_name;
public:
	block();
	block(int , const char* , int);
	int get_id();
	char* get_name();
	void set_id(int );
	void set_name(const char* );
	virtual void make_polymorphic() {
		return;
	}
	int get_blocktype();
	string give_sname();
	virtual ~block();
};

