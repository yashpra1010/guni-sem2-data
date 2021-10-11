#include <iostream>
using namespace std;

class A
{
    private:
        int qty;
        float price;
    public:
        A(int a,float b)
        {
            qty=a;
            price=b;
        }
        int display_total_price()
        {
            float total_p=price*qty;
            cout<<"Total Price is: "<<total_p;
            return total_p;
        }
};
int main()
{
    A A1(450,8);
    A *ptr;
    ptr=&A1;
    ptr->display_total_price();
    return 0;
}