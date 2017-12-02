#include<stdio.h>
long int fact(int);

int main(){
	int n;
	
	printf("Enter the number to find factorial\n");
	scanf("%d",&n);
	printf("The factorial is %d",fact(n));
}

long int fact(int x){
	 
	 long int result=1,i;
	for(i=1;i<=x;i++){
		result*=i;
	}
	return result;
	
}
