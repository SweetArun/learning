#include<stdio.h>
#include<conio.h>
int main()
{
	int age,existing_salary,salary;
	printf("\n enter the age and existing salary ");
	scanf("%d %d",&age,&existing_salary);
	if(age>50)
	{
		if(existing_salary<60000)
		{
			salary=existing_salary+10000;
			printf("\n incremented salary = %d",salary);
		}
		else
		{
			salary=existing_salary+15000;
			printf("\n incremented salary =%d",salary);
		}
	}
	else
		{
			salary=existing_salary+5000;
			printf("\n incremented salary =%d",salary);
		}
		printf("\n salary incremented ");
	}
