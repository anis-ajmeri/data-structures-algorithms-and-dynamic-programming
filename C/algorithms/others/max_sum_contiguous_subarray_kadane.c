#include<stdio.h>
int main(){
		int x[] = {10,-12,13,6,-19,63,-3,12,4,32};
		int size = 10;
		int lMax,gMax,i,sum;
		lMax = x[0];
		gMax = x[0];
		i=1;
		while(i<=size-1)
		{
			sum = lMax + x[i];
			lMax = x[i]>sum?x[i]:sum;
			gMax = lMax>gMax?lMax:gMax;
			i++;
		}
		printf("%d",gMax);
		return 0;
	
}