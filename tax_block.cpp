#include"block.h"
#include"tax_block.h"
tax_block::tax_block()
{
	associated_tax = 0;
}
tax_block::tax_block(int id, const char* name, double tax) :block(id, name,4)
{
	associated_tax = tax;
}
tax_block::~tax_block()
{

}
void tax_block::set_tax(int tax)
{
	associated_tax = tax;
}
double tax_block::get_tax()
{
	return associated_tax;
}