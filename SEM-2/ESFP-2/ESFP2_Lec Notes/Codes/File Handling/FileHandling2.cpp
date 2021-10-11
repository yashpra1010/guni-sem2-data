#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int n;
    char name[20];
    ifstream yash;
    yash.open("E:\\Yash.txt");
    yash>>n>>name; //to read text from file
    cout<<n<<" "<<name; //to show readable file on screen.
    yash.close();
    return 0;
}