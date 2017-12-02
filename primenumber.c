/*WAP to print all the prime number within range*/

#include<stdio.h>
#include<conio.h>
int main(){
	int first,last,num,isprime;
	int i=2,j=2;
	printf("enter the number from which to find the prime number");
	scanf("%d",&first);
	printf("enter the number to which to find the prime number");
	scanf("%d",&last);
	for(i=first;i<=last;i++){
	isprime=0;	
	for(j=2;j<=i/2;j++){
		if(i%j==0){
			isprime=1;
			break;
		}
	}
	if(isprime==0&&last!=0)
	printf("%d\n",i);
}
getch();
return 0;

}
