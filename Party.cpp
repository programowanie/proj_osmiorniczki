#include "Party.h"

Party::Party(int MPs,float support):
_number_of_MPs( number_of_MPs(MPs,support) )
{

}

int Party::number_of_MPs(int MPs,float support)
{
	return (support/100)*MPs;
}