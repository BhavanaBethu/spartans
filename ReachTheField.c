#include<stdio.h>
int main(){
	int n,count=0,sum=0,size,i;
	scanf("%d %d ",&n,&size);
	int ar[n];
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
    for(i=0;i<n;i++){	
    	if(sum+ar[i]<=size){
    		sum+=ar[i];
	}
		else{
			count+=1;
			sum=ar[i];
		}	
	}
    count++;
	printf("%d",count);
	return 0;
}
