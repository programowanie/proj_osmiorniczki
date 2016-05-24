#include <iostream>
#include <string>
#include "MP.h"

MP::MP()
{

}

std::string MP::description()
{
	using std::to_string;
	return _name 
		+ "\t lewactwo: " + to_string(_left) 
		+ "\t kaczyzm: " + to_string(_right)  
		+ "\t poparcie: " + to_string(_support);
}