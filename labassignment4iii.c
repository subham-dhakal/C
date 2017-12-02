
/*To write a program to calculate the sum of every third integer,begining with i=2*/
/*Author Subham dhakal*/

#include<stdio.h>
#include<conio.h>
int main(){
	int i,sum=0,n;
	printf("Please enter the value upto which you want the sum\n");
	scanf("%d",&n);
	for(i=2;i<=n;i+=3){
		printf("%d\n",i);
		sum+=i;
	}
	printf("The sum of every third integer upto %d is=%d\n",n,sum);
	getch();
}
