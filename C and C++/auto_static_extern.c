#include<stdio.h>
#include<conio.h>
demo();
int g;
void main()
{
	demo();
	getch();
}
 
demo()
{
   static int s;
   auto int l;
   l=++s;
   ++g;
   printf("l= %d ,s= %d ,g= %d \n",l,s,g);
   if(l<=3)
   {
   	demo();
   }
    //printf("After condition fails:\n");
   	printf("l= %d ,s= %d ,g= %d \n",l,s,g);
}

