#include <iostream>
#include "Parliament.h"

Parliament::Parliament(int MPs,float left_support,float right_support):
	_MPs(MPs),
	_porozumienie_oblakanych(MPs,left_support,this),
	_patrioci_i_spiski(MPs,right_support,this)
	,_ruling_party()
{
	//std::cout << "Niech zyje Konstytucja!!!"<<std::endl;
	ruling_party2();
}

void  Parliament::ruling_party2()
{
	if(_patrioci_i_spiski>_porozumienie_oblakanych)
		_ruling_party= _patrioci_i_spiski;
	else
		_ruling_party= _porozumienie_oblakanych;
}

void Parliament::set_fire()
{
	std::cout<<"\n\n\n\t\t\t\t\t\t\t SEJM SPALONO!!! \n";
}
