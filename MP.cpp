#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
#include <stdlib.h>
#include "MP.h"

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
	std::string text;
	std::fstream file1;
	file1.open("namesp.dat",std::ios::in);
	if(!file1.good()){std::cout<<"File1 is not opened\n";}
	else
		while(std::getline(file1,text))
			names_right.push_back(text);
	std::fstream file2;
	file2.open("namesl.dat",std::ios::in);
	if(!file2.good()){std::cout<<"File2 is not opened\n";}
	else
		while(std::getline(file2,text))
			names_left.push_back(text);

	/*std::ifstream file1("namesl.dat");
	copy(std::istream_iterator<std::string>(file1),
		std::istream_iterator<std::string>(),
		back_inserter(names_left));
	file1.close();
	std::ifstream file2("namesp.dat");
	copy(std::istream_iterator<std::string>(file2),
		std::istream_iterator<std::string>(),
		back_inserter(names_right));
	file2.close();*/
}