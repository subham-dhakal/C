#include<stdio.h>
#include<stdlib.h>
int main(){
	int *x,i;
	printf("Enter the numbers");
	x=(int*)malloc(5*sizeof(int));
	for(i=0;i<5;i++){
		scanf("%d",x+i);
    }
    for(i=0;i<5;i++){
    	printf("%d\t",*(x+i));
	}
}
