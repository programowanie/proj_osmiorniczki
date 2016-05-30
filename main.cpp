#include <iostream>
#include "Parliament.h"

int main()
{
	const float MPs=10;
	const float left_support=49.1;
	float right_support=100-left_support;
	Parliament Sejm(MPs,left_support,right_support);
	Party *ruling_party=Sejm.ruling_party();
	for(int i=0;i<40;i++)
	{
		ruling_party->decision();

	}
}