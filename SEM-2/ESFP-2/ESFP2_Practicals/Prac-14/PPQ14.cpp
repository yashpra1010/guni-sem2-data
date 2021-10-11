/* 
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
vector<int> v(10, 2);
if (all_of(v.cbegin(), v.cend(), [](int i){ return i % 2 == 0; }))
{
cout << "Even Number";
}
else
{
cout << "Odd Number";
}
return 0;
}
*/


/* 
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
vector<int> v;
for(int i=0;i<10;i++)
v.push_back(i+1);
for(int i=0;i<10;i++)
cout<<v[i]<<" ";
cout<<endl;
random_shuffle(v.begin(), v.end());
for(int i=0;i<10;i++)
cout<<v[i]<<" ";
return 0;
}
*/

/* 
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map <int,int> m;
    m.insert(pair<int, int>(1, 123));
    m.insert(pair<int, int>(2, 456));
    m.insert(pair<int, int>(3, 789));
    m.insert(pair<int, int>(4, 135));
    cout<<"Displaying All elements:"<<endl;
    map <int,int> :: iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << "key ID:" << it->first << "\tValue:" << it->second << endl;
    }
    cout<<"Modified Elements:"<<endl;
    map <int,int> :: iterator it1;
    it1=m.begin();
    m.insert(pair<int,int>(5,10));
    for (it1 = m.begin(); it1 != m.end(); it1++)
    {
        cout << "key ID:" << it1->first << "\tValue:" << it1->second << endl;
    }
    cout<<"Deleted single element(3rd element):"<<endl;
    m.erase(3);
    map <int,int> :: iterator it2;
    for (it2 = m.begin(); it2 != m.end(); it2++)
    {
        cout << "key ID:" << it2->first << "\tValue:" << it2->second << endl;
    }
    cout<<"All Elements deleted"<<endl;
    m.clear();
    map<int, int>::iterator it3;
    for (it3 = m.begin(); it3 != m.end(); it3++)
    {
        cout << "key ID:" << it3->first << "\tValue:" << it3->second << endl;
    }
    cout<<"CLEARED SUCCESSFULLY";
    return 0;
}
*/

/*
#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int n,m;
	stack <int> obj;
	
	cout<<"\nInserting values in stack.";
	cout<<"\nDisplaying values in stack: "<<endl;
	obj.push(10);
	obj.push(20);
	obj.push(30);
	obj.push(40);
	n=obj.size();

	for (int i = 0; i < n; i++)
	{
		cout<<obj.top()<<"\t";
		obj.pop();
	}
	cout<<"\nAppending values in stack: "<<endl;
	obj.push(10);
	obj.push(20);
	obj.push(30);
	obj.push(40);
	obj.push(50);
	n=obj.size();

	for (int i = 0; i < n; i++)
	{
		cout<<obj.top()<<"\t";
		obj.pop();
	}

	cout<<"\nDeleting 2 values from stack: "<<endl;
	obj.push(10);
	obj.push(20);
	obj.push(30);
	obj.push(40);
	obj.push(50);
	obj.pop();
	obj.pop();
	m=obj.size();
	for (int i = 0; i < m; i++)
	{
		cout<<obj.top()<<"\t";
		obj.pop();
	}
	return 0;
}
*/