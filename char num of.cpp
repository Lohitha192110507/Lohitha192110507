#include<stdio.h>
int main()
{
char ch;
int upper=0;
int lower=0;
int digits=0;

while (ch!='*')

{
printf("\nEnter any character, or * to quit :");
scanf("%c",&ch);
ch=getchar();


if (ch>='a'&& ch<='z')
{
lower++;
printf("\nTotal count of lowercase characters entered = %d",lower);
}

if (ch>='A'&&ch<='Z')
{
upper++;
printf("\nTotal count of uppercase characters entered = %d",upper);
}

if (ch>=0)
{
digits++;
printf("\nTotal count of digits entered = %d",digits);
}
printf("\nOutput:");
return 0;
}
}
