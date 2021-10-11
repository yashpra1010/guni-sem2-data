/*-----1-----*/
/* 
#include<iostream>
#include<conio.h>
using namespace std;
int main( )
{
int mat1 [3][3], mat2[3][3],mat3[3][3], i ,j, k, sum;
cout<<"\nEnter values for first 3 x 3 matrix:\n";
for ( i = 0 ; i <= 2 ; i++ )
{
for (j = 0 ; j <= 2 ; j++ )
cin>>mat1 [i][j] ;
}
cout<<"\n Enter values for second 3 x 3 matrix:\n";
for ( i = 0 ; i <= 2 ; i++ ){
for ( j = 0 ; j <= 2 ; j++ )
cin>>mat2[i][j] ;
}
cout<<"\n The first 3 x 3 matrix entered by you is:\n";
for ( i = 0 ; i <= 2 ; i++ )
{
for ( j = 0 ; j <= 2 ; j++ )
cout<<"\t"<< mat1[i][j] ;
cout<<"\n";
}
cout<<"\n the second 3 x 3 matrix entered :\n";
for ( i = 0 ; i <= 2 ; i++ )
{
for ( j = 0 ; j <= 2 ; j++ )
cout<<"\t"<< mat2[i][j] ;
cout<<"\n";
}
for ( i = 0 ; i <= 2 ; i++ )
{
for ( j = 0 ; j <= 2 ; j++ )
{
sum = 0;
for ( k = 0 ; k <=2 ; k++ )
sum = sum + mat1 [i][k] * mat2[k][j];
mat3[i][j] = sum ;
}
}
cout<<"\nThe product of the above two matrices is:\n";for ( i = 0 ;i<= 2 ; i++ )
{
for ( j = 0 ; j <= 2 ; j++ )
cout<<"\t"<<mat3[i][j] ;
cout<<"\n";
}
cout<<"\n Press any key to exit.";
return 0;
} */

/*-----2-----*/

/* #include <iostream>
using namespace std;
template <typename T>
void fun(const T&x)
{
static int count = 0;
cout << "x = " << x << " count = " << count << endl;
++count;
return;
}
int main()
{
fun<int> (1);
cout << endl;
fun<int>(1);
cout << endl;
fun<double>(1.1);
cout << endl;
return 0;
} */

/*-----3-----*/

/* #include<iostream>
#include<stdlib.h>
using namespace std;
template<class T, class U, class V=double>
class A {
T x;
U y;
V z;
static int count;
};
int main()
{
A<int, int> a;
A<double, double> b;
cout << sizeof(a) << endl;
cout << sizeof(b) << endl;
return 0;
}
 */