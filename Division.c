#include<stdio.h>
int main(){
	long long int n,div,q=0,i,var=0;
	scanf("%lld %lld",&n,&div);
	for(i=31;i>=0;i--){
		if(var+(div<<i)<=n){
			var=var+(div<<i);
			q=q|(1<<i);
		}
	}
	printf("%lld",q);
	return 0;
}
