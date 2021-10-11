/*-----1-----*/
/*
Q1 - Implement a program in c++ to access private member through friend modifier
*/

#include <iostream>
using namespace std;

class PracExam
{
private:
    int thread;
    int core;
public:
    void getPCdetails(){
        cout<<"Enter No. Of cores in processor: ";
        cin>>core;
        cout<<"Enter No. Of threads in processor: ";
        cin>>thread;
    }
    friend void showPC(PracExam);
};
void showPC(PracExam P){
    cout<<"\nNo. of cores are "<<P.core<<endl;
    cout<<"No. of threads are "<<P.thread<<endl;
}
int main(){
    PracExam obj;
    obj.getPCdetails();
    showPC(obj);
    return 0;
}

/*-----2-----*/
/*
Q2 - Implement a program in C++ to implement multilevel inheritance for classes India, Gujrat and Gandhinagar.
*/

/* #include <iostream>
using namespace std;

class India
{
public:
    void india(){
        cout<<"I live in INDIA"<<endl;
    }
};
class Gujarat:public India{
    public:
    void Guj(){
        cout<<"I live in GUJARAT"<<endl;
    }
};
class Gandhinagar:public Gujarat{
    public:
    void gandhinagar(){
        cout<<"I live in GANDHINAGAR"<<endl;
    }
};
int main(){
    Gandhinagar G;
    G.india();
    G.Guj();
    G.gandhinagar();
    return 0;
} */