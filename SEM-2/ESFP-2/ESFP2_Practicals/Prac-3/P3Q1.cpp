#include <iostream>
using namespace std;
int main() {
    int quiz,mid_term,final,avg;
    
    cout<<"\nEnter Marks of Quiz: ";
    cin>>quiz;
    cout<<"\nEnter Marks of Mid-Term: ";
    cin>>mid_term;
    cout<<"\nEnter Final Score: ";
    cin>>final;
    
    avg=(quiz+mid_term+final)/3;
    
    if (avg>=90)
    {
        cout<<"\nGrade-A";
    }
    else if (avg<90 && avg>=70)
    {
        cout<<"\nGrade-B";
    }
    else if (avg<70 && avg>=50)
    {
        cout<<"\nGrade-C";
    }
    else
    {
        cout<<"\nGrade-F";
    }
    
    return 0;
}