#include<iostream> 
#include<list> 
using namespace std; 
int main() 
{
	list <int> ob;
	int arr[20];
	int n;
	int *p;
	cout<<"\nEnter number of data you want to enter: ";
	cin>>n;
    
	for (int i = 0; i < n; i++)
    {
		cout<<"\nEnter "<<i+1<<" data: ";
		cin>>arr[i];
    }

	for (int i = 0; i < n; i++)
	{
		p=&arr[i];
		ob.push_back(*p);
	}
	cout<<"\nArrayList elements: "<<endl;
	for (int i = 0; i < n; i++)
    {
		cout<<arr[i]<<"\t";
    }

  	list <int> ::iterator it;
    it=ob.begin();
	cout<<"\nList elements: "<<endl;
    for (;it!=ob.end();it++)
    {
       cout<<*it<<"\t";
    }
	
	return 0;
}