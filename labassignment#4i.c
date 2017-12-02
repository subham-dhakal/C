#include<stdio.h>
#include<conio.h>
int main(){
	int i=2,n,sum;
	printf("Please enter the value upto which you want the sum");
	scanf("%d",&n);
	while(i<=n){
		printf("%d",i);
		i+=2;
		sum=sum+i;
	}
	printf("the sum=%d",sum);
	getch();
}
