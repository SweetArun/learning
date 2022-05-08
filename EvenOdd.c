#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf(" enter the number ");
	scanf("%d",&a);
	b=(a%2);
	if(b)
	{
		printf("\n entered number is %d odd",a);
	}
	else
	{
		printf("\n entered number is %d even",a);
	}
}
