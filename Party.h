#pragma once
#include <vector>
#include "MP.h"

class Party
{
private:
	//std::string _name; ?????
	int _number_of_MPs,_support;
	int number_of_MPs(int, float);//in real numbers 5.9...
	std::vector<MP> _vec_of_MPs;
public:
	Party(int,float);
	int support(){return _support;}
};