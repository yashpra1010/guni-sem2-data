/*-----------1-----------*/

#include<iostream>
using namespace std;
class A{
    public :
    A() 
    {
        cout<<"First Constructor"<<endl;
    }
    ~A()
    {
        cout<<"\nFirst Destructor"<<endl;
    }
};
class B : public A{
    public :
    B()
    {
        cout<<"\nSecond Constructor"<<endl;
    }
    ~B()
    {
        cout<<"\nSecond Destructor"<<endl;
    }
};
class C : public B{
    public :
    C()
    {
        cout<<"\nThird Constructor"<<endl;
    }
    ~C()
    {
        cout<<"\nThird Destructor"<<endl;
    }
};
int main()
{
    C obj;
    return 0;
}

/*-----------2-----------*/

/* #include <iostream>
using namespace std;
class Info
{
char* name;
int Number;
public:
void getInfo()
{
cout << "Info::getInfo";
getName();
}
void getName()
{
cout << "Info::getName";
}
};
class Name: public Info
{
char *name;
public:
void getName()
{
cout << "Name::getName";
}
};
int main()
{
Info *P;
Name n;
P = &n;
P->getInfo();
return 0;
} */


/*-----------3-----------*/

/* #include<iostream>
using namespace std;
class base {
int arr[10];
};
class b1: public base { };
class b2: public base { };
class derived: public b1, public b2 {};
int main(void)
{
cout << sizeof(derived);
return 0;
}
 */
