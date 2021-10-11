/* Q.1: Make a template program in C++, where you have to accept info from user like (stud_id,name,course,stream). Display all these info which you have taken from user at runtime with the help of class and function with parameter template. */

/*
//using function template
#include<iostream>
using namespace std;
template <typename Y,typename P>
void fun(Y i,P n,P c,P s)
{
    cout<<"ID: "<<i<<endl;
    cout<<"Name: "<<n<<endl;
    cout<<"Course: "<<c<<endl;
    cout<<"Stream: "<<s<<endl;
}
int main()
{
    int id;
    char name[30],course[30],stream[30];
    cout<<"Enter ID: ";
    cin>>id;
    fflush(stdin);
    cout<<"Enter name: ";
    cin.getline(name,30);
    fflush(stdin);
    cout<<"Enter course: ";
    cin.getline(course,30);
    fflush(stdin);
    cout<<"Enter stream: ";
    cin.getline(stream,30);
    fun(id,name,course,stream);
    return 0;
} */
/* 
//using class template
#include <iostream>
using namespace std;
template <class Y, class P>
class A
{
public:
    Y i;
    P n, c, s;
    A(Y i, P n, P c, P s)
    {
        cout << "ID: " << i << endl;
        cout << "Name: " << n << endl;
        cout << "Course: " << c << endl;
        cout << "Stream: " << s << endl;
    }
};
int main()
{
    int id;
    char name[30], course[30], stream[30];
    cout << "Enter ID: ";
    cin >> id;
    fflush(stdin);
    cout << "Enter name: ";
    cin.getline(name, 30);
    fflush(stdin);
    cout << "Enter course: ";
    cin.getline(course, 30);
    fflush(stdin);
    cout << "Enter stream: ";
    cin.getline(stream, 30);
    A<int, string> obj(id, name, course, stream);
    return 0;
} */

/* Q.2: Make a file handling in c++, where you have to take information (emp_id, name, designation,salary) from user. Follow the following instruction choice in program.
    (a)Insert info of emp.
    (b)Display info of emp.
    (c)Search emp info with ID/Name.
    (d)Update emp info in file. */


#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;
struct student
{
    int id;
    char name[20];
    char designation[30];
    float salary;
};
int main()
{
int choice;
ofstream  fbout;
ifstream fbin;
fstream fbin1;
student st;
char ch='y';
while(ch=='y')
{
    char ch;
cout<<"Enter your choice\n\n";
cout<<"1) Insert information of emp\n";
cout<<"2) Display information of emp\n";
cout<<"3) Search emp information with id or name\n";
cout<<"4) Update records\n";
cout<<"Enter your choice : ";
cin>>choice;

switch (choice)
{
 case 1:
        fbout.open("employee.dat",ios::binary |ios::out);
        if(!fbout)
        {
            cout<<"Error in opening file";
        }
        else
        {
            char ch='y';
            while(ch=='y')
            {
            cout<<"Enter ID:"; 
            cin>>st.id;
            cout<<"Enter Name:"; 
            cin>>st.name;
            cout<<"Enter Designation:"; 
            cin>>st.designation;
            cout<<"Enter Salary:"; 
            cin>>st.salary;
            fbout.write((char *)&st, sizeof(st));
            cout<<"\n Want to add more record  (y/n) :";
            cin>>ch;
            }
            fbout.close();
        }
        break;

case 2: fbin.open("employee.dat",ios::binary | ios::in);
        if(!fbin)
        {
            cout<<"file not found";
        }
        else
        {
            while(fbin.read((char*)&st,sizeof(st)))
            {
                cout<<st.id <<"\t"<<st.name <<"\t" <<st.designation<<"\t"<<st.salary<<endl;
            }
            fbin.close();
        }
        break;
        

case 3: fbin.open("employee.dat",ios::binary | ios::in|ios::out);
        if(!fbin)
        {
            cout<<"file not found";
        }
        else
        {
            int mn,srh=0;
            cout<<"Enter ID to be searched:";
            cin>>mn;          
            while(fbin.read((char*)&st,sizeof(st)))
            {
                if(st.id==mn)
                {
                  cout<<st.id <<"\t"<<st.name <<"\t" <<st.designation<<"\t"<<st.salary<<endl;
                  srh=1;
                }               
            }
            fbin.close();
            if(srh==0)
            {
              cout<<"Not found";
            }
        }
        break;
case 4: fbin1.open("employee.dat",ios::binary | ios::in|ios::out);
        fbin1.seekg(0);
        if(!fbin1)
        {
            cout<<"file not found";
        }
        else
        {
            int mn,srh=0;
            cout<<"Enter ID to be searched:";
            cin>>mn;           
            while(fbin1.read((char*)&st,sizeof(st)))
            {
                if(st.id==mn)
                {
                  cout<<st.id <<"\t"<<st.name <<"\t" <<st.designation<<"\t"<<st.salary<<endl;
                  srh=1;
                
                cout<<"\nEnter new  value to update:";
                cout<<"Enter ID:"; 
                cin>>st.id;
                cout<<"Name:"; 
                cin>>st.name;
                cout<<"designation:"; 
                cin>>st.designation;
                cout<<"salary:";
                cin>>st.salary;
                fbin1.seekp(-sizeof(st),ios::cur);
                
                fbin1.write((char *)&st, sizeof(st));
                
                }
            }
fbin1.close();
            
            if(srh==0)
            {
              cout<<"Not found";
            }
        fbin1.open("employee.dat",ios::binary | ios::in);
        if(!fbin1)
        {
            cout<<"file not found";
        }
        else
        {
            while(fbin1.read((char*)&st,sizeof(st)))
            {
                cout<<st.id <<"\t"<<st.name <<"\t" <<st.designation<<"\t"<<st.salary<<endl;
            }
            fbin1.close();
        }
    }
    break;
}
    return 0;
}
}
