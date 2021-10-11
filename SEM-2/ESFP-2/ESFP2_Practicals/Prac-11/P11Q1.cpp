#include <iostream>
#include <fstream>
static int totrec=0;
using namespace std;

void getDATA()
    {
        char name[20];
        int age;
        char lang[20];
        ofstream outfile;
        outfile.open("p11o1",ios::out);
        cout<<"\n\nPlease enter the details as per demand: -";
        cout<<"\nEnter name: ";
        cin>>name;
        outfile<<name<<endl;
        
        cout<<"\nEnter age: ";
        cin>>age;
        outfile<<age<<endl;
        
        cout<<"\nEnter preferred language: ";
        cin>>lang;
        outfile<<lang<<endl;

        totrec=totrec+1;

        outfile.close();
        
    }
void append()
    {
        char name[20];
        int age;
        char lang[20];
        ofstream outfile;
        outfile.open("p11o1",ios::app);
        cout<<"\n\nPlease enter the details as per demand: -";
        cout<<"\nEnter name: ";
        cin>>name;
        outfile<<name<<endl;
        
        cout<<"\nEnter age: ";
        cin>>age;
        outfile<<age<<endl;
        
        cout<<"\nEnter preferred language: ";
        cin>>lang;
        outfile<<lang<<endl;

        totrec=totrec+1;

        outfile.close();
        
    }
void modify()
    {
        char name[20];
        int age;
        char lang[20];
        ofstream outfile;
        outfile.open("p11o1",ios::ate);
        cout<<"\n\nPlease enter the details as per demand: -";
        cout<<"\nEnter name: ";
        cin>>name;
        outfile<<name<<endl;
        
        cout<<"\nEnter age: ";
        cin>>age;
        outfile<<age<<endl;
        
        cout<<"\nEnter preferred language: ";
        cin>>lang;
        outfile<<lang<<endl;

        totrec=totrec+1;

        outfile.close();
    }
void showDATA()
    {

        ifstream infile; 
        infile.open("p11o1",ios::in); 
        const int size=80; 
        char line[size]; 
        int counter=totrec; 
        while(counter > 0) 
        { 
            infile.getline(line,size); 
            
            cout<<"\n\nNAME : "<<line<<endl; 
            infile.getline(line,size); 
            cout<<"AGE : "<<line<<endl; 
            infile.getline(line,size); 
            cout<<"LANGUAGE : "<<line<<endl;
            counter--;
        }
        infile.close();
    }

int main()
{
    while (totrec>=0)
    {
    int choice;
    cout<<"\nChoose your choice: ";
    cout<<"\n1. Scanning initial records";
    cout<<"\n2. Appending records";
    cout<<"\n3. Modifying or append records";
    cout<<"\n4. Viewing records";
    cout<<"\n5. Exit";
    cout<<"\n\nEnter your choice: ";
    cin>>choice;

    switch (choice)
        {
            case 1:
                getDATA();
                break;
            case 2:
                append();
                break;
            case 3:
                modify();
                break;
            case 4:
                showDATA();
                break;
            case 5:
                return 0;
                break;
            default:
                cout<<"ERROR!";
                return 0;
                break;
        }
    }
    return 0;
}
