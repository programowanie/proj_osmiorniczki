#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "Party.h"

Party::Party(int MPs,float support):
_number_of_MPs( number_of_MPs(MPs,support) ), _support(support)
{
	static int s=0;
	for(int i=0;i<_number_of_MPs;i++)
	{
		MP posel(i,s);
		_vec_of_MPs.push_back(posel); 
	}
	s++;
	std::cout<<"Tylko POPIS\n";
}

int Party::number_of_MPs(int MPs,float support)
{
	float x=(support/100)*MPs;
	int y=int(10*x);
	if(support<50 && y%10==5)
		x=round(x)-1;
	else x=round(x);
	return x;
}

void Party::decision()
{
	srand(time(NULL));
	int speaker=rand()%_number_of_MPs;
	_vec_of_MPs[speaker].decision();
}

bool Party::operator >(Party & party)
{
	if(this->support()>party.support())
		return 1;
	return 0;


}

