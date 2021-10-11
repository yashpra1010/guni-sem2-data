#include<iostream>
using namespace std;
class MinusOP
{
    public:
    int x;
    void showdata(int a)
    {
        x=a;
    }
        void display()
        {
            cout<<"Value of x: "<<x;
        }
        friend void operator -(MinusOP &obj)
        {
            obj.x=-obj.x;
            cout<<"\nValue of x: "<<obj.x;
        }
};
int main()
{
    MinusOP obj1;
    obj1.showdata(10);
    obj1.display();
    operator -(obj1);
    return 0;
}