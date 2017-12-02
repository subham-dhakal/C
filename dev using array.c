/* To write a program to find the average of the list of numbers and also to calculate how much each of the numbers is deviated from that average.*/


 /*Author Subham dhakal  */


#include<stdio.h>
int main(){                                 
	
	int num[10],i,sum=0,size;
	float avg,dev;
	
	printf("enter how  many numbers you want to find the average\n ");
	scanf("%d",&size);
	
	printf("Enter %d number\n",size);
	for(i=0;i<size;i++){
		 scanf("%d",&num[i]);
	     sum=sum+num[i];
       }
    printf("\n");
	
    
	avg=sum/size;
	printf("AVERAGE=%f\n",avg);
	printf("\n");
    	
    for(i=0;i<size;i++){
    	dev=num[i]-avg;
	    printf(" The deviation is:%f\n",dev);
       }  
    
    
	getch();
 }
