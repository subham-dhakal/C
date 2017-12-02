#include<stdio.h>
int main(){
	
	int first,second,third;
	int largest();
	
	printf("enter 3 numbers\n");
	scanf("%d%d%d",&first,&second,&third);
	printf(" The largest of  first 2 numbers is :%d\n",largest(first,second));
printf("The largest of 3 numbers is :%d\n",largest((largest(first,second),third)));
}

int largest(int x,int y){
return x>y?x:y;	
}
