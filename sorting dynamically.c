#include<stdio.h>
#include<stdlib.h>
int main(){
	int *num,i,j,temp;
	printf("Enter the numbers\n");

	num=(int*)malloc(5*sizeof(int));
	
	for(i=0;i<5;i++){
		scanf("%d",num+i);
	}
	
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
		num[i]>num[j];
		temp=*(num+i);
		*(num+i)=*(num+j);
		*(num+j)=temp;
		}
	}
	
    for(i=0;i<5;i++){
	 printf("the sorting in decending order is %d",*(num+i));
       }
   }
