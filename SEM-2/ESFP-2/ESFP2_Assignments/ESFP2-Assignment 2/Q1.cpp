/*
Write a function called reversit() that reverses a C-string (an array of char). Use a for loop that swaps the first and last characters, then the second and next-to-last characters, and so on. The string should be passed to reversit() as an argument.
Date : 10/06/2021
*/
#include<iostream>
#include<cstring>

using namespace std;

void reversit(char Str[]);

int main()
{
	char Str[20];
	cout<<"Enter the String : ";
	gets(Str);
	reversit(Str);
	cout<<"\nReversed String : "<<Str;
	return 0;
}

void reversit(char Str[])
{
	char ch;
	int len , j;
	len=strlen(Str);
	j=len-1;
	for(int i=0 ; i<len/2 ; ++i)
	{
		ch=Str[i];
		Str[i]=Str[j];
		Str[j]=ch;
		j--;
	}
}
