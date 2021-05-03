#include<stdio.h>
int main()
{
	int A[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int B[4][4] = {{10,20,30,40},{50,60,70,80},{90,100,110,120},{130,140,150,160}};
	int C[4][4];
	int sum;
	for(int e=0;e<=3;e++){
		for(int f=0;f<=3;f++){
			sum=0;
			for(int g=0;g<=3;g++){
				sum = sum + A[e][g]*B[g][f];
			}
			C[e][f] = sum;
		}
	}
	
	for(int e=0;e<=3;e++){
		for(int f=0;f<=3;f++){
			printf("%d ",C[e][f]);
		}
		printf("\n");
	}
}