# include <stdio.h>
int main()
{
char c;
int a;
a=0;
while((c = getchar())!=EOF)
{
putchar();
printf("\n");
a=a+1;
printf("%d", a);
}
return 0;
}
