#include <iostream>
using namespace std;
template <typename Y>
void Large(Y a, Y b)
{
    Y largest;
    largest=0;
    if (a>b)
    {
        largest=a;
    }
    else
    {
        largest=b;
    }
    cout<<"\nLargest number is: "<<largest;
}
int main()
{
    
    int a,b;
    float c,d;
    char e,f;
    cout<<"\nEnter an integer number: ";
    cin>>a;
    cout<<"\nEnter an integer number: ";
    cin>>b;
    Large(a,b);
    cout<<"\nEnter a float number: ";
    cin>>c;
    cout<<"\nEnter a float number: ";
    cin>>d;
    Large(c,d);
    cout<<"\nEnter a char number: ";
    cin>>e;
    cout<<"\nEnter a char number: ";
    cin>>f;
    Large(e,f);
    return 0;
}
