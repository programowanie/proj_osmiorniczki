#pragma once

#include <vector>

#include "MP.h"
#include "Society.h"

class Parliament;

class Party
{
	friend int average(std::vector<MP>,int,int );
private:
	const Parliament * _sejm;
	std::string _name; 
	std::vector<MP> _vec_of_MPs;//wskaznik na sejm zrobiony bo mialem cos z nim robic i klasa society ale moze sie przyda kiedys szkoda go kasowac
	int _number_of_MPs,_left,_right,_erudition;
	float _support;

	int number_of_MPs(int, float);//in real numbers 5.9...
	
public:
	Party();
	Party(int,float,const Parliament *);
	Party(const Party &);

	std::string name(){return _name;}
	int left(){return _left;}
	int right(){return _right;}
	int support(){return _support;}
	int erudition(){return _erudition;}
	int number_of_MPs(){return _number_of_MPs;}
	std::vector<MP> vec_of_MPs(){return _vec_of_MPs;}

	int decision();

	bool operator >(const Party &);
};