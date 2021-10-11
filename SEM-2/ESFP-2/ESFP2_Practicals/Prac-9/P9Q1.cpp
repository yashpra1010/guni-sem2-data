#include<iostream>
using namespace std;

int Maximum(int n)
{
	int i,j,arr[i];
	int max=0;
	int *p= &max;
	
	{for(i=1;i<=n;i++)
	{
        cout<<"Enter value of "<<i<<" : ";
	    cin>>arr[i];
	}
	
	for (j=1;j<=n;j++)
	{
		if(arr[j]>max)
		{
			max=arr[j];
	    } 	
			
	}
    cout<<"\nThe max is: "<<*p;}
}
 int main()
 {
 	int n,i,arr[10];
	cout<<"\nEnter number of data values: ";
	cin>>n;
	Maximum(n);
	return 0;
 }