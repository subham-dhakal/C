#include<stdio.h>
int main(){
	int i,j;
	int a[2][2],b[2][2],c[2][2];
	printf("enter the matrix");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}

	printf("enter the array");
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("the sum is %d",&c[i][j]);
	printf("\t");
	getch();
}
