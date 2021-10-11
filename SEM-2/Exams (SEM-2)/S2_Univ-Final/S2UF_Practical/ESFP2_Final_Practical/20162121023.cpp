/* Implement a program to override legs function in classes Animal, Bird, Reptile and 
display two legs if function of bird is called, display four legs if reptile is called but if 
the reptile is crawler then four legs but if it is creeper then display no legs.
1) Animal Type Bird -> Birds have two legs
2) Animal Type Reptile Crawler-> Crawlers have 4 legs like lizards
Creeper-> Creepers have no legs as snakes */

#include <iostream>
using namespace std;
class Animal
{
	public:
	void legs()
	{
		cout<<"\nInside Animal class";
	}
};
class Bird: public Animal
{
	public:
	void legs()
	{
		cout<<"\nBirds have two legs"<<endl;
	}
};

class Reptile: public Animal{
	public:
	void legs(int a)
	{
		if (a==1)
		{
			cout<<"\nCrawler have 4 legs like lizards"<<endl;
		}
		else
		{
			cout<<"\nCreepers have no legs as snakes"<<endl;
		}
	}
};

int main()
{
	
	while(1)
	{
		int a,c;
		Animal ob;
		ob.legs();
		cout<<"\nSelect any one of the following: ";
		cout<<"\n(1) Bird\t(2) Reptile\t(3) Exit"<<endl;
		cout<<"\nEnter choice of selection: ";
		cin>>c;
		switch (c)
		{
		case 1:
			Bird obj;
			obj.legs();
			break;

		case 2:
			Reptile obj1;
			cout<<"\nSelect any one of the following: ";
			cout<<"\n(1) Crawler\t(2) Creeper"<<endl;
			cout<<"\nEnter choice of selection: ";
			cin>>a;
			obj1.legs(a);
			break;

		case 3:
			exit(0);
		default:
			break;
		}
	}
	return 0;
}