
/*To write a program to calculate the sum of every third integer,begining with i=2*/
/*Author Subham dhakal*/


#include<stdio.h>
#include<conio.h>
int main(){
	int i=2,n,sum=0;
	printf("Please enter the value upto which you want the sum\n");
	scanf("%d",&n);
	while(i<=n){
		printf("%d\n",i);
		sum+=i;
		i+=3;
		
	}
	printf("The sum of every third integer upto %d is=%d\n",n,sum);
	getch();
}
