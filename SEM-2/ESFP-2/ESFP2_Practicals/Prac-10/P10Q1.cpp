#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int charA=0;
    int charB=0;
    char arr[20];
    char char1;
    char char2;

    cout<<"Enter any string: ";
    cin>>arr;
    cout<<"Enter 1st character: ";
    cin>>char1;
    cout<<"Enter 2nd character: ";
    cin>>char2;

    for (int i = 0; i < 20; i++)
    {
        if (arr[i] == char1)
        {
            charA++;
        }
        if (arr[i] == char2)
        {
            charB++;
        }        
    }
    
    if (charA == charB)
    {
        cout<<"\nTrue";
    }
    else
    {
        cout<<"\nFalse";
    }
    
    return 0;
}