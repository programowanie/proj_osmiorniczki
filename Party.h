#pragma once
#include <vector>
#include "MP.h"

class Party
{
private:
	std::string _name; 
	std::vector<MP> _vec_of_MPs;

	int _number_of_MPs,_left,_right,_erudition;
	float _support;
	int number_of_MPs(int, float);//in real numbers 5.9...
	friend int average(std::vector<MP>,int,int );
public:
	Party(int,float);
	Party(const Party &);
	std::string name(){return _name;}
	int left(){return _left;}
	int right(){return _right;}
	int support(){return _support;}
	int erudition(){return _erudition;}
	int number_of_MPs(){return _number_of_MPs;}
	std::vector<MP> vec_of_MPs(){return _vec_of_MPs;}
	bool operator >(Party &);
	void decision();
};