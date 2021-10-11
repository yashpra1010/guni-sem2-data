#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    char a[30];
    int code,i,l;
    cout<<"\nInput: ";
    gets(a);
    cout<<"\n\nInput: "<<a;    
    l=sizeof(a);
	for (i = 0; i < l; i++)
	{
		code = int(a[i]);

		if (code == 122)
		{
			a[i] = char(97);
		}
		else if (code == 90)
		{
			a[i] = char(65);
		}
		else if (code >= 65 && code <= 90 || code >= 97 && code <= 122)
		{
			a[i] = char(code + 1);
		}
	}
    cout<<"\nOutput: "<<a;
	return 0;
}