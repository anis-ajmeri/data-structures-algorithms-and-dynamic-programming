#include<stdio.h>
int main(){
		int x[] = {10,-12,13,6,-19,63,-3,12,4,32};
		int size = 10;
		int lMax,gMax,i,sum,si,ei;
		lMax = x[0];
		gMax = x[0];
		si=0;
		ei=0;
		i=1;
		while(i<=size-1)
		{
			sum = lMax + x[i];
			if(x[i]>sum){
				lMax = x[i];
				si = i;
			}else{
				lMax = sum;
			}
			if(lMax>gMax){
				gMax = lMax;
				ei = i;
			}
			i++;
		}
		printf("Index(%d->%d) => %d",si,ei,gMax);
		return 0;
	
}