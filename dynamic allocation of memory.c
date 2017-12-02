#include<stdio.h>
int main(){
	int *x,i;
	x=(int*)malloc(5*sizeof(int));
	for(i=0;i<5;i++){
		scanf("%d",x+i);
	}
}
