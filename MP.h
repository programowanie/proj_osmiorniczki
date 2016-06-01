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
	int _left,_right,_erudition;//,_support
	//const Party * _p_party; 
	static std::vector <std::string> names_left,names_right,x;
	static std::vector <std::vector <int>> skills_left,skills_right;

	void decision(int, int);
	static void init();
	static void ofile(std::string ,std::vector <std::string> &);
	static void oofile(std::string ,std::vector <std::vector <int> > &);
	//friend void ofile(std::string ,std::vector <std::string> &);
	//friend void oofile(std::string ,std::vector <std::vector <int> > &);
public:
	MP(int,int);//,const Party *);
	int left(){return _left;}
	int right(){return _right;}
	//int support(){return _support;}
	int erudition(){return _erudition;}
	std::string name(){return _name;} 
	std::string description();
	
	


};