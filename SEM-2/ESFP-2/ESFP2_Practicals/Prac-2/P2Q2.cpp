#include <iostream>
using namespace std;
int main() {
    int x=10,y=5;
    cout<<"Result:\n";
    cout<<"x value\t"<<"y value\t"<<"Expressions\t"<<"Result\n";
    cout<<x<<" \t|"<<y<<" \t|"<<"x=y+3\t"<<"\t|"<<y+3<<"\n";
    cout<<x<<" \t|"<<y<<" \t|"<<"x=y-2\t"<<"\t|"<<y-2<<"\n";
    cout<<x<<" \t|"<<y<<" \t|"<<"x=y*5\t"<<"\t|"<<y*5<<"\n";
    cout<<x<<" \t|"<<y<<" \t|"<<"x=x/y\t"<<"\t|"<<x/y<<"\n";
    cout<<x<<" \t|"<<y<<" \t|"<<"x=x%y\t"<<"\t|"<<x%y<<"\n";
    return 0;
}