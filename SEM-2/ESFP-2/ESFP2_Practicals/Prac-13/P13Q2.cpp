#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;
class A{
    public:
    double num1, num2, ans;
double getData()
{
    int j;
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
    try
    {
        if (cin.fail())
        {
            throw j;
        }
        if(num2==0)
        {
            throw num2;
        }
    }
    catch(double num2)
    {
        cout<<"\nCannot divide number with zero. MATH ERROR!";
        return 0;
    }
    catch(int j)
    {
        cout<<"\nIncompatible datatype entered.";
        return 0;
    }
    divide();
}

double divide()
{
    ans=num1/num2;
    cout<<"\nAnswer: "<<ans;
    return 0;
}
};
int main()
{
    A obj;
    try
    {
        obj.getData();
    }
    catch(...)
    {
        cout<<"\nEXCEPTION HANDLED";
    }
	return 0;
}