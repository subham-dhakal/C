#include<stdio.h>
#include<conio.h>
int main(){
	int i=8,j=5;
	float x=0.005,y=-0.01;
	char c='c',d='d';
	int l,m,o,p,q,r,s,t;
	float k,n;
	
	
	l=2*((i/5)+(4*(j-3)))%(i+j-2);     /*Ans  7*/
	printf("%d\n",l);
	
	k=(i-3*j)%(c+2*d)/(x-y);           /*Ans  -466.68*/ 
	printf("%f\n",k);
	
	m=5*(i+j)>c;
	printf("%d\n",m);             /*Ans  0*/
	
	n=2*x+(y==0);
	printf("%f\n",n);        /*Ans  0.01*/
	
	o=(x>y)&&(i>0)||(j<5);     /*Ans  1*/
	printf("%d\n",o);
	
	p=(x<y)&&(i>0)&&(j<5);     /*Ans  0*/
	printf("%d\n",p);
	
	q=(j>5)?i:j;
	printf("%d\n",q);       /*Ans  5*/
	
	
	r=(c>d)?c:d;
	printf("%d\n",r);      /*Ans  100*/
	
	
	s=!(c==99);
	printf("%d\n",s);     /*Ans  0*/
	  
	  
	 i-=(j>0)?j:0;
	 printf("%d\n",i);         /*Ans 3 */
	
	getch();
}
	
