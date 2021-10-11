#include <iostream>
using namespace std;

class Shape
{
    public:
    virtual void CalcArea()=0;
};
class SquareCircle:public Shape
{
    public:
    int l,r;
    void CalcArea() override
    {
        float C_Area,S_Area;
        cout<<"\nEnter side of Square: ";
        cin>>l;
        
        cout<<"\nEnter radius of Circle: ";
        cin>>r;

        C_Area=3.14*r*r;
        S_Area=l*l;

        cout<<"\nArea of Circle: "<<C_Area;
        cout<<"\nArea of Square: "<<S_Area;
    }
};
int main()
{
    SquareCircle SC;
    SC.CalcArea();
    return 0;
}