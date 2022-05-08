#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf(" enter the character \n");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': 
		printf("\n entered character is vowel",ch);
		break;
		default:
		printf("\n entered character isn't vowel ");
	}
}
