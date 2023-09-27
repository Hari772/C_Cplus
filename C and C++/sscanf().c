#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	gets(s1);
	sscanf(s1,"%s",s2);
	puts(s2);
	return 0;
}
