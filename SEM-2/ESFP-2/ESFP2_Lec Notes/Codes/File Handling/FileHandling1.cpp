// To create and write text into a file use ofstream.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int n;
    char name[20];
    ofstream yash;
    yash.open("E:\\Yash.txt");
    cout<<"Enter your ID and name:";
    cin>>n>>name; // input text from keyboard.
    yash<<n<<" "<<name; // output into file.
    yash.close();
    return 0;
}