#pragma once

#include <string>
#include <vector>
//void ofile(std::string, std::vector <std::string>);?????
class MP
{
friend class Party;
private:
	std::string _name;
	int _left,_right,_support,_erudition;
	static std::vector <std::string> names_left,names_right,x;
	static std::vector <std::vector <int>> skills_left,skills_right;
	void decision();
	static void init();
	static void ofile(std::string ,std::vector <std::string> &);
	static void oofile(std::string ,std::vector <std::vector <int> > &);
public:
	MP(int);
	int left(){return _left;}
	int right(){return _right;}
	int support(){return _support;}
	std::string name(){return _name;} 
	std::string description();
	//void (*)() rdecision();
	
	


};