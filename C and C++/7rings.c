#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	int t,n,x,res;
	scanf("%d",&t);
	while (t)
	{
	    scanf("%d %d",&n,&x);
        char s[20];
        sprintf(s,"%d",n*x);
        //printf("s value is :%s\n",s);
        //printf("size of s is :%d\n",sizeof(s));
        if(strlen(s)==5)

        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
	    t=t-1;
	}
	return 0;
}

