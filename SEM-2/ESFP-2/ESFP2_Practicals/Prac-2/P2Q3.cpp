#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter a value: ";
    cin>>a;
    cout<<"The value of a is: "<<a;
    cout<<"\n...........................\n";
    cout<<"The value of ++a is: "<<++a;
    cout<<"\nNow the value of a is: "<<a;
    cout<<"\n\nThe value of a++ is: "<<a++;
    cout<<"\nNow the value of a is: "<<a;
    cout<<"\n\nThe value of --a is: "<<--a;
    cout<<"\nNow the value of a is: "<<a;
    cout<<"\n\nThe value of a-- is: "<<a--;
    cout<<"\nNow the value of a is: "<<a;
    return 0;
}