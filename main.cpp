#include <iostream>
#include "Parliament.h"

int main()
{
	const float MPs=10;
	const float left_support=45;
	float right_support=100-left_support;
	Parliament Sejm(MPs,left_support,right_support);
	std::cout << Sejm.MPs();
}