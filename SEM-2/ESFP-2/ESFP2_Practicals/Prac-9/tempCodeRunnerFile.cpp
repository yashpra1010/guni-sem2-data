int main()
{
int i;
char *lfc[] = {"C", "C++", "Java", "VBA"};
char *(*ptr)[4] = &lfc;
cout << ++(*ptr)[2];
return 0;
}