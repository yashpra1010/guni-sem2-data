#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
    //base address of block created
    int* ptr;
    int n,i;
    n=5;
    printf("Enter Number Of elements: %d\n",n);
    ptr =(int*)malloc(n*sizeof(int));

    if(ptr=NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
        printf("Memory allocated.\n");
        for (i = 0; i < n; ++i)
        {
            ptr[i]=i+1;
        }
    }
    //print elements of array
    printf("Elements of array are:");
    for (i = 0; i < n; ++i) {
        printf("%d",ptr[i]);
    }
    getch();
    return 0;
}