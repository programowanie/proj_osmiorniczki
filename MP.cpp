#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include "MP.h"

void ofile(std::string txt,
	std::vector <std::string> &names)
{
	static int i=1;
	std::string text;
	std::fstream file;
	file.open(txt,std::ios::in);
	if(!file.good())
	{std::cout<<"File "<< i << " is not opened\n";}
	else
		while(std::getline(file,text))
			names.push_back(text);
	i++;	
}

std::vector <std::string> MP::names_right,MP::names_left;
MP::MP(int i,int s)
{
	static int x=(init(),0);
	if(s)
		_name=names_right[i];
	else
		_name=names_left[i];
	std::cout<<"Dieta ";std::cout<<_name<<std::endl;
}

std::string MP::description()
{
	using std::to_string;
	return _name 
		+ "\t lewactwo: " + to_string(_left) 
		+ "\t kaczyzm: " + to_string(_right)  
		+ "\t poparcie: " + to_string(_support);
}

void MP::init()
{
	ofile("namesp.dat",names_right);
	ofile("namesl.dat",names_left);
}

void MP::decision()
{
	srand(time(NULL));


}