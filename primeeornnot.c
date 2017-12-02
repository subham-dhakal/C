#include<stdio.h>
#include<conio.h>
int main(){
	int i=2,n;
	printf("enter the number");
	scanf("%d",&n);
	while(i<=n-1){
		if(n%i==0){
			printf("it is not prime");
			break;
		}
		i++;
		
	}
	if(i==n){
		printf("it is prime");
	}
	getch();                                
}
