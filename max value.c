#include<stdio.h>
int main(){
	int num[10],i,max;
	printf("Enter numbers\n");
	for(i=0;i<=4;i++){
		scanf("%d",&num[i]);
	}
	max=num[0];
	for(i=0;i<=4;i++){
		if(num[i]>max){
			max=num[i];
		}
	}
	printf("The largest value is %d",max);
}
