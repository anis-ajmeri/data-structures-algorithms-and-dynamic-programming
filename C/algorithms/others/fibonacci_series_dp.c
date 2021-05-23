#include<stdio.h>
int arr[30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; 
int _fibo(int k)
{
	if(k<=1) return k;
    if(arr[k] != 0) return arr[k];
	arr[k] = _fibo(k-1)+_fibo(k-2);	
	return arr[k];
}

int fibo(int k)
{
	return _fibo(k);
}
int main()
{
	int target;
	printf("Enter the requirement: ");
	scanf("%d",&target);
	printf("Fibonacci number for position %d is %d",target,fibo(target));
}