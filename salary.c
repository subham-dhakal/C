#include<stdio.h>
#include<stdio.h>
int main(){
	char g;
	char q[5];
	int yos;
	int sal;
	printf(" NOTE : If you are post-graduate and Graduate type 'PG' and 'G' respectively\n ");
	printf(" NOTE :Type 'M' for male and 'F' for female\n");
	printf("Enter your gender,year of experience and qualification\n");
	scanf("%c%d%s",&g,&yos,q);
	if(g=='M'&&yos>=10&&q=='PG')
		sal=15000;
	else if((g=='M'&&q=='G'&&yos>=10)||(g=='M'&&yos<=10&&q=='PG'))
		sal=10000;
	
	else if(g=='M'&&yos<10&&q=='G')
		sal=7000;
	else if(g=='F'&&yos>=10&&q=='PG')
		sal=12000;
	else if(g=='F'&&yos>=10&&q=='G')
		sal=9000;
	else if(g=='F'&&yos<10&&q=='PG')
		sal=10000;
	else if(g=='F'&&yos<10&&q=='G')
		sal=6000;
	
	printf("%d",sal);
	
	getch();
}
