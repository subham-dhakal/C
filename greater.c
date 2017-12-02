#include<stdio.h>
int main(){
	int n1,n2,n3;
	printf("enter three numbers\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1>n2&&n1>n3){
		printf("%d is greatest",n1);
	}
	else{
		if(n2>n3)
		printf("%d is greater",n2);
	else{
		printf("%d is greater",n3);
	}	
	}
	return 0;
	
}
