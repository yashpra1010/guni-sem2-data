#include <iostream>
using namespace std;
class MyFather{
    public:
    void F(){
        cout<<"\nFather Name: Prakash";
        cout<<"\nEye Color: Green";
    }
};
class MyMother{
    public:
    void M(){
        cout<<"\nMother Name: Sangita";
        cout<<"\nEye Color: Dark-Brown";
    }
};
class MySelf:public MyFather{
    public:
    void Y(){
        cout<<"\nMy Name: Yash";
        cout<<"\nEye Color: Dark-Brown";
    }
};
class MySister:public MyMother,MyFather{
    public:
    void X(){
        cout<<"\nSister Name: XYZ";
        cout<<"\nEye Color: Black";
    }
};

int main(){
    MySelf obj;
    obj.F();
    obj.Y();
    MySister obj1;
    obj1.M();
    obj1.X();
    return 0;
}