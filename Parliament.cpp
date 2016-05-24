#include <iostream>
#include "Parliament.h"

Parliament::Parliament(int MPs,float left_support,float right_support):
	_MPs(MPs),
	_porozumienie_oblakanych(MPs,left_support),
	_patrioci_i_spiski(MPs,right_support)
{
	std::cout << "Niech zyje Konstytucja!!!"<<std::endl;
}