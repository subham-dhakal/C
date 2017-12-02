#include<stdio.h>
int main(){
	int list,i=0,j;
	float number,average,sum=0,numstore[5];
	
	
		
	
	printf("How much list you want to find\n");
	scanf("%d",&list);
	
	if(list>0){
	
	while(j<=list){
		printf(" How many number you want to find average of\n");
		scanf("%f",&number);
		printf("enter %f number",number);
		
		for(i=0;i<number;i++){
			scanf("%d",&numstore[i]);
			sum=sum+numstore[i];
		 }
		            average=sum/number;
                      printf("average=%f\n",average);
	      	 j++;
         }
         
        
     }
   
   else{
   	printf("NO NEGATIVE NUMBER PLEASE!\n");
   }




   getch();
}
