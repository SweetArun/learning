
#include<stdio.h>
#include<conio.h>
int main()
{
	puts("an");
	unsigned char c='#';
	char ch[4];
	gets(ch);
	puts(ch);
	char sr;
	sr=getchar();
	putchar(sr);
	putchar('.');
	putchar('A');
	putchar('R');
	putchar('U');
	putchar('N');
	puts("Suvee");
	int a=4;
	int b=11;
	printf("\n %d" ,a<b);
	printf("\n %d",a);
	printf("\n %d",'a'<'b');
	printf("\n %d",a*b);
	int result,results;
	result=a<b&& a;
	printf("\n %d %d",result,a);
	printf("\n %d" , c);
	results=a++&&b--;
	printf("\n %d",results);
	printf("\n %d \n %d",a,b);
	printf("\n %d",~(a+2));
	int d;
	d=(5,4);
	printf("\n %d",d);
	int e;
	e=(printf("\n arun "),10,12);
	printf("\n %d",e);
	int f;
	f=(e++,++e);
	printf("\n %d %d", e , f);
	int g;
	g=f++,++f;
	printf("\n %d %d",f , g);
	int h;
	h=++g,g++;
	printf("\n %d %d",g ,h);
	int i,j;
	scanf("%d%d",&i,&j);
	printf("\n %d %d",i,j);
	printf("\n %d",sizeof(char));
	int m;
	printf("\n enter whether to proceed ");
	scanf("%d",&m);
	if(m)
	{
	float k,l;
	int x;
	x=scanf("%f%f",&k,&l);
	printf("\n %f%f",k,l);
	printf("\n %d",x);
	int m=1234;
	printf("\n %6d \n %-6d",m,m);
	printf("\n %5.2f",k);
	printf("\n %e",l);
	}
}
