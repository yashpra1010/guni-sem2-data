#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;
int main()
{
    int i,n;
    int *num;

    printf("Input total number of elements(1 to 100):");
    scanf("%d",&n);
    num=(int*) calloc(n, sizeof(int));
    if(num==NULL) {
        printf("No memory is allocated.\n");
        exit(0);
    }
    printf("\n");
    for (i = 0; i < n; ++i)
    {
        printf("Number %d: ",i+1);
        scanf("%d",num+i);
    }
    for (i = 1; i < n; ++i)
    {
        if(*num<*(num+i)) {
            *num=*(num+i);
        }
    }
    printf("The largest number is: %d\n",*num);
    getch();
    return 0;
}