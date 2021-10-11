#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>
using namespace std;
int main() {
    int n;
    char *name;
    cout<<"Enter a size of string"<<endl;
    cin>>n;
    name=(char*) malloc(n*sizeof(char));
    cout<<"Enter a string=";
    fflush(stdin); //buffered memory is cleared
    gets(name);
    cout<<"You entered= "<<name<<endl;
    
    cout<<"Enter resize of string length: ";
    cin>>n;
    name=(char*)realloc(name, sizeof(char));
    
    cout<<"Enter a string: ";
    fflush(stdin); //buffered memory clear
    gets(name);
    cout<<"\nYou entered="<<name<<endl;
    free(name);
    getch();
    return 0;
}

/* 
    int *p;
    p=new int;
    *p=500;
    cout<<"value in p="<<*p<<endl;
    delete p;
    cout<<"value after delete="<<*p;
    return 0;
 */
