#include<stdio.h>
int main()
{
	float e,f,g,i=1;
    printf("enter the number=");
	scanf("%f",&e);
	if(e>=0)
	{
	
	f=e*e;
	g=e*e*e;
	printf("the square of number is=%f\n",f);
	printf("the cube of number is=%f\n",g);
}
else
{
	printf("\ninvalid");
}
}
