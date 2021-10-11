#include<iostream>
using namespace std;
class OverLoading
{
    public:
    void display()
    {
        cout<<"Yash Prajapati";
    }
    void display(int a)
    {
        cout<<"\nAddition="<<(a+a);
    }
    void display(float b)
    {
        cout<<"\nMultiplication="<<(b*b);
    }
    void display(int a,float b)
    {
        cout<<"\nDivision="<<(a/b);
    }
};
int main()
{
    OverLoading obj;
    obj.display();
    obj.display(20);
    obj.display(50.1f);
    obj.display(15,6.1f);
    obj.display(90,10);
    return 0;
}