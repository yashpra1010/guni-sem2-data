/*
	Set is associative container in stl.
	It will only accept unique value.
*/
#include <iostream>
#include <set>
using namespace std;

int main()
{
	set <int> s;

	//-----------------------
	s.insert(10);
	s.insert(20);
	s.insert(30);
	s.insert(40);
	set <int> :: iterator it;
	for (it=s.begin();it!=s.end();it++)
	{
		cout<<"\nSet element: "<<*it;
	}
	cout<<"\nSize of set: "<<s.size()<<endl;

	//-----------------------
	cout<<"\nUpdated element in Set: "<<endl;
	s.insert(20);
	set <int> :: iterator it1;
	for (it1=s.begin();it1!=s.end();it1++)
	{
		cout<<"\nSet element: "<<*it1;
	}
	cout<<"\nSize of set: "<<s.size()<<endl;

	//-----------------------
	cout<<"\nRemoving element in Set: "<<endl;
	s.erase(30);
	set <int> :: iterator it2;
	for (it2=s.begin();it2!=s.end();it2++)
	{
		cout<<"\nSet element: "<<*it2;
	}
	cout<<"\nSize of set: "<<s.size()<<endl;

	return 0;
}