#include<stdio.h>
int fibo(int k){
		if(k<=1) return k;
		return fibo(k-1)+fibo(k-2);
}
int main()
{
	int target;
	printf("Enter the requirement: ");
	scanf("%d",&target);
	printf("\nFibonacci number for position %d is %d\n",target,fibo(target));
	return 0;
}
