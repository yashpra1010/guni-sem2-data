/* deque is sequential container */
#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque <int> ob;
	//-----------------------
    ob.push_back(10);
    ob.push_back(20);
    ob.push_back(30);
    ob.push_back(40);
    for (int i = 0; i < ob.size(); i++)
    {
        cout<<ob[i]<<endl;
    }
    
	//-----------------------
	cout<<"\nInsert value at the beginning of deque list: "<<endl;
	ob.push_front(50);
	ob.push_front(60);
	for (int i = 0; i < ob.size(); i++)
	{
		cout<<ob[i]<<endl;
	}

	//-----------------------
	cout<<"\nDeleting element from begining of deque list: "<<endl;
	ob.pop_front();
	for (int i = 0; i < ob.size(); i++)
    {
        cout<<ob[i]<<endl;
    }

	//-----------------------
	cout<<"\nDeleting element from ending of deque list: "<<endl;
	ob.pop_back();
	for (int i = 0; i < ob.size(); i++)
    {
        cout<<ob[i]<<endl;
    }

	//-----------------------
	cout<<"\nTotal size of deque list: "<<ob.size()<<endl;

    return 0;
}