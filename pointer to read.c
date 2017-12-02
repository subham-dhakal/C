#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int *x,i,n,rev;
	printf("How much  no you want to add ");
	scanf("%d",&n);
	x=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",x+i);
	}
	for(i=0;i<n;i++){
	rev=strrev(x+i);
}
	printf("The reverse no is %d",rev);
}
