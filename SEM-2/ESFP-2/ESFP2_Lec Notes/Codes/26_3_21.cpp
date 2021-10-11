#include<iostream>
using namespace std;
class student
  {
    private:
    int x,y;
    public:
        
   /* student()  // do nothing constructor
    {
        
    }
 */       
    student() // default constructor method.
     {
       x=20;
       y=30;
       cout<<"Value  of x="<<x;
       cout<<"\nValue of y="<<y;
     }
     
     student(int a,int b)
     {
         int c;
         c=a+b;
         cout<<"\nSum of two numbers="<<c;
     }
};
int main()
{
    student A;
student obj(10,20);
student(30,40);
return 0;
}
