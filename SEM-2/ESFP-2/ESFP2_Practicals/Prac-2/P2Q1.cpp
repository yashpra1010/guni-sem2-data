#include <iostream>
using namespace std;
int main() {
    float fare, dist;
    cout<<"What distance will you travel?\n";
    cin>>dist;

    if (dist>101)
    {
        fare=dist*1.05;
        cout<<"Fare of distance "<<dist<<" kms: "<<fare<<" Rs";
    }
    else if (dist>=81 && dist<100)
    {
        fare=dist*0.95;
        cout<<"Fare of distance "<<dist<<" kms: "<<fare<<" Rs";
    }
    else if (dist>=61 && dist<=80)
    {
        fare=dist*0.8;
        cout<<"Fare of distance "<<dist<<" kms: "<<fare<<" Rs";
    }
    else if (dist>=41 && dist<=60)
    {
        fare=dist*0.78;
        cout<<"Fare of distance "<<dist<<" kms: "<<fare<<" Rs";
    }
    else if (dist>=21 && dist<=40)
    {
        fare=dist*0.75;
        cout<<"Fare of distance "<<dist<<" kms: "<<fare<<" Rs";
    }
    else {
        fare=dist*0.65;
        cout<<"Fare of distance "<<dist<<" kms: "<<fare<<" Rs";
    }
    return 0;
}