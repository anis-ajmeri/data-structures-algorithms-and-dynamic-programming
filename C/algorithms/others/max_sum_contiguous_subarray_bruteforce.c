#include<stdio.h>
int main()
{
	int x[] = {10,-12,13,6,-19,63,-3,12,4,32};
//	int x[] = {10,-2,3,7,-5,8,6,-2};
	int size = 10;
	int max = x[0];
	for(int e=0;e<=size-1;e++){
		int sum = 0;
		for(int f=e;f<=size-1;f++){
			sum = sum + x[f];
			if(sum>max) max = sum;
		}
	}
	printf("%d",max);
}