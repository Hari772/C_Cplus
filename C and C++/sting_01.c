
#include <stdio.h>

int main()
{
    char str[ ]="hello";
    int n =sizeof(str)/sizeof(str[0]);
    printf("%d",n);

    return 0;
}
