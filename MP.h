#pragma once

#include <string>
#include <vector>
//void ofile(std::string, std::vector <std::string>);?????

class MP
{
private:
	std::string _name;
	int _left,_right,_support,_erudition;
	static std::vector <std::string> names_left,names_right;
	static std::vector <std::vector <int>> skills_left,skills_right;

	static void init();
	
	
public:
	MP(int);
void decision();
	int left(){return _left;}
	int right(){return _right;}
	int support(){return _support;}
	std::string name(){return _name;} 
	std::string description();
	//void (*)() rdecision();
	
	


};