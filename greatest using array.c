#include<stdio.h>
#define size 5            
int main(){
	int num[size];
	int i,digit;
	printf("enter the  number to find greaest");
	for(i=0;i<size;i++){
		scanf("%d",&num[i]);
	}
	int max=num[0];
	digit=isdigit(num[i]);
	
     if(digit!=0){
	for(i=0;i<size;i++){
		if(num[i]>max){
			max=num[i];
		   }
	   }
	printf("the greatest number is %d",max);
  
  }
  
  else{
  
  printf("invalid");
}
                 /*Whenever i finished entering 5 numbers it prints the else statement*/

	getch();
}
