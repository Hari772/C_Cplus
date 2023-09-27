#include <stdio.h>
void fun(int,float);
int main()
{
    fun(5/2,5/-2);
    
    
}
void fun(int a,float b)
{
    printf("%d  %f",a,b);
    
}
