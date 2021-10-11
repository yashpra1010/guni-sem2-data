/*----------1----------*/

#include <iostream>
using namespace std;
class Apple
{
    public:
        void print()
        {
            cout<<"Apple";
        }
};
class Orange
{
    public:
        Orange()
        {
            cout<<"Orange\n";
        }
        void abc(Apple a)
        {
            cout<<"Hello\n";
            a.print();
        }
        void Display()
        {
            cout<<"Display Method";
        }
};
int main()
{
    Orange b;
    Apple a;
    b.abc(a);
    return 0;
}


/*----------2----------*/
/* 
#include<iostream>
using namespace std; 
int fun()
{
    return 1;
}
float fun1()
{
    return 10.23;
}
 
int main()
{
     cout<<fun()<<"  ";
     cout<<fun1()<<"  ";
}
 */

/*----------3----------*/
/* 
#include <iostream>
using namespace std;
int gValue=10;
void extra()
{
cout << gValue << ' ';
}
int main()
{
extra();
{
int gValue = 20;
cout << gValue << ' ';
cout << gValue << ' ';
}
}
 */