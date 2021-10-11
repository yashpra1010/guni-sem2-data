#include <iostream>
using namespace std; //std global declaration
int main() {
    char name[30];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Your name is: "<<name;
    return 0;
}
//namespace is scope

/*
cout is the object of ostream class
<< indicate instertion operator /output operator/less than shift operator
syntax: cout<<"message"<<value;
usage: if we want to print some message and value, that time we use cout object

cin is the object of istream class
>> indicate extraction operator /input operator/greater than shift operator
syntax:  cin>>a>>b>>c;
usage: cin is object used to take input during run-time from the user
*/