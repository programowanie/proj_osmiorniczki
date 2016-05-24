#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
#include <stdlib.h>
#include "MP.h"

std::vector <std::string> MP::names_right,MP::names_left;
MP::MP()
{
	static int =(init(),0);
	
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
	std::ifstream file1("namesl.dat");
	copy(std::istream_iterator<std::string>(file1),
		std::istream_iterator<std::string>(),
		back_inserter(names_left));
	file1.close();
	std::ifstream file2("namesp.dat");
	copy(std::istream_iterator<std::string>(file2),
		std::istream_iterator<std::string>(),
		back_inserter(names_right));
	file2.close();
}