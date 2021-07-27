#pragma once
#include "Property.h"
class non_residential :public Property
{
	//how many non residential properties are owned by single player
	//by that it rents will be upgraded

public:
	non_residential();
	non_residential(int ,const char* ,int , int  , bool );
	~non_residential();

	
};