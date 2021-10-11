#include <iostream>
using namespace std;

int main() {
    int mat[5][5];
    int i,j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if(i>j) {
                mat[i][j]=-1;
            }
            else if (i<j)
            {
                mat[i][j]=1;
            }
            else {
                mat[i][j]=0;
            }
            
        }
        
    }
    
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}