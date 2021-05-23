// Sum of contiguous SubArray equal to given number - Bruteforce

#include<stdio.h>
int main()
{
	int x[] = {12,5,6,7,2,8,4};
	int size = sizeof(x)/sizeof(x[0]);
	int target,sum;
	target = 10;
	int e,f;
	e=0;
	while(e<size-1)
	{
		sum = 0;
		f=e;
		while(f<=size-1)
		{
			sum +=x[f];
			if(sum==target){
				printf("%d-%d ",e,f);
				return 0;
			}
			if(sum>target) break;
			f++;
		}
		
		e++;
	}
return 0;
	
}