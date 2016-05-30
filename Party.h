#pragma once
#include <vector>
#include "MP.h"

class Party
{
private:
	//std::string _name; ?????
	std::vector<MP> _vec_of_MPs;

	int _number_of_MPs;
	float _support;
	int number_of_MPs(int, float);//in real numbers 5.9...
	
public:
	Party(int,float);
	int support(){return _support;}
	bool operator >(Party &);
	void decision();
};