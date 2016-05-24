#include "Party.h"

Party::Party(int MPs,float support):
_number_of_MPs( number_of_MPs(MPs,support) ), _support(support)
{
	for(int i=0;i<_number_of_MPs;i++)
	{
	//	_vec_of_MPs.insert();
	}
}

int Party::number_of_MPs(int MPs,float support)
{
	return (support/100)*MPs;
}