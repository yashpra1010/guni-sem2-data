#include<iostream> 
using namespace std; 
class student 
{ 
    protected: 
    int roll_no; 
    public: 
    void getData(int x) 
    { 
        roll_no=x; 
    } 
    void putData() 
    { 
        cout<<"\n Student Roll_No is="<<roll_no; 
    }
}; 
class test:public student 
{ 
    protected: 
    float num1, num2; 
    public: 
    void getMarks(float x,float y) 
    { 
        num1=x;
        num2=y; 
    } 
    void ShowData() 
    { 
        cout<<"\n Marks obtaned by Student=";
        cout<<"\n Marks in math="<<num1; 
        cout<<"\n Marks in science="<<num2; 
    } 
};
class sports 
{ 
    protected: 
    float score;
    public: 
    void getScore(float s) 
    { 
        score=s; 
    } 
    void putScore() 
    { 
        cout<<"\n Sports Score="<<score;
    }
}; 
class result:public test,public sports 
{
    float total;
    public: void display();
}; 
void result::display() 
{
    total=num1+num2+score; 
    putData(); 
    ShowData(); 
    putScore(); 
    cout<<"\nTotal Score of student="<<total; 
}
int main() 
{ 
    result obj; 
    obj.getData(101); 
    obj.getMarks(70,80); 
    obj.getScore(80); 
    obj.display(); 
    return 0; 
}