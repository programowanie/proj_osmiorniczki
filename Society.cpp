#include <iostream>
#include <cstdlib>
#include "Society.h"

Society::Society()
{
	_social_mood=20;
}

void Society::symulate()
{
	int d_mood=(rand()%11)-5;//od -5 do 5
	_social_mood += d_mood;
	std::cout<<"\t Nastroj: " << _social_mood<<" \n";
}