#include<stdio.h>
#include<stdlib.h>
#define max 5
int main(){
	int *x,i,sum=0;
	printf("Enter the numbers");
	x=(int*)malloc(max*sizeof(int));
	for(i=0;i<max;i++){
		scanf("%d",x+i);
		sum+=*(x+i);
	}
	printf("the sum is %d",sum);
	
	
}
