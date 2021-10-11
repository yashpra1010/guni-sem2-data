//Example-1 (Public)
/* #include<iostream>
using namespace std;
class student {
    public:
        int a,b,c;
        void display() {
            cout<<"Enter Two number: ";
            cin>>a>>b;
            c=a+b;
            cout<<"\nSum of two number: "<<c;
        }
};

int main() {
    student obj;
    obj.display();
    return 0;
} */


//Example-2
/* #include<iostream>
using namespace std;
class student {
    public:
        int a,b,c;
        void getData() {
            cout<<"Enter Two number: ";
            cin>>a>>b;
        }
};
class teacher:public student {
    public:
    void display()
    {
        c=a+b;
        cout<<"\nSum of two number: "<<c;
    }
};
int main() {
    teacher obj;
    obj.getData();
    obj.display();
    return 0;
} */

//Example-3 (Protected)
/* #include <iostream>
#include <cstring>

using namespace std;

class student {
    protected:
        char stud_name[20];
        public:
        void setName(char name[20]) {
            strcpy(stud_name,name);
        }
};
class school:public student {
    public:
    void display()
    {
        cout<<stud_name;
    }
};
int main() {
    school obj;
    obj.setName("Yash");
    obj.display();
    return 0;
} */
