/* #include <iostream>
using namespace std;
int main() {
    int n;
    for(;;) {
        cout<<"Enter any positive number: ";
        cin>>n;
        if (n<0)
        {
            cout<<"This program will not accept any negative number...";
            break;
        }
    }
} */

//this can also be done without for loop by using goto statement

/* #include <iostream>
using namespace std;
int main() {
    int n;
    p:
    cout<<"Enter any positive number: ";
    cin>>n;
    if (n>=0) {
        goto p;
    }
    else {
        cout<<"This program will not accept any negative number...";
    }
} */

//this can also be done without for loop by using do-while

/* #include <iostream>
using namespace std;
int main() {
    int n;
    do{
        
        cout<<"Enter any positive number: ";
        cin>>n;
        if (n<0)
        {
            cout<<"This program will not accept any negative number...";
            break;
        }
    }while(n>0);
} */