#include <iostream>
using namespace std;

class Employee{
    char name[20];
    public:
            friend void operator>>(istream &prajapati,Employee &ob){
                cout<<"Enter Employee Name=";
                prajapati>>ob.name;
            }
            friend void operator<<(ostream &yash,Employee &ob1){
                yash<<"\nYour name is= "<<ob1.name;
            }
};

int main(){
    Employee obj;
    cin>>obj;
    cout<<obj;
    return 0;
}