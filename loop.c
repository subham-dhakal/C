#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,num=1;
	for(i=0;i<=3;i++){
		for(j=0;j<=3;j++){
			printf("%d",&num);
			num++;
		}
		printf("\n");
	}
	getch(); 
}
