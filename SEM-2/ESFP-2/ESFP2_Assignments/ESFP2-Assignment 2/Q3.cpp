#include<iostream>
#include<string.h>

using namespace std;

class subject
{
	char sub[5][20];
	char (*ptr)[20] = sub;
	public : 
		void input()
		{
			cout<<"Enter 5 Subject name.\n";
			for(int i=0 ; i<5 ; ++i)
			{
				cout<<"Subject "<<i+1<<" : ";
				gets(sub[i]);
			}
		}
		
		void sort()
		{
			char ch[20];
			for(int i=0 ; i<5 ; ++i)
			{
				for(int j=0 ; j<5 ; ++j)
				{
					if(strcmp(*(ptr+j),*(ptr+i))>0)
					{
						strcpy(ch,*(ptr+i));
						strcpy(*(ptr+i),*(ptr+j));
						strcpy(*(ptr+j),ch);
					}
				}
			}	
		}
		
		void display()
		{
			for(int i=0 ; i<5 ; ++i)
			{
				cout<<sub[i]<<" , ";
			}
		}
};

int main()
{
	subject s;
	s.input();
	s.sort();
	s.display();
	return 0;
}
