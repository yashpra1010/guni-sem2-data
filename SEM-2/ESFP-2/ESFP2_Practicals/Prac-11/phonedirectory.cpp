#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class A{
	public:
	long long int num;
	char name[20];
};

fstream fp;
A st;

void first(){
	fp.open("PB.txt",ios::out | ios::binary | ios::app);
	char ch='y';
	while(ch=='y'){
	cout<<"Enter name : ";
	cin>>st.name;
	cout<<"Enter phone no. : ";
	cin>>st.num;
	cout<<endl;
	fp.write((char*)&st,sizeof(st));
    cout<<"Do you want to continue (y/n) : ";
	cin>>ch; 
	cout<<endl;
}
	fp.close();
}

void second(){
	fp.open("PB.txt",ios::in | ios::binary);
	while(fp.read((char*)&st,sizeof(st))){
		cout<<"NAME : "<<st.name<<endl;
		cout<<"PHONE NO. : "<<st.num<<endl;
		cout<<endl;
	}
	fp.close();
}

void third(){
	fp.open("PB.txt",ios::out | ios::in | ios::binary);
	long long int a;
	int clk=0;
	cout<<"Enter the number you want to search : ";
	cin>>a;
	cout<<endl;
	while(fp.read((char*)&st,sizeof(st))){
		if(st.num==a){
		cout<<"NAME : "<<st.name<<endl;
		cout<<"PHONE NO. : "<<st.num<<endl;
		cout<<endl;
		clk=1;
	}
	}
	fp.close();
	if(clk==0)
	{
		cout<<"Number not found";
	}
}

void fourth(){
	fp.open("PB.txt",ios::out | ios::in | ios::binary);
	char a[20];
	int clk=0;
	cout<<"Enter the name you want to search : ";
	cin>>a;
	cout<<endl;
	while(fp.read((char*)&st,sizeof(st))){
		if(strcmp(st.name,a)==0){
		cout<<"NAME : "<<st.name<<endl;
		cout<<"PHONE NO. : "<<st.num<<endl;
		cout<<endl;
		clk=1;
	}
	}
	fp.close();
	if(clk==0)
	{
		cout<<"Data not found";
	}
}

void fifth(){
	fp.open("PB.txt",ios::binary | ios::in | ios::out);
	fp.seekg(0);
	long long int a;
	int clk=0;
	cout<<"Enter number for search : ";
	cin>>a;
	cout<<endl;
	while(fp.read((char*)&st,sizeof(st))){
		if(st.num==a){
		   cout<<"NAME : "<<st.name<<endl;
		   cout<<"PHONE NO. : "<<st.num<<endl;
		   cout<<endl;
		   clk=1;
		   cout<<"**Enter new data to update**"<<endl;
		   cout<<"Enter name : ";
		   cin>>st.name;
		   cout<<endl;
		   cout<<"Enter phone no. : ";
		   cin>>st.num;
		   cout<<endl;
		   fp.seekp(-sizeof(st),ios::cur);		      
           fp.write((char *)&st,sizeof(st));
		}
	}
	fp.close();
	if(clk==0){
		cout<<"Data not found";
	}
	fp.open("PB.txt",ios::binary | ios::in);
	while(fp.read((char*)&st,sizeof(st))){
		cout<<"NAME : "<<st.name<<endl;
	    cout<<"PHONE NO. : "<<st.num<<endl;
		cout<<endl;
	}
	fp.close();
}

int main()
{
	int choice;
	while(1){
	cout<<"**Phone Book**"<<endl;
	cout<<"1) Add New Record"<<endl;
	cout<<"2) Display All Records"<<endl;
	cout<<"3) Search Telephone No."<<endl;
	cout<<"4) Search Person Name"<<endl;
	cout<<"5) Update Telephone No."<<endl;
	cout<<"6) Exit"<<endl<<endl;
	cout<<"Enter your choice : ";
	cin>>choice;
	cout<<endl;
	switch(choice)
	{
		case 1 :
			first();
			break;
			
		case 2 :
			second();
			break;
			
		case 3 :
			third();
			break;
			
		case 4 :
			fourth();
			break;
			
		case 5 :
			fifth();
			break;
			
		case 6 :
		    exit(0);
			
		default :
		    cout<<"Invalid choice";					
	}
}
return 0;	
}