#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	printf("Enter the value of s2:\n");
	gets(s2);
	sprintf(s1,"output=%s\n",s2);
	puts(s1);
	return 0;
}
