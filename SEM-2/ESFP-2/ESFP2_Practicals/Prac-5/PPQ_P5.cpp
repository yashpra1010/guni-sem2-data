#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

/* =====================1======================= */

/* class date 
{ 
    public:
    int d,m,y,sd,sm,sy,sday,gd;
    int wd[7]={0,1,2,3,4,5,6};
    char wkd[7]={'S','M','T','W','t','F','s'};
    int month[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    
    void accept() {
        cout<<"Enter the Date (dd):- ";
        cin>>d;
        cout<<"Enter the Month (mm):- ";
        cin>>m;
        cout<<"Enter the Year (yyyy):- ";
        cin>>y;
        }
        
    void getTime() {
        time_t now = time(0);
        tm *ltm = localtime(&now); 
        sy=1900 + ltm->tm_year; 
        sm=1 + ltm->tm_mon; 
        sd=ltm->tm_mday; 
        sday= ltm->tm_wday; 

        cout<<sy<<endl; 
        cout<<sm<<endl; 
        cout<<sd<<endl; 
        cout<<sday<<endl;
    }
    
    void calculate() { 
        int i,ctrl=0,ty,tm,td,total;
        int c; 
        for(i=y+1;i<sy;i++){
            if((i%4==0&&i%100!=0)||i%400==0){
                ctrl++;   
            }
        ty=sy-y+1-ctrl;
        }
        for(i=m+1;i<=12;i++) { 
            tm+=day[i]; 
            while(i==2) { 
                if((y%4==0&&y%100!=0)||y%400==0) {
                    tm+=1;   
                }
            break;
            } 
        } 
        for(i=1;i<sm;i++) { 
            tm+=day[i]; 
            while(i==2) { 
                if((sy%4==0&&sy%100!=0)||sy%400==0){ 
                    tm+=1;
                }
                break;
            } 
        } 
        
        td=sd+day[m]-d+1; 
        total=ty*365+ctrl*366+tm+td; 
        gd=total%7; 

        if(gd<sday) { 
            gd=sday-gd; 
            cout<<wkd[gd]<<endl; 
        } 
        else { 
            gd=sday+7-gd;
            cout<<wkd[gd]; 
        } 
    }

    void getYears() { 
        int i,td=gd; 
        cout<<"Repeating Years with the same Weekday are: "<<endl; 
        for(i=y+1;i<=y+100;i++) { 
            if((i%4==0&&i%100!=0)||i%400==0) {
                td+=2; 
            }
            else {
                td+=1; 
                td=td%7;
            }
            if(td==gd) {
                cout<<i<<endl;
            }
        } 
    }
}; 
 
int main() {
    fflush(stdin);
    date ob;
    ob.accept();
    ob.getTime();
    ob.calculate();
    ob.getYears();
} */
 
/* =====================2======================= */

/* void Encrypt(char T[])
{
for (int i = 0; T[i] != '\0'; i += 2)
if (T[i] == 'A' || T[i] == 'E')
T[i] = '#';
else if (islower(T[i]))
T[i] = toupper(T[i]);
else
T[i] = '@';
}
int main()
{
char text[]="SaVE EArtH";
Encrypt(text);
cout << text << endl;
return 0;
} */

/* =====================3======================= */

/* int main()
{
int num[]={1,2,3,4,5,6};
num[1]==num[1] ? cout<<"Success" : cout<<"Error";
} */

/* =====================4======================= */
/* #include <iostream>
#include <string>
using namespace std;
string Insert_dash(string num_str) {
    string result_str = num_str; 
    for (int x = 0; x < num_str.length() - 1; x++) { 
        if ((num_str[x] == '1' || num_str[x] == '3' || num_str[x] == '5' || num_str[x] == '7' || num_str[x] == '9') && (num_str[x + 1] == '1' || num_str[x + 1] == '3' || num_str[x + 1] == '5' || num_str[x + 1] == '7' || num_str[x + 1] == '9')) 
        { 
            result_str.insert(x+1,"-"); num_str = result_str;
        } 
    } 
    return result_str; 
    } 
    
int main() { 
    cout << "\nOriginal number-1345789 : Result-> "<< Insert_dash("1345789") << endl;
    return 0;
} */

/* =====================5======================= */

void display(int A[10][10],int m, int n)
{
    for(int i=0; i<m; i++)
        {
        for(int j=0; j<n; j++)
        {
            cout<<" "<<A[i][j];
            cout<<"\n";
        }
        }
}
int main(){
    display(*a,*b);
}