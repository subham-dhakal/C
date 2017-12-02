#include<stdio.h>
#include<stdlib.h>
#define max 5
int main(){
	int *x,i,sum=0,average;
	printf("Enter the numbers\n");
	x=(int*)malloc(max*sizeof(int));
	for(i=0;i<max;i++){
		scanf("%d",x+i);
		sum+=*(x+i);
	}
	
	   printf("the sum is %d\n",sum);
		average=sum/max;
	
		
		for(i=0;i<5;i++){
	printf("The deviation is %d\n",*(x+i)-average);
   }
}
