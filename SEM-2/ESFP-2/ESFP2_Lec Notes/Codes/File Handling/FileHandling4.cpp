// Ex:4:File handling program with class Student Information.
#include<iostream> 
#include <fstream> 
using namespace std; 
class student 
{ 
    int roll; 
    char name[30]; 
    float marks; 
    public: 
    student() { } 
    void getData(); 
    void displayData(); 
    }; 
void student::getData() 
{ 
    cout<<"\n Enter Roll no="; 
    cin>>roll; 
    cin.ignore(); // Ignore the newline char inserted when you press enter.
    cout<<"Enter Name="; 
    cin.getline(name,30); 
    cout<<"Enter Marks="; 
    cin>>marks; 
} 
    
void student :: displayData()
{ 
    cout<<"\n Roll No="<<roll <<endl; 
    cout<<"Name="<<name<<endl; 
    cout<<"Marks="<<marks<<endl; 
} 

int main() 
{ 
    student s[2];// array of three student objects 
    fstream file; 
    int i; 
    file.open("E:\\object.txt",ios::out); // : FFW 
    cout<<"\nWriting student information in file:"; 
    for(i=0;i<2;i++) 
    { 
        s[i].getData();
        file.write((char *)&s[i],sizeof(s[i])); // WOTF. 
    } 
    file.close(); 
    file.open("object.txt",ios::in); //reading
    cout<<"\n Reading student information :-"; 
    for(i=0;i<2;i++) 
    { 
        file.read((char *)&s[i],sizeof(s[i])); 
        s[i].displayData(); 
    } 
    file.close(); 
    return 0; 
}