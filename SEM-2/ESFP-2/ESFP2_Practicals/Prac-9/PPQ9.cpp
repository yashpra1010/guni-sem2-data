#include <iostream>
using namespace std;
/*-----1-----*/
/* 
class Calc
{
    private:
    float radius,height;
    public:
    float setdata()
        {
            cout<<"\nEnter the value of radius: ";
            cin>>radius;
            cout<<"\nEnter the value of height: ";
            cin>>height;
        }
    float display_Volume()
        {
            float cy_Vol;
            cy_Vol=3.14*radius*radius*height;
            cout<<"Volume is: "<<cy_Vol;
            return cy_Vol;
        }
};
int main()
{
    Calc *ptr[3];
    Calc obj[3];
    for (int i = 0; i < 3; i++)
    {
        ptr[i]=&obj[i];
        ptr[i]->setdata();
        ptr[i]->display_Volume();
    }   
    return 0;
}
 */
/*-----2-----*/
/* 
int main()
{
int x = 1, y = 3, z = 5;
int *lfc[ ] = {&x, &y, &z};
cout << lfc[1];
return 0;
}
 */
/*-----3-----*/
/* 
int main()
{
char lfc[20];
int i;
for(i = 0; i < 10; i++)
*(lfc + i) = 65 + i;
*(lfc + i) = ' ';
cout << lfc;
return 0;
}
 */

/*-----4-----*/

int main()
{
int i;
char *lfc[] = {"C", "C++", "Java", "VBA"};
char *(*ptr)[4] = &lfc;
cout << ++(*ptr)[2];
return 0;
}