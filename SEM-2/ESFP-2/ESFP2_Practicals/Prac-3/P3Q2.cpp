#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a,b,c,root,delta,x,x1,r,i;
    
    cout<<"\nEnter co-efficient of x^2: ";
    cin>>a;
    cout<<"\nEnter co-efficient of x: ";
    cin>>b;
    cout<<"\nEnter value for c: ";
    cin>>c;

    if (a==0)
    {
        cout<<"\nThis is not a quadratic equation.";
        return 0;
    }
    else if (a==0 && b==0)
    {
        cout<<"\nThis is not a quadratic equation.";
        return 0;
    }
    
    cout<<"\nThe equation is "<<"("<<a<<")"<<"x^2+"<<"("<<b<<")"<<"x+"<<"("<<c<<")";

    delta=((b*b)-4*a*c);
    if (delta>=0)
    {
        if (delta==0)
        {
            x1=x=(-b/2*a);
            cout<<"\nReal and same roots: "<<x1<<" & "<<x;
        }
        else {
            x,x1=0;
            x1=(((-b)+ sqrt(delta))/(2*a));
            x=(((-b)- sqrt(delta))/(2*a));
            cout<<"\nEquation has two different real roots: -";
            cout<<"\n1st Root: "<<x1;
            cout<<"\n2nd Root: "<<x;
        }
    }
    if (delta<0)
    {
        r=((-b)/2*a);
        i= (sqrt(-delta)/(2*a));
        cout<<"\nThis equation has two imaginary roots";
        cout<<"\nRoot 1: "<<r<<" + "<<i<<"i";
        cout<<"\nRoot 2: "<<r<<" - "<<i<<"i";
    }
    
    return 0;
}