#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

class FD
{
        int fdno,time;
        float amt, irate, m_amt;
        char nm[20];
    public:
        FD(int fno, int mnt, float am, float rt, char *name)
        {
                fdno=fno;
                time=mnt;
                amt=am;
                irate=rt;
                strcpy(nm, name);
        }
        void display()
        {
                m_amt=amt*pow((1+irate/100), time);
                
                cout<<"\n FdNo.: "<<fdno;
                cout<<"\n Month: "<<time;
                cout<<"\n Amount: "<<amt;
                cout<<"\n Interest rate: "<<irate;
                cout<<"\n Maturity Amount: "<<m_amt;
                cout<<"\n Name: "<<nm;
        }
};

int main()
{
        int fdno, time;
        float amt, irate;
        char nm[20];
        cout<<"\nEnter FD No.: ";
        cin>>fdno;
        cout<<"\nEnter Month: ";
        cin>>time;
        cout<<"\nEnter Amount: ";
        cin>>amt;
        cout<<"\nEnter irate: ";
        cin>>irate;
        cout<<"\nEnter Name: ";
        cin>>nm;
        FD f1(fdno, time, amt, irate, nm);
        f1.display();
        return 0;
}


/* A=P(1+r/n)^n*t.11:03
M = P + (P x r x t/100) */