#pragma once
#include"block.h"
class tax_block : public block
{
private:
	double associated_tax;
public:
	tax_block();
	tax_block(int id, const char* name, double tax);
	void set_tax(int tax);
	double get_tax();
	~tax_block();
	void make_polymorphic() {
		return;
	}
};