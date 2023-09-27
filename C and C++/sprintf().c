#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,b=20,c;
	char add[50];
	c=a+b;
	sprintf(add,"sum of %d and %d is %d\n",a,b,c);
	//puts(add);
	printf("%s",add);
	getch();
}
