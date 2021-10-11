#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string numbStr;

    cout<<"\nEnter any number: ";
    cin>>numbStr;

    for (int i = 0; i < numbStr.length(); i++)
    {
        if ((numbStr[i] == '1' || numbStr[i] == '3' || numbStr[i] == '5' || numbStr[i] == '7' || numbStr[i] == '9') && (numbStr[i + 1] == '1' || numbStr[i + 1] == '3' || numbStr[i + 1] == '5' || numbStr[i + 1] == '7' || numbStr[i + 1] == '9')) 
        { 
            numbStr.insert(i+1,"-"); numbStr = numbStr;
        } 
    }
    
    cout<<"\nResult -> "<<numbStr<<endl;

    return 0;
}