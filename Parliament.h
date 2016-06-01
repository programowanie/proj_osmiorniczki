#pragma once 

#include "Party.h" 

class Parliament
{
private:
	int _MPs;
	Party _porozumienie_oblakanych,_patrioci_i_spiski;
	Party _ruling_party;
	void ruling_party2();
public:
	Parliament(int,float,float);
	Party porozumienie_oblakanych(){return _porozumienie_oblakanych;}
	Party patrioci_i_spiski(){return _patrioci_i_spiski;}
	Party ruling_party(){return _ruling_party;}
	void set_fire();
	int MPs(){return _MPs;}
};