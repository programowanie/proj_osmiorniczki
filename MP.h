#pragma once

#include <string>
#include <vector>
//#include "Party.h" //czemu wywala blad!!!!
//class Party; na forum mowia ze tak a to u gory do cpp ale WHY
class MP
{
	friend class Party;
private:
	std::string _name,_party;
	int _left,_right,_erudition;//float _support
	static std::vector <std::string> names_left,names_right,x;
	static std::vector <std::vector <int>> skills_left,skills_right;

	int * decision(int, int);
	static void init();
	static void ofile(std::string ,std::vector <std::string> &);
	static void oofile(std::string ,std::vector <std::vector <int> > &);
	//friend void ofile(std::string ,std::vector <std::string> &);
	//friend void oofile(std::string ,std::vector <std::vector <int> > &);

public:
	MP(int,int);

	int left(){return _left;}
	int right(){return _right;}
	//int support(){return _support;}
	int erudition(){return _erudition;}
	std::string name(){return _name;} 

	std::string description();
};