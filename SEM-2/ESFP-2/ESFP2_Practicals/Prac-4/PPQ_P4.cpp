#include <iostream>
#include <cstring>
using namespace std;

class Travelplan
{ 
    long Plancode;
    char Place[21];
    int Number_of_travellers,Number_of_buses;
    public:
    Travelplan( )
        {
            Plancode=1001;
            strcpy(Place,"Agra");
            Number_of_travellers=5;
            Number_of_buses=1;
        }
void NewPlan()
{ 
    cout<<"\nEnter the Plan Code: ";
    cin>>Plancode;
    cout<<"\nEnter the Place to Travel: ";
    fflush(stdin);
    gets(Place);
    cout<<"\nEnter the Number of Travellers: ";
    cin>>Number_of_travellers;
    if(Number_of_travellers>=40)
    {
        Number_of_buses=3;
    }
    else if(Number_of_travellers>=20)
    {
        Number_of_buses=2;
    }
    else
    {
        Number_of_buses=1;
    }
}
void ShowPlan()
{ 
    cout<<"\nThe Plan Code: "<<Plancode;
    cout<<"\nThe Place of Travel: "<<Place;
    cout<<"\nNumber of Travellers: "<<Number_of_travellers;
    cout<<"\nNumber of Buses: "<<Number_of_buses;
}
};

int main()
{
    Travelplan T;
    T.NewPlan();
    T.ShowPlan();
    return 0;
}