#include<iostream> 
#include<vector> 
using namespace std; 
int main() 
{
	vector <int> obj;
	int x;
	for (int i = 0; i < 10; i++)
	{
		cout<<"Enter data "<<i+1<<" : ";
		cin>>x;
		obj.push_back(x);
	}
	
	cout<<"\nSize of vector: "<<obj.size()<<endl;

	cout<<"\nAppending element to the end of list: "<<endl;
	obj.push_back(40); 
	for (vector<int>::iterator it = obj.begin() ; it != obj.end(); ++it)
	{
    	cout<< *it<<"\t";
	}

	cout<<"\nRemove last element from vector: "<<endl;
    obj.pop_back();
	for (vector<int>::iterator it = obj.begin() ; it != obj.end(); ++it)
	{
    	cout<< *it<<"\t";
	}

	cout<<"\nEnter number at the beginning of vector list: "<<endl;
    vector <int> ::iterator it2;
    it2=obj.begin();
    obj.insert(it2,900);
    for (int i = 0; i < obj.size(); i++)
    {
        cout<<obj[i]<<"\t";
    }
	
	cout<<"\nEnter number at the end of vector list: "<<endl;
    vector <int> ::iterator it3;
    it3=obj.end();
    obj.insert(it3,1100);
    for (int i = 0; i < obj.size(); i++)
    {
        cout<<obj[i]<<"\t";
    }

	return 0;
}