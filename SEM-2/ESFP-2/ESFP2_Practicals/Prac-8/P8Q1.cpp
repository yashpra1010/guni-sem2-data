#include <iostream>
using namespace std;

class Animal
{
    public:
    virtual void gettype()
    {
        cout<<"This is ANIMALS class."<<endl;
    }
};
class Cat:public Animal
{
    public:
    void gettype() override
    {
        cout<<"I am Cat."<<endl;
    }
};
class Dog:public Animal
{
    public:
    void gettype() override
    {
        cout<<"I am Dog."<<endl;
    }
};

int main()
{
    Animal A;
    A.gettype();
    Cat C;
    C.gettype();
    Dog D;
    D.gettype();
    return 0;
}