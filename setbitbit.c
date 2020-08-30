#include <stdio.h>
int main()
{
   int n,i,x;
   scanf("%d %d",&n,&i);
   x=1<<(i-1);
   if((x&n)==0)
       printf("not set");
   else
       printf("set");
  
    return 0;
}
