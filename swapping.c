#include<stdio.h>
#include<conio.h>
int main(){
	int x,y,temp;
	printf("entter the 2 values\n");
	scanf("%d%d",&x,&y);
	printf("before swapping\nx=%d\ny=%d\n",x,y);
	temp=x;
	x=y;
	y=temp;
	printf("after swapping\nx=%d\ny=%d\n",x,y);
	getch();
	
}
