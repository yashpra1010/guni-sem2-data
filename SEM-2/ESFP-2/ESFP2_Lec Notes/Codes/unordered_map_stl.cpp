#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	unordered_map <string,int> um({{"Jinay",1},{"Vismay",2},{"Gandhi",3}});
	//-----------------------
	unordered_map <string,int> ::iterator it;
	for (it =um.begin(); it!=um.end(); it++)
	{
		cout<<it->first<<"\t"<<it->second<<endl;
	}
	
	//-----------------------
	cout<<"\nUpdated unordered map: "<<endl;
	um.insert({"Aryan",5});
	unordered_map <string,int> ::iterator it1;

	for (it1 =um.begin(); it1!=um.end(); it1++)
	{
		cout<<it1->first<<"\t"<<it1->second<<endl;
	}

	//-----------------------
	cout<<"\nAgain input value in unordered map: "<<endl;
	um.insert(make_pair<string,int>("Yash",10));
	unordered_map <string,int> ::iterator it2;

	for (it2 =um.begin(); it2!=um.end(); it2++)
	{
		cout<<it2->first<<"\t"<<it2->second<<endl;
	}

	//-----------------------
	cout<<"\nFinding value in unordered map: "<<endl;
	if(um.find("Yash")!=um.end())
	{
		cout<<"\n\"Yash\" found in unordered map."<<endl;
	}
	else
	{
		cout<<"\nENTERED VALUE NOT FOUND."<<endl;
	}
	
	//-----------------------
	cout<<"\nDeleting value from unordered map: "<<endl;
	um.erase("Gandhi");
	unordered_map <string,int> ::iterator it3;

	for (it3 =um.begin(); it3!=um.end(); it3++)
	{
		cout<<it3->first<<"\t"<<it3->second<<endl;
	}

	//-----------------------
	cout<<"\nSize of unordered map: "<<um.size()<<endl;

	return 0;
}