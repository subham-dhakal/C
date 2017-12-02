#include<stdio.h>
#include<stdlib.h>

struct government_employee{
	
	char name[5];
	int age;
	char job;
	char position;
	int salary;
};

int main(){
	      int i;
    	  struct government_employee buorocrat[10];
	
	 printf("Enter your name\n");
     	
     printf("Enter your age\n");
     
	 printf("Enter your job\n");
	 
	 printf("Enter your position in the government job\n");
	 
	 printf("Enter your salary\n");
     


       for(i=0;i<4;i++){
	    scanf("%c",&buorocrat[i].name);
	    scanf("%d",&buorocrat[i].age);
		scanf("%c",&buorocrat[i].job);
	 	scanf("%c",&buorocrat[i].position);	
	 	scanf("%d",&buorocrat[i].salary);
	 }

	 for(i=0;i<4;i++){
	   	printf("%c",&buorocrat[i].name);
	    printf("%d",&buorocrat[i].age);
		printf("%c",&buorocrat[i].job);
	 	printf("%c",&buorocrat[i].position);
	 	printf("%d",&buorocrat[i].salary);
	 }
	 
	 	
}
