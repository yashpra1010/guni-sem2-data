/*
    list container: sequential container
        we can insert and access data in dynamic mode.
        push_back();
        push_front();
*/

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list <int> ob;
    ob.push_back(100);
    ob.push_back(150);
    ob.push_back(60);
    ob.push_back(600);
    ob.push_back(600);
	//-----------------------
    list <int> ::iterator it;
    it=ob.begin();
    for (;it!=ob.end();it++)
    {
       cout<<"List value: "<<*it<<endl;
    }

	//-----------------------
	ob.push_back(500);
	cout<<"\nUpdated record"<<endl;
    list <int> ::iterator itl;
    itl=ob.begin();
    for (;itl!=ob.end();itl++)
    {
       cout<<"List value: "<<*itl<<endl;
    }

	//-----------------------
	ob.sort();
	cout<<"\nAfter sorting: "<<endl;
    list <int> ::iterator its;
    its=ob.begin();
    for (;its!=ob.end();its++)
    {
       cout<<"List value: "<<*its<<endl;
    }
	
	//-----------------------
	cout<<"\nUnique value from list: "<<endl;
	ob.unique();
    list <int> ::iterator it3;
    it3=ob.begin();
    for (;it3!=ob.end();it3++)
    {
       cout<<"List value: "<<*it3<<endl;
    }

	//-----------------------
	cout<<"\nInsert value at the end of the list: "<<endl;
    list <int> ::iterator it4;
    it4=ob.end();
	ob.insert(it4,1000);
	ob.insert(it4,1100);
	it4=ob.begin();
    for (;it4!=ob.end();it4++)
    {
       cout<<"List value: "<<*it4<<endl;
    }

	//-----------------------
	ob.pop_back();
	ob.pop_front();
	cout<<"\nPoping the element: "<<endl;
	list <int> ::iterator afpop;
    afpop=ob.begin();
    for (;afpop!=ob.end();afpop++)
    {
       cout<<"List value: "<<*afpop<<endl;
    }

	return 0;
}

