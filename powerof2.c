#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   if((n&(n-1))==0)
       printf("yes, the number is a power of 2");
    else
       printf("no it is not a power of 2");
    return 0;
}
