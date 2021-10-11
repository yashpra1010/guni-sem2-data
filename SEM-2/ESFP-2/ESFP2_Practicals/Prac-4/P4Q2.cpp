#include <iostream>
#include <cstring>

using namespace std;

class plant {
    public:
        int plant_code;
        char plant_name[50];
        char plant_type[50];
        float price;
    public:
        plant(int pcode, char *pname,char *ptype, float pprice) {
            plant_code=pcode;
            strcpy(plant_name,pname);
            strcpy(plant_type,ptype);
            price=pprice;
            }
            void input();
            void display();

            plant(){}
};

void plant::input(){
    cout<<"\nPlant code: ";
    cin>>plant_code;
    cout<<"Plant Name: ";
    cin>>plant_name;
    cout<<"Plant Type: ";
    cin>>plant_type;
    cout<<"Plant Price: ";
    cin>>price;
}

void plant::display(){
    cout<<"\n===============================";
    cout<<"\nPlant code: "<<plant_code;
    cout<<"\nPlant Name: "<<plant_name;
    cout<<"\nPlant Type: "<<plant_type;
    cout<<"\nPlant Price: "<<price;
    cout<<"\n===============================\n";
}
int main() {
    int count,i;
    cout<<"\nEnter no. of plant details you want: ";
    cin>>count;
    for (i = 0; i < count; i++)
    {
        plant p(p.plant_code, p.plant_name, p.plant_type, p.price);
        p.input();
        p.display();
    }
    return 0;
}