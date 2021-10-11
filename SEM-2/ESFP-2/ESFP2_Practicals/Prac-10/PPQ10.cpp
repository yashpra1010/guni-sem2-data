/* -----1----- */
/* 
#include <bits/stdc++.h>
using namespace std;

bool Anagram(string str1, string str2)
{
   
    int n1 = str1.length();
    int n2 = str2.length();
  
    if (n1 != n2)
    {
        return false;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
  
    if(str1.compare(str2))
    {
        return true;
    }
    
    return true;
}

int main()
{
    string str1;
    string str2;

    cout<<"\nEnter first word: ";
    cin>>str1;
    cout<<"\nEnter second word: ";
    cin>>str2;
  
    if (Anagram(str1, str2))
    {
        cout << "\nTrue";
    }    
    else
    {
        cout << "\nFalse";
    }
    return 0;
}
 */
/* -----2----- */

/* #include <iostream>
#include <cstring> 
using namespace std; 
int main () { 
char str1[10] = "Hello"; 
char str2[10] = "World"; 
char str3[10]; 
int len ; 
strcpy( str3, str1);
strcat( str1, str2); 
len = strlen(str1); 
cout << len << endl; 
return 0;
} */

/* -----3----- */

/* #include <iostream> 
#include <string> 
using namespace std; 
int main () 
{ 
    string str ("nobody does like this"); 
    string key ("nobody"); 
    size_t f; 
    f = str.rfind(key); 
    if (f != string::npos) 
    str.replace (f, key.length(), "everybody"); 
    cout << str << endl; 
    return 0; 
}  */

/* -----4----- */

/* #include <iostream>
#include <string>
using namespace std;
int main() {
string str = {"Steve jobs"};
cout << str.capacity() << "\n";
return 0;
} */
