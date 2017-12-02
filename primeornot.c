#include<stdio.h>
#include<conio.h>
int main(){
	int n,i=2;
	printf("enter the number");
	scanf("%d",&n);
	for(i;i<n-1;i++){
		if(n%i==0){
			printf("it is not prime\n");
			printf("%d\n",i);
			break;
		}
}

    if(i==n){
    	printf("it is prime number");
	}
	
	getch();
}
