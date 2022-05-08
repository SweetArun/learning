#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter the three numbers \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("\n the greatest number among them is %d",a);
		}
		else
		{
			if(b>c)
			{
				printf("\n the greatest number among them is %d",b);
			}
			else
			{
				printf("\n the greatest number among them is %d",c);
			}
		}
	}
	else
	{
		if(c>b)
		{
			printf("\n the greatest number among them is %d",c);
		}
		else
		{
			printf("\n the greatest number among them is %d",b);
		}
	}
}
	
		
