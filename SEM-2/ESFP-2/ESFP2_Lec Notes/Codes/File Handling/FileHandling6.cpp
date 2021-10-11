#include<fstream> 
#include<iostream> 
using namespace std; 
int main() 
{ 
    int sum=0, avg=0;
    ofstream out; 
    out.open("D:\\number1.txt"); 
    if(!out) 
    { 
        cout<<"File can not be open"<<endl; 
    } 
    else 
    { 
        for(int i=1;i<=10;i++) 
        { 
            cout<<i<<endl; 
            out<<i<<endl; 
            sum=sum+i; 
        } 
        avg=sum/10; 
        cout<<"\nSum of number:"<<sum; 
        out<<"\nSum of ten number:"<<sum; 
        cout<<"\nAvg of ten number:"<<avg; 
        out<<"\nAvg of ten number:"<<avg; 
        out.close(); 
    } 
    cout<<"\nData successfully write.."; 
    return 0; 
}