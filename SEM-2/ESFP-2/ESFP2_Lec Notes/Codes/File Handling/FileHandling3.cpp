/*
Ques: Create a file in disk with the name of student. Accept student information like (student name,id,address) from user, and these all information of student should append each and everytime into your file at the time of every execution.
*/

#include <iostream>
#include <fstream>
using namespace std;

class Info{
    public:
        int id;
        string name;
        string address;
        string line=("------------------");

        void getDATA()
        {
            cout<<"Enter name of student: "<<endl;
            cin>>name;
            cout<<"Enter student id: "<<endl;
            cin>>id;
            cout<<"Enter city of student: "<<endl;
            cin>>address;
        }

        void printDATA()
        {
            fstream obj;
            obj.open("E:\\student.txt",ios::app);
            obj<<endl<<name<<endl<<id<<endl<<address<<endl;
            obj<<line;
            obj.close();
        }
};
int main()
{
    Info stu;
    stu.getDATA();
    stu.printDATA();
    return 0;
}