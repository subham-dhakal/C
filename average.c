#include<stdio.h>
#include<conio.h>
int main(){
	int i=0,sum=0,n,num;
	float avg;
	printf("enter the  how much number you want the average\n");
	scanf("%d",&n);
	printf("Please enter the %d number\n",n);
	for(i=0;i<=n;i++){
		scanf("%d",&num);
		sum+=num;
	}
	avg=sum/n;
	printf("The average of the number you entered is:%d\n",avg);
	getch();

	
}
