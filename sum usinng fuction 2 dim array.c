#include<stdio.h>                               
#include<conio.h>
void read_matrix(int[10][10],int,int);
  void sum_matrix(int[10][10],int[10][10],int[10][10],int,int);
	void print_arr(int[10][10],int,int);


int main(){
	int row,column;
	int a[10][10],b[10][10],c[10][10];	
	
	
	printf("HOW MUCH ROWS AND COLUMN DO YOU WANT\n");
	scanf("%d%d",&row,&column);
	

	read_matrix(a,row,column);
	read_matrix(b,row,column);
	sum_matrix(a,b,c,row,column);
	print_arr(c,row,column);
	getch();
}
	

	void read_matrix(int x[10][10],int row,int column){
		int i,j;	
	printf("enter the first matrix\n");
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&x[i][j]);
		}
	}
}


	
	void sum_matrix(int a[10][10],int b[10][10],int c[10][10],int row,int column){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			c[i][j]=a[i][j]+b[i][j];
		   }
		}
   }
		
		
		void print_arr(int c[10][10],int row,int column){
			int i,j;
		  printf("The sum of martrix is\n");	
			for(i=0;i<row;i++){
		     for(j=0;j<column;j++){	
			   printf("%d\t",c[i][j]);
		      }
		      printf("\n");
	       }
	       
    }





	


