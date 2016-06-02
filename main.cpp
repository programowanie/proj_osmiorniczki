#include <iostream>
#include <ctime>
#include <cstdlib>

#include "Parliament.h"
#include "Society.h"

int main()
{
	srand(time(NULL));
	
	int kadencja=1;
	const float MPs=10;
	const float left_support=49.1;
	float right_support=100-left_support;
//Tworzymy Sejm Spoleczenstwo i wyznaczamy partie rzadzaca
	Parliament Sejm(MPs,left_support,right_support);
	Party ruling_party=Sejm.ruling_party();
	Society Polska;
//Wyswietlamy Poslow Parti PO
	std::cout<<"Witamy w sejmie " << kadencja << " kadencji!!!" <<std::endl
		<<"\nSa z nami poslowie Porozumienia Oblakanych:\n"<<std::endl;
	for(int i=0;i<Sejm.porozumienie_oblakanych().number_of_MPs();i++)
	{
		std::cout<<Sejm.porozumienie_oblakanych().vec_of_MPs()[i].description()
			<<std::endl;
	}
//Wyswietlamy Poslow Parti PiS
	std::cout<<"\n\n\noraz poslowie Patriotow i Spiskow:\n"<<std::endl;
	for(int i=0;i<Sejm.patrioci_i_spiski().number_of_MPs();i++)
	{
		std::cout<<Sejm.patrioci_i_spiski().vec_of_MPs()[i].description() 
			<<std::endl;
	}
	std::cout<<std::endl<<std::endl<<std::endl;	
//Symulacja
	for(int i=0;i<60;i++)
	{
		int decision=ruling_party.decision();
		Polska.symulate(decision);
		if(Polska.social_mood()<=0)
		{
			Sejm.set_fire();
			break;
		}
	}
	std::cout<<"\n\n\n";
	
}