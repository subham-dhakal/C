#include<stdio.h>
#include<stdlib.h>
#define max 5
int main(){
	int *x[max],i,j;
	printf("Enter %d number\n",max);
	
	for(i=0;i<max;i++){
		scanf("%d",x+i);
	}
	
	printf("Enter how much much row do  you want\n");
	for(i=0;i<max;i++){
	x[i]=(int*)malloc(max*sizeof(int));
     }
   
    for(j=0;j<max;j++){
    	scanf("%d",x[i]+j);
	  }
   
	
	
}

