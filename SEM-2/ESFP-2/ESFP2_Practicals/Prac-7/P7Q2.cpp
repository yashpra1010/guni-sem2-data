#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"\nThis is class A";
    }
};
class B
{
    public:
    B()
    {
        cout<<"\nThis is class B.";
    }
};
class C:public A
{
    public:
    B obj;
};
int main()
{
    C obj1;
    return 0;
}