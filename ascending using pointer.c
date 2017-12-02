#include<stdio.h>
#include<stdlib.h>
#define max 5
int main(){
	int *num,i,j,temp;
	printf("Enter the numbers\n");

	num=(int*)malloc(max*sizeof(int));
	
	for(i=0;i<max;i++){
		scanf("%d",num+i);
	}
	
	
	for(i=0;i<max;i++){
		for(j=i+1;j<max;j++){
		
		if(*(num+i)>*(num+j)){
		temp=*(num+i);
		*(num+i)=*(num+j);
		*(num+j)=temp;
		  }
	   }
	}
	
    for(i=0;i<max;i++){
	 printf("the sorting in ascending order is %d\n",*(num+i));
       }
   }
