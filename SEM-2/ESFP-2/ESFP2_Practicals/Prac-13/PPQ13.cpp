#include <iostream>
#include <exception>
#include<stdexcept>

using namespace std;
/*-----1-----*/

/* 
void abc(int a,int b)
{
    try
    {
        if(b==0)
        {
            throw b;
        }
        else
        {
            cout<<"\nDivision: "<<(a/b);
        }
    }
    catch(int i)
    {
        cout<<"\nCaught interger inside function "<<i;
        throw;
    }
    cout<<"\nEnd of function.";
}
int main()
{
    cout<<"\nI am inside main";
    try
    {
        {
            abc(10,5);
        }
    }
    catch(int num)
    {
        cout<<"\nCaught integer inside main "<<num;
    }
    cout<<"\nEnd of main function.";
    return 0;
}
 */

/*-----2-----*/


class A{
    int num1,num2;
    public:
    A()
    {
        int j;
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
        try
        {
            if(num2==0)
            {
                throw num2;
            }
            else
            {
                cout<<"\nAnswer: "<<num1/num2;
            }
        }
        catch(int num2)
        {
            cout<<"\nCannot divide number with zero. MATH ERROR!";
        }
    }

    ~A()
    {
        cout<<"\nDestructor called."<<endl;
    }
};

int main()
{
    A a;
    return 0;
}


/*-----3-----*/

/* class Test: public exception
{
virtual const char* what() const throw()
{
return "Exception arised";
}
} obj;
int main ()
{
try
{
throw obj;
}
catch (exception& e)
{
cout << e.what() << endl;
}
return 0;
} */

/*-----4-----*/

/* double divi(int a, int b)
{
if ( b == 0 )
{
throw "Denominator never be zero for division!";
}
return (a / b);
}
int main ()
{
int x = 10;
int y = 0;
double z = 0;
try
{
z = divi(x, y);
cout << z << endl;
}
catch (const char* ch)
{
cout << ch << endl;
}
return 0;
} */