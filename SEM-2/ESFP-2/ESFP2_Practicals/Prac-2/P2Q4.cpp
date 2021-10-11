#include <iostream>
using namespace std;
int main() {
    int x,y,s,p,total;
    cout<<"Enter value of x: ";
    cin>>x;
    cout<<"Enter value of y: ";
    cin>>y;
    p=x*y;
    s=x+y;
    total=(s*s)+p*(s-x)*(p+y);
    cout<<"Total: "<<total;
    return 0;
}