#include<iostream> 
#include<map> 
using namespace std; 
int main() 
{ 
    map <int,string> m; 
    m[1]="Gandhi"; 
    m[2]="Jinay"; 
    m[3]="Modi"; 
    m[4]="Khushi"; 
    m[5]="Manushi"; 
    for(int i=1;i<m.size();i++) 
    { 
        cout<<i <<"\t"<<m[i]<<endl; 
    } 
    cout<<"\n Update map data:\n"; 
    m.insert(pair<int,string>(6,"Aashri")); 
    for(int i=1;i<=m.size();i++) 
    { 
        cout<<i <<"\t"<<m[i]<<endl; 
    } 
    return 0; 
}