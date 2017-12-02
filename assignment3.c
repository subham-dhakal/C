#include<stdio.h>
/* it is a library function to include standard input and output function*/
#include<math.h>
/* it is a library function to include basic mathematical expression in the program*/
#include<ctype.h>
/*it is used in C to test and map the character*/
#include<stdlib.h>
/*it is a library function to include standard library function*/
int main(){
		int i = 8, j = 5;
    float x = 0.005, y = -0.01;
    char c = 'c', d = 'd';
    printf("%d\n",isdigit(c));      /*Ans 0 */    /*0 means false*/   /*<ctype.h>*/
    

    printf("%f\n",pow(x-y,3.0));     /*Ans 0.000003  */   /*<math.h>*/
    
    printf("%f\n",ceil(x+y));       /*Ans  -0  */       /*<math.h>*/
    
    printf("%f\n",floor(x+y));      /*Ans -1   */     /*  <math.h>*/
    
    printf("%c\n",toupper(d));      /*Ans  D */     /*  <ctype.h> */
    
    printf("%d\n",isupper(j));       /*Ans 0  */    /*<ctype.h> */
    
    printf("%d\n",toascii(10*j));    /*Ans  50  */    
    getch();
}
