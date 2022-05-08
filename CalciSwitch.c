#include<stdio.h>
void main()
{
	int a,b,d;
	char ch;
	printf("\n enter the action to perform \n addition \n subtraction \n division \n multiplication ");
	scanf("%c",&ch);
    printf("enter the two numbers \n");
	scanf("%d%d",&a,&b);	
	switch(ch)
	{
		case '+':
		d=a+b;
		printf("\n addition of two numbers is %d",d);
		break;
		case '-':
		d=a-b;
		printf("\n subtraction of two numbers is %d",d);
		break;
		case '/':
		d=a/b;
		printf("\n division of two numbers is %d",d);
		break;
		case '*':
		d=a*b;
		printf("\n multiplication of two numbers is %d",d);
		break;
		default:
		printf("\n invalid selection");
	}
}
