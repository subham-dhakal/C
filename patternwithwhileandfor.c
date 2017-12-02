#include<stdio.h>
int main(){
	int j=1,i=1;
	while(i<=5){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
		i++;
	}
	return 0;
}
