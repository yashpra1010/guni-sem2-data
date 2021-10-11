#include <iostream>
using namespace std;
class Time
{
	int hour1,min1;
	int hour2,min2;
	int hour,min;
    public:

    void input()
    {
	    cout<<"-----Enter first time-----"<<endl;
	    cout<<"Hours: "; cin>>hour1;
	    cout<<"mins: "; cin>>min1;
	    cout<<"-----Enter second time-----"<<endl;
	    cout<<"Hours: "; cin>>hour2;
	    cout<<"mins: "; cin>>min2;
    }

    void sum()
    {
        min=min1+min2;
        hour=hour1+hour2+(min/60);
        min=min%60;
    }
    void display()
    {
        cout<<"Total Time is: "<<hour<<" hours "<<min<<" mins ";
    }
};
int main()
{
    Time obj;
    
    obj.input();
    obj.sum();
    obj.display();

	return 0;
}