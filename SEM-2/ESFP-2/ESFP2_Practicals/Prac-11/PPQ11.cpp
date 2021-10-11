#include <iostream>
#include <fstream>

/* -----2----- */

/* using namespace std;
int main ()
{
int l;
char * b;
ifstream i;
i.open ("find.txt", ios :: binary );
i.seekg (0, ios :: end);
l = i.tellg();
i.seekg (0, ios :: beg);
b = new char [l];
i.read (b, l);
i.close();
cout.write (b, l);
delete[] b;
return 0;
} */

/* -----3----- */

/* using namespace std;
int main ()
{
char fine, course;
cout << "Enter a word: ";
fine = cin.get();
cin.sync();
course = cin.get();
cout << fine << endl;
cout << course << endl;
return 0;
} */