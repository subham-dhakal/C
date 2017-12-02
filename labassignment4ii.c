
/*To write a program to calculate the sum of every third integer,begining with i=2*/
/*Author Subham dhakal*/

#include<stdio.h>
#include<conio.h>
int main(){
	int sum=0,n,i=2;
	printf("Please enter the value upto which you want the sum\n");
	scanf("%d",&n);
	do{
     printf("%d\n",i);
     sum+=i;
	 i+=3;
     
	}
	while(i<=n);
	printf("The sum of every third integer upto is %d =%d\n",n,sum);
	getch();
	
	
}
