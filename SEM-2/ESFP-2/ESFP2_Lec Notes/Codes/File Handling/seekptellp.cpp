#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    ofstream of;
    of.open("D:\\xyz-1.txt",ios::ate); // opening file 
    cout<<of.tellp(); 
    of<<"This is the example of seekp and tellp method"; 
    cout<<of.tellp(); 
    int a=of.tellp(); 
    of.seekp(a+30); 
    of<<"This is my second line"; 
    cout<<of.tellp(); 
    int b=of.tellp(); 
    of.seekp(b+40); 
    of<<"This is my third sentance"; 
    of.close(); // closing file. 
    cout<<"\n Data written successfully:"; 
    return 0; 
}