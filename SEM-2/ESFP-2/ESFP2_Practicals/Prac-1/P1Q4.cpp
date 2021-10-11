/* #include <iostream>
#include <cstring>
using namespace std;
struct student {
    char name[10];
    int m[3];
    int total;
    char result[5];
}*p,*s;

int main() {
    int i,j,l,num,size;
    cout<<"Enter the no. of students: ";
    cin>>num;
    p=(struct student*)malloc(num*sizeof(struct student));
    size=num*3;
    s=p;
    for (i = 0; i < num; i++)
    {
        cout<<"Enter a name: ";
        scanf("%s",&p->name);
        p->total=0; l=0;
        for (j = 0; j < 3; j++)
        {
            one:printf("Enter Marks of %d subject: ",j+1);
            scanf("%d",&p->m[j]);
            if ((p->m[j])>100)
            {
                printf("Wrong Value Entered.\n");
                goto one;
            }
            p->total+=p->m[j];
            if((p->m[j])<40) {
                l=1;
            }
            if(l==0) {
                strcpy(p->result,"PASS");
            }
            else {
                strcpy(p->result,"FAIL");
            }
            p++;
        }   
    }
    for(i=0;i<size;i++) {
        printf("\n%s\t%s",s->name,s->result);
        s++;
    }
    return 0;
} */

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <conio.h>
using namespace std;

struct student
{
	char name[10];
	int m[3];
	int total;
	char result[5];
}*p,*s;

int main()
    {
     int i,j,l,n;
      cout<<"Enter the no. of students : ";
     cin>>n;
      p=(struct student*)malloc(n*sizeof(struct student));
      s=p;
      for(i=0;i<n;i++)
  {
     cout<<"Enter a name : ";
     scanf("%s",&p->name);
     p-> total=0;l=0;
     for(j=0;j<3;j++)
     {
      one:
      cout<<"Enter Marks of "<<j+1<<" Subject : ";
      scanf("%d",&p->m[j]);
      if((p->m[j])>100)
      {
        cout<<"Wrong Value Entered";
        goto one;
     }
       p->total+=p->m[j];
       if(p->m[j]<40)
       l=1;
     }
    if(l==0)
   strcpy(p->result,"PASS");
    else
      strcpy(p->result,"FAIL");
  p++;
     }
     for(i=0;i<n;i++)
    {
     printf("\n%s\t%s",s->name,s->result);
     s++;
    }
    getch();
    return 0;
}