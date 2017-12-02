/* To write a program to reorder the list of numbers either in ascending or descending order.*/

/*Author Subham dhakal  */


#include<stdio.h>                         
#define size 10
int main(){
	
	int i,j,num[10],temp;
	printf("enter the  numbers to sort them in decending order\n");
	
	for(i=0;i<size;i++){
		scanf("%d",&num[i]);
  }
  
  for(i=0;i<size;i++){
  	for(j=i+1;j<size;j++){
  		if(num[i]<num[j]){
  			temp=num[i];
  			num[i]=num[j];
  			num[j]=temp;
		  }
	  }
  }
  
  for(i=0;i<size;i++){
  printf("The sorting in decending order is:");
  printf("%d\n",num[i]);
}
	getch();
}
