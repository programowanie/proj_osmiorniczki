#pragma once

class MP
{
private:
	std::string _name;
	int _left,_right,_support;
public:
	MP();

	int left(){return _left;}
	int right(){return _right;}
	int support(){return _support;}
	std::string name(){return _name;} 
	std::string description();


};