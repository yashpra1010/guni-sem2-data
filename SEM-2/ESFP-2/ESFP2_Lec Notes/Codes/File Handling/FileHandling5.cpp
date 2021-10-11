#include<iostream> 
#include <fstream> 
using namespace std; 
class employee 
{ 
    int emp_id; 
    char name[30]; 
    char designation[30]; 
    float emp_sal; 
    public: 
    employee() { } 
    void getData(); 
    void displayData(); 
    }; 
void employee::getData() 
{ 
    cout<<"\nEnter employee ID no: "; 
    cin>>emp_id; 
    cin.ignore();
    cout<<"\nEnter Employee Name: "; 
    cin.getline(name,30); 
    cout<<"\nEnter Employee Designation: "; 
    cin.getline(designation,30); 
    cout<<"\nEnter Employee Salary: "; 
    cin>>emp_sal; 
} 
    
void employee :: displayData()
{ 
    cout<<"\nEmployee ID: "<<emp_id; 
    cout<<"\nEmployee Name: "<<name; 
    cout<<"\nEmployee Designation: "<<designation;
    cout<<"\nEmployee Salary: "<<emp_sal; 
} 

int main() 
{ 
    employee emp[2];
    fstream file; 
    int i; 
    file.open("E:\\employee.txt",ios::out);
    cout<<"\nWriting employee information in file:"; 
    for(i=0;i<2;i++) 
    { 
        emp[i].getData();
        file.write((char *)&emp[i],sizeof(emp[i]));
    } 
    file.close(); 
    file.open("employee.txt",ios::in);
    cout<<"\n Reading employee information :-"; 
    for(i=0;i<2;i++) 
    { 
        file.read((char *)&emp[i],sizeof(emp[i])); 
        emp[i].displayData(); 
    } 
    file.close(); 
    return 0; 
}