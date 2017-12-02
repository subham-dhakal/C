#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,num[5];
	int sum=0;
	int *fp;
	/*fp=&num[5];
	printf("Enter the numbers\n");              //THIS IS INCORRECT WHICH I DID IN EXAM 
	for(i=0;i<4;i++){                           //YEAH BAD LUCK
		scanf("%d",fp+i);
	}
	printf("The numbers are\n");
	
	for(i=0;i<4;i++){
//		sum=sum+*(fp+i);
	
	}
	printf("The sum  is %d\n",sum);
   */

//BELOW PROGRAM IS CORRECT NOT ABOVE

printf("Enter 5 numbers\n"); 
fp=(int*)malloc(5*sizeof(int));
        for(i=0;i<=4;i++){
		scanf("%d",fp+i);
	}
	for(i=0;i<=4;i++){
		sum+=*(fp+i);
	}	
	printf("The sum is %d",sum);
	
}
