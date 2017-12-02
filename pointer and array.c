#include<stdio.h>
int main(){
	int x[5]={2,4,6,8,10},i;
	for(i=0;i<5;i++){
		printf("i=%d x[i]=%d *(x+i)=%d",i,x[i],*(x+i));
		printf("\t &x[i]=%x x+i=%x\n",&x[i],x+i);
	}
}
