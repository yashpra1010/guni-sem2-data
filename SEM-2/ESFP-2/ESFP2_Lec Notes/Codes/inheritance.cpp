#include<iostream>
using namespace std;
class HIExample
{ 
    public:
        int a,b,c;
        void getData()
        { 
            cout<<"\n Enter two number="; 
            cin>>a>>b; 
            cout<<"\n Sum of two number="<<(a+b); 
            
        }
}; 
class B:public HIExample 
{ 
    public: 
        void Bfunction() 
        { 
            cout<<"\n Enter two number=";
            cin>>a>>b; 
            cout<<"\nMultiplication of two number="<<(a-b); 
        } 
};
class C:public HIExample 
{ 
    public: 
        int num,num2; 
        void Cfunction() 
        { 
            cout<<"\nEnter two number="; 
            cin>>num>>num2; 
            c=num+num2; 
            cout<<"\n Division of two number="<<c;
        } 
}; 
class D:public C 
{ 
    public: 
    int x; 
    public: void Dfunction() 
    { 
        cout<<"\n Enter value of x="; 
        cin>>x; x=(x*x); 
        cout<<"\nSquare value of a="<<x; 
    } 
};
int main() 
{ 
    C obj; 
    obj.getData(); 
    obj.Cfunction(); 
    B ob; 
    ob.getData(); 
    ob.Bfunction(); 
    D obj2; 
    obj2.Cfunction(); 
    obj2.Dfunction(); 
    return 0; 
}