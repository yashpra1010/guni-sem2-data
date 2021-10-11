#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char name[50];

    cout<<"\nEnter your name: ";
    cin.getline(name,50);

    name[0]=toupper(name[0]);
    cout<<name[0]<<" ";

    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] == ' ')
        {
            cout<<(char) toupper(name[i+1])<<" ";
        }
    }
    
    return 0;
}