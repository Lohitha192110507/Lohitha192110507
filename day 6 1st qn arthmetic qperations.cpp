#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int x,n,add,sub,div,mul,ch,i=1;
	float power;
	while(i==1)
	{
	
	printf("enter the two digits x and n:");
	scanf("%d\n%d",&x,&n);
	printf("enter the choices(1/2/3/4/5):");
	scanf("%d",&ch);
	if(x>=0 && n>=0)
	{
		if (ch==1)
		{
			power=pow(x,n);
			printf("pow:%f",power);
		}
		else if(ch==2)
		{
			add= x+n;
			printf("add:%d",add);
		}
		else if(ch==3)
		{
			sub=(x-n);
			printf("sub:%d",sub);
		}
		else if(ch==4)
		{
			div=(x/n);
			printf("div:%d",div);
		}
		else if(ch==5)
		{
			mul=(x*n);
			printf("mul:%d",mul);
		}
	}
	else
	{
		printf("invalid; enter the valid number...");
	}
	printf("/ndo u want to continue:press 1:");
	scanf("%d",&i);
}
}
