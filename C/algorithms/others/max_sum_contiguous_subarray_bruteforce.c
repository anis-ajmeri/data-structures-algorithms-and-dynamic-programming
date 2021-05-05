#include<stdio.h>
int main()
{
	int x[] = {10,-12,13,6,-19,3};
	int max = x[0];
	for(int e=0;e<=5;e++){
		int sum = 0;
		for(int f=e;f<=5;f++){
			sum = sum + x[f];
			if(sum>max) max = sum;
		}
	}
	printf("%d",max);
}