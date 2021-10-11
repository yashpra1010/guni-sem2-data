#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int *p,size,i;
    cout<<"Enter the size of array=";
    cin>>size;
    p=(int*) calloc(size, sizeof(int));
    for (i = 0; i < size; i++)
    {
        cin>>p[i];
    }
    for (i = 0; i < size; i++)
    {
        cout<<p[i];
    }
    return 0;
}
