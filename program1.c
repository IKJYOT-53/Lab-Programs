//WAP to find divisor or factorial of a given number
#include <stdlib.h>
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int factorial=1;
	for(int i=1;i<=n;i++){
		factorial*=i;
	}
	printf("%d\n",factorial );
	return 0;
}