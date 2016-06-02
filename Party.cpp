#include <iostream>//vector MP.h
#include <cmath>
#include <cstdlib>
#include "Party.h"
#include "Parliament.h"

int average(std::vector<MP> vec,int amount,int id)
{
	int sum=0;
	for(int i=0;i<amount;i++)
	{
		if(id==0)
			sum+=vec[i].left();
		else if(id==1)
			sum+=vec[i].right();
		else if(id==2)
			sum+=vec[i].erudition();
	}
	return sum/amount;
}

Party::Party()
{
	//std::cout<<"\n\t\t\t\t\t\tGIN\n";
}

Party::Party(int MPs,float support,const Parliament * sejm):
_number_of_MPs( number_of_MPs(MPs,support) ), _support(support),_sejm(sejm)
{
	static int s=0;
	for(int i=0;i<_number_of_MPs;i++)
	{
		MP posel(i,s);
		_vec_of_MPs.push_back(posel); 
	}
	if(s==0)
		_name="Porozumienie Oblakanych";
	else 
		if(s==1)
			_name="Patrioci i Spiski";
	_left=average(_vec_of_MPs,_number_of_MPs,0);
	_right=average(_vec_of_MPs,_number_of_MPs,1);
	_erudition=average(_vec_of_MPs,_number_of_MPs,2);
	//std::cout<<"Tylko POPIS\n";
	s++;
}

Party::Party(const Party & old)
{
	_number_of_MPs=old._number_of_MPs;
	_support=old._support;
	int s;
	if(old._name=="Porozumienie Oblakanych")
		s=0;
	else
		if(old._name=="Patrioci i Spiski")
			s=1;
	for(int i=0;i<_number_of_MPs;i++)
	{
		MP posel(i,s);//,this);
		_vec_of_MPs.push_back(posel); 
	}
	_left=old._left;
	_right=old._right;
	_erudition=old._erudition;
	//std::cout<<"Tylko POPIS XXX\n";
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

int Party::decision()
{
	int speaker=rand()%_number_of_MPs;
	int decision2=_vec_of_MPs[speaker].decision(_left,_right);
	return decision2;
}

bool Party::operator >(const Party & party)
{
	if(this->_support>party._support)
		return 1;
	return 0;
}

