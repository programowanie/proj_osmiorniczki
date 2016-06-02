#include <iostream>
#include <cstdlib>
#include "Society.h"

Society::Society()
{
	_social_mood=20;
	_left=50;
	_right=100-_left;
}

void Society::symulate(int decision)
{
	int change_o,change_m;
	if(decision==0)
	{
		change_o=(rand()%7)-3;
		change_m=(rand()%3)-1;
		_social_mood+=change_m;
	}
	else
	{
		int expected=(rand()%101);

		if(decision==1 && expected>_left)//oczekiwana prawa i zrobiona
		{
			change_o=(rand()%3)-2;
			change_m=(rand()%6);
		}
		else 
			if(decision==1 && expected<=_left) // oczekiwana lewa a zrobiona prawa
			{
				change_o=(rand()%5);
				change_m=(rand()%6)-5;
			}
			else
				if(decision==2 && expected>_left)//oczekiwana prawa a zrobiona lewa
				{
					change_o=(rand()%5)-4;
					change_m=(rand()%6)-5;
				}
				else
					if(decision==2 && expected<=_left)//oczekiwana lewa i zrobiona
					{
						change_o=(rand()%3);
						change_m=(rand()%6);
					}
			_social_mood+=change_m;
	}
	_left+=change_o;
	_right=100-_left;
	std::cout<<"\t Nastroj: " << _social_mood<<" Lewactwo: "<< _left<< " Kaczyzm: "<< _right<<" \n";
}