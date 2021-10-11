#include <iostream>
#include <exception>
#include<stdexcept>

using namespace std;

int main()
{
    int age;
    cout<<"\nEnter your age: ";
    cin>>age;
    try
    {
        if (age>=18)
        {
            cout<<"\nYou are aligible for vote.";
        }
        
        else if(age < 18)
        {
            throw age;
        }
    }
    catch(int age)
    {
        cout<<"\nYou are not eligiblie for voting."<<'\n';
        cout<<"Your age is only "<<age;
    }
    
    return 0;
}