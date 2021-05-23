/*
* This is an example to print fibonacci series till given number.
*/
#include<stdio.h>
int main()
{
	int i,j,k,e,target;
	printf("Enter the requirement: ");
	scanf("%d",&target);
	i=0;
	j=1;
	e = 1;
	while(e<=target){
		printf("%d ",j);
		k = i+j;
		i = j;
		j = k;
		e++;
	}
	printf("\nFibonacci number for position %d is %d",target,i);
	
	return 0;
}