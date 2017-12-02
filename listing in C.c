/* To write a program to find the average of the list of numbers and also to calculate how much each of the numbers is deviated from that average.*/

#include<stdio.h>
#include<conio.h>
int main(){
	int i=0,k=1,sum=0,a,n,num[5];
	float avg;
	printf("Enter how many list you want ");
	scanf("%d",&a);
	if(a>0){


	do{
		
	
	while(k<=a){
	printf("enter   how much number you want the average\n");
	scanf("%d",&n);

	if(n>0){
	printf("Please enter the %d number\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		if(num[i]>0){
		sum+=num[i];
	   }
	   else{
	   	printf("I said no negative number");
	   }
    }
  }	

else{
	printf("Cant enter negative");
  }

	avg=(float)sum/n;
	printf("The average of the number you entered is:%f\n",avg);

k++;
  }

}


while(a!=0);

 }

  else{
	printf("No negative number");
   }

	getch();

	
}
