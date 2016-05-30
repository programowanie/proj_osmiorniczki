#pragma once 

#include "Party.h" 

class Parliament
{
private:
	int _MPs;
	Party _porozumienie_oblakanych,_patrioci_i_spiski;
	Party* _ruling_party;
public:
	Parliament(int,float,float);
	int MPs(){return _MPs;}
	Party * ruling_party();
};