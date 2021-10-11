#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>

using namespace std;

/*=================================================================================================
								FUNCTION DECLARATIONS
=================================================================================================*/

void count_123(); //counting character , blank space , punctuators
void count_4();	  //counting artical
void count_5();	  //counting pronouns , interrogatve , adverb
void count_6();	  //counting uppercase and lowercase
void count_7();	  //counting vowels and consontant
void count_8();	  //counting word with atleast 2 vowels

/*================================================================================================
						  SPECIFIC TASK FUNCTION DECLARATIONS
================================================================================================*/

void st_1();	//changing 'is' to 'was' and counting no of is
void st_2();	//changing "space" to '$' and counting no of space
void st_3();	//changing 'lowwercase alphabet' to 'uppercase alphabet'and counting no of lowwercase alphabet

/*================================================================================================
									MAIN FUNCTION
================================================================================================*/

int main()

{
	FILE *fp;
	int n , countpara=1;
	char name[100];
	//System("cls");
	fp=fopen("D:\\xyz.txt","w");
	if (fp==NULL)
	{	
		printf("File does not exist");
		return 0;	
	}
	printf("Enter no of lines you want to enter: ");
	cin>>n;
	cout<<"==============================| E N T E R   Y O U R   T E X T |==============================\n";
	//cout<<"1";
	gets(name);
	gets(name);

	//count_9 counting Paragraph 
	if(strcmp(name,"\0")==0)	
	{
		countpara++;
	}
	fprintf(fp,"%s\n",name);
	for(int i=1 ; i<n ; ++i)
	{
		//cout<<i+1;
		gets(name);
		if(strcmp(name,"\0")==0)
		{	
			countpara++;
		}
		fprintf(fp,"%s\n",name);
	}
	fclose(fp);
	/*----------end of count_9----------*/
	system("CLS");
	cout<<"========================| S O L U T I O N |=============================";
	count_123();
	count_4();
	count_5();
	count_6();
	count_7();
	count_8();
	cout<<"\nNo of Paragraph are : "<<countpara;
	cout<<"\n\n===============> Specific task <===============\n";
	st_1();
	st_2();
	st_3();
	// Printing the content of the Output file
	cout<<"\n\n===============> Output .txt File <===============\n\n";
    char ch;
	fp=fopen("D:\\xyz.txt" , "r");
    while (1) {
        ch = fgetc(fp);
        if (ch == EOF) {
            break;
        }
        printf("%c", ch);
    }
    fclose(fp);
	return 0;
}

/*================================================================================================
								FUNCTION DEFINATION 
================================================================================================*/

void count_123()	//counting character , blank space , punctuators
{
	int countchar=0 , countspace=0 , countpunct=0;
	char ch;
	FILE *fp;
	fp=fopen("D:\\xyz.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch==' ')
		{
			countspace++;
		}
		else if(ch==39||ch==44||ch==34||ch==46)//39-' || 44-, || 34-" || 46-.        
		{
			countchar++;
			countpunct++;
		}
		else if(ch=='\n')
		{
			
		}
		else 
		{
			countchar++;
		}
	}
	fclose(fp);
	cout<<"\nNo of Characters are : "<<countchar;
	cout<<"\nNo of Spaces are : "<<countspace;
	cout<<"\nNo of Punction are : "<<countpunct;
}

void count_4()	//counting artical
{
	char ch , word[20];
	int i=0 , countartical=0;
	FILE *fp;
	fp=fopen("D:\\xyz.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch==' ' || ch=='\0' || ch=='\n')
		{
			word[i]='\0';
			i=0;
			//count=0;
			if(strcmp(word, "an") == 0 || strcmp(word, "a") == 0)
			{
				countartical++;
				//strcpy(word, "was");
			}
			//count=0;
			//fprintf(ofp, "%s%c", word , ch);
		}
		else
		{
			word[i]=ch;
			++i;
		}
	}
	fclose(fp);
	cout<<"\nNo of Artical are : "<<countartical;	
}

void count_5()	//counting pronouns , interrogatve , adverb
{
	int countpro=0 , countintro=0 , countadverb=0 , len=0; 
	char pronous[24][5]={"I" , "i" , "He" , "he" , "Him" , "him" , "Her" , "her" , "It" , "it" , "Me" , "me" , "She" , "she" , "Them" , "them" , "They" , "they" , "Us" , "us" , "We" , "we" , "You" , "you"};
	char intro[16][7]={"What" , "what" , "Where" , "where" , "When" , "when" , "Why" , "why" , "Which" , "which" , "Who" , "who" , "Whose" , "whose" , "How" , "how"};
	//char adverb;
	FILE *fp;
	fp=fopen("D:\\xyz.txt","r");
	 if (fp==NULL)
    {
        printf("no such file.");
    }
	char word[100];
    while (fscanf(fp," %s ",word)==1)
    {
		for(int j=0 ; j<24 ; ++j)	//counting pronouns
		{
			if(strcmp(pronous[j] , word)==0)
			{					
				countpro++;
			}
		}
		for(int j=0 ; j<16 ; ++j)	//counting interrogrative 
		{
			if(strcmp(intro[j] , word)==0)
			{					
				countintro++;
			}
		}
		len = strlen(word);
		if(word[len-1]=='y' && word[len-2]=='l')	//counting adverb
		{
			countadverb++;
		}
	}
	fclose(fp);
	cout<<"\nNo of Pronouns are : "<<countpro;
	cout<<"\nNo of Interrogatives are : "<<countintro;
	cout<<"\nNo of Adverbs are : "<<countadverb;
}

void count_6()	//counting uppercase and lowercase
{
	int countupper=0 , countlower=0;
	char ch;
	FILE *fp;
	fp=fopen("D:\\xyz.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch>=97&&ch<=122)
		{
			countlower++;
		}
		else if(ch>=65&&ch<=90)
		{
			countupper++;
		}
	}
	fclose(fp);
	cout<<"\nNo of Uppercase Alphabet are : "<<countupper;
	cout<<"\nNo of Lowercase Alphabet are : "<<countlower;
}

void count_7()	//counting vowels and consontant
{
	int countvowel=0 , countcons=0;
	char ch;
	FILE *fp;
	fp=fopen("D:\\xyz.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{
		if((ch>=97&&ch<=122) || (ch>=65&&ch<=90))
		{
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
			{
				countvowel++;
			}
			else
			{
				countcons++;
			}
		}
	}
	fclose(fp);
	cout<<"\nNo of vowels are : "<<countvowel;
	cout<<"\nNo of consonants are : "<<countcons;
	
}

void count_8()	//counting word with atleast 2 vowels
{
	char ch , word[20];
	int i=0 , countword=0 , count=0;
	FILE *fp;
	fp=fopen("D:\\xyz.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch==' ' || ch=='\0' || ch=='\n')
		{
			word[i]='\0';
			i=0;
			if(count>=2)
			{
				countword++;
				//strcpy(word, "was");
			}
			count=0;
			//fprintf(ofp, "%s%c", word , ch);
		}
		else
		{
			word[i]=ch;
			++i;
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
			{
				count++;
			}
		}
	}
	fclose(fp);
	cout<<"\nNo of word with more than two vowel are : "<<countword;
}

/*================================================================================================
						  SPECIFIC TASK FUNCTION DEFINATION 
================================================================================================*/

void st_1()	//changing 'is' to 'was' and counting no of is
{
	FILE *ifp, *ofp;
    char ch, word[100];
  	int countis=0 , i=0;
    ifp = fopen("D:\\xyz.txt", "r");
    ofp = fopen("D:\\change.txt", "w");
    if (ifp == NULL || ofp == NULL) {
        printf("Can't open file.");
        exit(0);
    }
    // comparing word with file
    //rewind(ifp);
    while((ch=fgetc(ifp))!=EOF)
	{
		if(ch==' ' || ch=='\0' || ch=='\n')
		{
			word[i]='\0';
			i=0;
			//count=0;
			if(strcmp(word, "is") == 0)
			{
				countis++;
				strcpy(word, "was");
			}
			fprintf(ofp, "%s%c", word , ch);
		}
		else
		{
			word[i]=ch;
			++i;
		}
	}
    fclose(ifp);
    fclose(ofp);
    rename("D:\\change.txt", "D:\\temp.txt");
    remove("D:\\change.txt");
    remove("D:\\xyz.txt");
	rename("D:\\temp.txt", "D:\\xyz.txt");
	remove("D:\\temp.txt"); 
	cout<<"\nNo of is are : "<<countis;
}

void st_2()	//changing "space" to '$' and counting no of space
{
	FILE *ifp, *ofp;
    char ch;
    int countspace=0;
    ifp = fopen("D:\\xyz.txt", "r");
    ofp = fopen("D:\\change.txt", "w");
    if (ifp == NULL || ofp == NULL) {
        printf("Can't open file.");
        exit(0);
    }
    // comparing word with file
    //rewind(ifp);
    while((ch=fgetc(ifp))!=EOF)
	{
     //   fscanf(ifp, "%c", ch);
  
        if (ch==32){
  			countspace++;
            // for deleting the word
            ch=36;
        }
  
        // In last loop it runs twice
        fprintf(ofp, "%c", ch);
    } 
    fclose(ifp);
    fclose(ofp);
    rename("D:\\change.txt", "D:\\temp.txt");
    remove("D:\\change.txt");
    remove("D:\\xyz.txt");
	rename("D:\\temp.txt", "D:\\xyz.txt");
	remove("D:\\temp.txt");
	cout<<"\nNo of space are : "<<countspace;
}

void st_3()	//changing 'lowwercase alphabet' to 'uppercase alphabet'and counting no of lowwercase alphabet
{
	FILE *ifp, *ofp;
    char ch;
    int lowercase=0;
    ifp = fopen("D:\\xyz.txt", "r");
    ofp = fopen("D:\\change.txt", "w");
    if (ifp == NULL || ofp == NULL) {
        printf("Can't open file.");
        exit(0);
    }
    // comparing word with file
    //rewind(ifp);
    while((ch=fgetc(ifp))!=EOF)
	{
     //   fscanf(ifp, "%c", ch);
  
        if (ch>=97&&ch<=122){
  			lowercase++;
            // for deleting the word
            ch -=32;
        }
  
        // In last loop it runs twice
        fprintf(ofp, "%c", ch);
    } 
    fclose(ifp);
    fclose(ofp);
    rename("D:\\change.txt", "D:\\temp.txt");
    remove("D:\\change.txt");
    remove("D:\\xyz.txt");
	rename("D:\\temp.txt", "D:\\xyz.txt");
	remove("D:\\temp.txt");
	cout<<"\nNo of lowercases are : "<<lowercase;
}
