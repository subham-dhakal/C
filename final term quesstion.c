#include<stdio.h>
void sum(int);
int main(){
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	sum(num);
	
}

void sum(int  num1){
	int i,sum=0;
	for(i=1;i<=num1;i++){
		sum+=i*i*i;
	}
	printf("The sum is %d\n",sum);
}
