#include <iostream>
using namespace std;

class Government{
    public:
    void Budget()
    {
    cout<<"\nYou will get budget less than 4000 crores.";
    }
};
class Finance : public Government {
    
};
class Defence : public Government {
    
};
class Minister : public Finance,Defence{
    
};
int main()
{
    Minister obj;
    obj.Finance::Budget();
    return 0;
}