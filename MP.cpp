#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include "MP.h"

void MP::ofile(std::string txt,std::vector <std::string> &names)
{
	static int i=1;
	std::string text;
	std::fstream file;
	file.open(txt,std::ios::in);
	if(!file.good())
	{std::cout<<"File "<< i << " is not opened\n";}
	else
		while(std::getline(file,text))
			names.push_back(text);
	i++;	
	file.close();
}

void MP::oofile(std::string txt,std::vector <std::vector <int> > &skills)
{
	static int j=1;
	std::string line;
	std::fstream file;
	file.open(txt,std::ios::in);
	if(!file.good())
	{std::cout<<"File "<< j << " is not opened\n";}
	else
	{
		int k=0;
		while(std::getline(file,line))//pobieram linie z pliku
		{	
			std::string temporary;//bufor pomocniczny
			std::vector <int> skill;
			for(int i=0;line[i-1]!=0;i++)//zbieram literki az do konca lini
			{
				std::cout<<temporary<<" k "<<k<<" ";
				if( (line[i]>='0' && line[i]<='9') || line[i]=='.')//liczby skladam z ciagu cyfr i spacji
				{	
					temporary.push_back(line[i]);
				}
				else
				{
					skill.push_back(stoi(temporary));
					temporary="";
				}
				skills.push_back(skill);
			}std::cout<<"\n";
			k++;
		}
	}	
	file.close();
	j++;	
}

std::vector <std::string> MP::names_right,MP::names_left;
MP::MP(int i)
{
	static int x=(init(),0);
	if(x)
		_name=names_right[i];
	else
		_name=names_left[i];
	std::cout<<"Dieta ";std::cout<<_name<<std::endl;
	x++;
}

std::string MP::description()
{
	using std::to_string;
	return _name 
		+ "\t lewactwo: " + to_string(_left) 
		+ "\t kaczyzm: " + to_string(_right)  
		+ "\t poparcie: " + to_string(_support);
}

std::vector <std::vector <int>> MP::skills_left,MP::skills_right;//!!!!!!!!!!!!!
void MP::init()
{
	ofile("namesp.dat",names_right);
	ofile("namesl.dat",names_left);
	oofile("skillsl.dat",skills_left);
	oofile("skillsp.dat",skills_right);
}

void MP::decision()
{
	srand(time(NULL));
	

}