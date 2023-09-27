#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	//clrscr();
	char str[30];
	//printf("Hello world\n");
	printf("Enter the string:\n");
	//scanf("%s",&str);
	gets(str);
	printf("Displaying string:\n");
	printf("%s\n",str);
	
	printf("using function displaying string:\n");
	puts(str);
	printf("length of the sting is : %d\n",strlen(str));
	char a[50];
	printf("string copied is : %s\n",strcpy(str));
	
	getch();
}
