/*To write a program to add two 2-dimenstional arrays and store it in a  separate array. Also print the resulting array.*/




/*Author Subham dhakal  */

#include<stdio.h>                                    
int main(){
	
	int i,j,row,column;
	int a[10][10],b[10][10],c[10][10];	
	
      do{
	  
		
	printf("HOW MUCH ROWS AND COLUMN DO YOU WANT\n");
	scanf("%d%d",&row,&column);
	
	
	
	
	if(row>0&&column>0){

	
	
		
	printf("enter the first matrix\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("enter the second matrix\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("The sum of martrix is\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}


}
else	 
{
	
	printf("Enter Only positive number\n ");
	printf("\n");
      }
      
  }


while((row<0||column<0));

	getch();
}
