#include <iostream>
using namespace std;

class A { 
    private:
        void FunA()
        {
            cout<<"\nPrivate Member of class A.";
        }        
         
        friend void getData();
};

class B {
    private:
        void FunB()
        {
            cout<<"\nPrivate Member of class B.";
        } 
        friend void getData();
};

void getData() {
    A Aobj;
    Aobj.FunA();
    B Bobj;
    Bobj.FunB();
}

int main() {
    getData();
    return 0;
}