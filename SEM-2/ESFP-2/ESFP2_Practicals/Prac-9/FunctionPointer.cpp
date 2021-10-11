#include <iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int multi(int a,int b)
{
    return a*b;
}
int divi(int a,int b)
{
    return a/b;
}

int main()
{

    int a,b;
    int (*p)(int a,int b),c;
    int (*q)(int a,int b),j;
    int (*r)(int a,int b),k;
    int (*s)(int a,int b),l;

    cout<<"Enter value of A and B: ";
    cin>>a>>b;

    p=add;
    c=p(a,b);
    cout<<"\nAddition of two numbers: "<<c;
    
    q=sub;
    j=q(a,b);
    cout<<"\nSubtraction of two numbers: "<<j;

    r=multi;
    k=r(a,b);
    cout<<"\nMultiplication of two numbers: "<<k;

    s=divi;
    l=s(a,b);
    cout<<"\nDivision of two numbers: "<<l;

    return 0;
}