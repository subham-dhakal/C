#include<stdio.h>
int main(){
	int i = 8, j = 5;
    float x = 0.005, y = -0.01;
    char c = 'c', d = 'd';
	int a,b,e,f,z=2;
	a=(3*i-2*j) % (2*d-c);      /*Ans 14*/
	printf("%d\n",a);
	
	
 b=2 * ((i/5) + (4*(j-3)) % (i+j-2));    /* Ans 18*/
 printf("%d\n",b);	
	
	e=++i;             
	printf("%d\n",e);    /* Ans 9*/
	

	f=i++;
	printf("%d\n",f);      /* Ans 9*/
	
	printf("%d\n",j!=6);     /*Ans 1*/
	
		printf("%d\n",(z*x+y)==0);  /*Ans 1*/
		
		z-=(x>=0)?x:0;
		printf("%d\n",z);      /* Ans 1*/
		
	printf("%d\n",(x>y)||(i>0)&&(j<5));	 /* Ans   1*/
	
	printf("%d\n",!(i<=j)&&!(x>0));    /* Ans 0*/
	
	int k=(j==5)?i:j;      /* Ans 10*/
	printf("%d\n",k);
	
	 printf("%d\n",2*x+y==0);   /* Ans 1*/
		
	return 0;
}
