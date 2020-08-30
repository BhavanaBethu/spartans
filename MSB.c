#include<stdio.h>
#include<math.h>
int main(){
	int n,count=0,x;
	scanf("%d",&n);
	while(n!=1){
		count++;
		n=n>>1;
	}
	x=pow(2,count);
	printf("%d",x);
	return 0;
}
