#include <cstdlib>
#include <iostream>
using namespace std;

void ShowHeading();
int HighMarks(int stu[4][5]);
int LowMarks(int stu[4][5]);

void displaymenu(){
    cout<<"\n";
    cout<<"========================================================"<<"\n";
    cout<<"                         MENU                                  "<<"\n";
    cout<<"========================================================"<<"\n";
    cout<<"     1.View all student records"<<"\n";
    cout<<"     2.View a student records by ID"<<"\n";
    cout<<"     3.Show the highest and the lowest scores"<<"\n"<<endl;
}

void ShowAll(int stu[4][5]){
 int i,j;

ShowHeading();
 for(i=0;i<4;i++){
   for(j=0;j<5;j++) {
        cout<<stu[i][j]<<"\t\t";
        }
        cout<<"\n";
    }
}

void SearchByID(int stu[4][5]){
     int id,i,j;
     cout<<"Please enter a student's ID:";
     cin>>id;

     for(i=0;i<4;i++){
      if(stu[i][0]==id){
        ShowHeading();
        for(j=0;j<5;j++){
            cout<<stu[i][j]<<"\t\t";   
        }
        cout<<"\n";
      }
     }
}
void HighLow(int stu[4][5]){
    cout<<"The higest final score is:"<<HighMarks(stu);
    cout<<"\n";
    cout<<"The lowest final score is:"<<LowMarks(stu);
    cout<<"\n";
}
void ShowHeading(){
cout<<"=======================================================================\n";
cout<<"StudentID      Quiz1          Quiz2          Mid-term         Final\n";
cout<<"=======================================================================\n";
}

int HighMarks(int stu[4][5]){
    int *max,i;
    max=&stu[0][4];

    for(i=0;i<4;i++)
    {
      if(*max<stu[i][4]){
          *max=stu[i][4];
        }
    }
    return(*max);
}

int LowMarks(int stu[4][5]){
    int *min,i;
    min=&stu[0][4];
    for(i=0;i<4;i++)
    {
      if(*min>stu[i][4])
        {
            *min=stu[i][4];
        }
    }
    return(*min);
}

int main(int argc, char *argv[]) {

int stu[4][5]={{1232,32,34,43,43},{2345,34,34,54,35},{3432,45,54,56,34},{3456,56,34,34,56}};

displaymenu();

int yourchoice;
char confirm;
do
{
cout<<"Enter your choice(1-3):";
cin>>yourchoice;
switch(yourchoice){
 case 1:
    ShowAll(stu);
    break;
 case 2:
    SearchByID(stu);
    break;
 case 3:
    HighLow(stu);
    break;

 default:
    cout<<"invalid";
}
cout<<"Press y or Y to continue:";
    cin>>confirm;
} while(confirm=='y'||confirm=='Y');

  return 0;
}