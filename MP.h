#pragma once

#include <string>
#include <vector>
class MP
{
private:
	std::string _name;
	int _left,_right,_support,_erudition;
	static void init();
	static std::vector <std::string> names_left,names_right;
public:
	MP();

	int left(){return _left;}
	int right(){return _right;}
	int support(){return _support;}
	std::string name(){return _name;} 
	std::string description();


};