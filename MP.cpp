#include <iostream>//string vector
#include <fstream>
#include <iterator>
#include <cstdlib>
#include <ctime>
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
	{
		std::cout<<"File "<< j << " is not opened\n";
	}
	else
	{
		int k=0;
		while(std::getline(file,line))//pobieram linie z pliku
		{	
			std::string temporary;//bufor pomocniczny
			std::vector <int> skill;
			for(int i=0;line[i-1]!=0;i++)//zbieram literki az do konca lini
			{
				//std::cout<<temporary<<" k "<<k<<" ";
				if( (line[i]>='0' && line[i]<='9') || line[i]=='.')//liczby skladam z ciagu cyfr i spacji
				{	
					temporary.push_back(line[i]);	
				}
				else
				{
					skill.push_back(stoi(temporary));//if(i>5)std::cout<<" !!!! "<<skill[2]<<" ";//<<std::endl;
					temporary="";
				}
			}
			//std::cout<<skill[0]<<" "<<skill[1]<<" "<<skill[2]<<" ";
			skills.push_back(skill);
			//std::cout<<"\n";
			k++;
		}
		/*for(int i=0;i<10;i++)
		{
			for(int j=0;j<3;j++)
			{
				std::cout<<skills[i][j]<<" ";
			}
			std::cout<<"\n";
		}*/
	}	
	file.close();
	j++;
}

std::vector <std::string> MP::names_right,MP::names_left;
MP::MP(int i,int s)
{
	static int x=(init(),0);
	if(s)
	{
		_name=names_right[i];
		_left=skills_right[i][0];
		_right=skills_right[i][2];
		_erudition=skills_right[i][2];
	}
	else
	{
		_name=names_left[i];
		_left=skills_left[i][0];
		_right=skills_left[i][2];
		_erudition=skills_left[i][2];
	}
	std::cout<<"Dieta ";std::cout<<_name<<std::endl;

	x++;
}

std::string MP::description()
{
	using std::to_string;
	return _name 
		+ "\t\t lewactwo: " + to_string(_left) 
		+ "\t kaczyzm: " + to_string(_right)  
		+ "\t erudycja: " + to_string(_erudition);
}
//init zmiennych statycznych klasy
std::vector <std::vector <int>> MP::skills_left,MP::skills_right;
void MP::init()
{
	ofile("namesp.dat",names_right);
	ofile("namesl.dat",names_left);
	oofile("skillsl.dat",skills_left);
	oofile("skillsp.dat",skills_right);
	for(int i=0;i<10;i++)
	{
		//std::cout<<skills_right[i][0]<<std::endl;
	}
}

void MP::decision()
{
	srand(time(NULL));
	int decision=rand()%101;
	if(decision==0)
		std::cout << _name << "cos sie popsulo i nie bylo mnie slychac." <<std::endl;
	else 
		if(decision>_left)
			std::cout<< _name 
				<<" masakruje lewaka z sila: "
				<< _erudition << std::endl;
		else 
			std::cout<< _name 
				<<" odwoluje sie do LGBT i tolerancji z sila: "
				<< _erudition << std::endl;

}