#include <iostream>
using namespace std;
int main() {
    int arr[3],i,j,temp;
    cout<<"\nEnter any three numbers: ";

    for (i = 0; i < 3; i++)
    {
        cin>>arr[i];
    }

    cout<<"\nYour numbers forward:\n";
    for (i = 0; i < 3; i++) {
      cout<<arr[i]<<endl;
    }
    
    cout<<"\nYour numbers reversed:\n";
    for (i = 2; i >= 0; --i) {
      cout<<arr[i]<<endl;
    }
    return 0;
}