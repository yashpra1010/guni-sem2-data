//STL VECTOR

#include<iostream> 
#include<vector> 
using namespace std; 
int main() 
{ 
    vector <int> v; // zero lengh size vector. 
    v.push_back(10); 
    v.push_back(20); 
    v.push_back(30); 
    v.push_back(40); 

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }

    /* 
    cout<<v[0]<<endl; 
    cout<<v[1]<<endl; 
    cout<<v[2]<<endl; 
    cout<<v[3]<<endl; 
    */

    cout<<"\nRemove last two element from vector."<<endl;
    //pop function
    v.pop_back();
    v.pop_back();

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }

    cout<<"\nEnter number at the beginning of vector list: "<<endl;
    vector <int> ::iterator it;
    it=v.begin();
    v.insert(it,900);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }

    cout<<"\nEnter number at the specified posiotn in vector list: "<<endl;
    vector <int> ::iterator il2;
    il2=v.end();
    v.insert(il2,120);
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }

    return 0; 
}