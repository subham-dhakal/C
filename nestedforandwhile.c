#include<stdio.h>
#include<conio.h>
int main(){
	int i=1,j=1;
	while(i<=5){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
		i++;
	}
	getch();
}
