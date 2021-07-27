#include "non_residential.h"
non_residential::non_residential()
{
}

non_residential::non_residential(int id,const char* name,int price,int rent, bool mortgaged) : Property(id,name,price,rent,mortgaged,0)
{
}


non_residential::~non_residential()
{
}