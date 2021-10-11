#include<iostream>  
using namespace std;  
/* -----1----- */

/* class Yash  
{  
    public:  
    Yash()  
{  
    cout << "\nConstructor Called";
}  
 virtual ~Yash()
{  
    cout << "\nDestructor Called";
}  
};  

class Derived: public Yash   
{  
    public:  
    Derived()
{  
    cout << "\nDerived Constructor called." ;
}  
 ~Derived()
{  
    cout << "\nDerived Destructor called.";
}         
};  
int main()  
{  
    Yash *p = new Derived; 
    delete p; 
}  */
/* -----2----- */

/* class Base{
public:
void f(){
cout<<"Base::f()"<<endl;
}
};
class Derived:public Base{
public:
void f(){
cout<<"Derived::f()"<<endl; } }; int main(){ Base *d = new Derived(); d->f();
return 0;
}
 */
/* -----3----- */

/* class A{
public:
void f(){
cout<<"A::f()"<<endl;
}
};
class B:public A{
public:
void fb(){
cout<<"A::fb()"<<endl;
}
};
class C:public A{
public:
void fc(){
cout<<"A::fc()"<<endl;
}
};
class D: public B,public C{
public:
void fd(){
cout<<"A::fd()"<<endl;
}
};
int main(){
D obj;
obj.f();
return 0;
} */
