#include<stdio.h>
int main(){
	int n;
	int fact(int);
	printf("enter the number\n");
	scanf("%d",&n);
	printf("The factorial is %d",fact(n));
}

int fact(int n){
	if(n<=1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
