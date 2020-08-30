
#include <stdio.h>
#include<math.h>
int setOrNot(int i,int j){
   int y;
   y= 1<<(j-1);
 if((y&i)==0)
     return 0;
 else 
     return 1;
}
int main()
{
   int n,i,x,j;
   scanf("%d",&n);
   int arr[n];
   x=pow(2,n);
   for(i=0;i<n;i++)
       scanf("%d",&arr[i]);     
    
    for(i=0;i<x;i++){
       for(j=0;j<n;j++){
       	if(i==0){
       		printf("Null Set");
       		break;
		   }
		   else{
           if(setOrNot(i,j+1)==1)
               printf("%d ",arr[j]);
           }
   }
       printf("\n");
   }
    return 0;
}
