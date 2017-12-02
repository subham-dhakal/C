#include<stdio.h>
#include<stdlib.h>
#define max 1

struct government_employee{
	
	char name[50];
	int age;
	char job[50];
	char position[50];
	int salary;
};

int main(){
	
	      int i;
    	  struct government_employee buorocrat[max];
	
	
	for(i=0;i<max;i++){
	
	 printf("Enter your name\n");
     scanf("%s",&buorocrat[i].name); 	
     printf("Enter your age\n");
     scanf("%d",&buorocrat[i].age);
	 printf("Enter your job\n");
	 scanf("%s",&buorocrat[i].job);
	 printf("Enter your position in the government job\n");
	 scanf("%s",&buorocrat[i].position);
	 printf("Enter your salary\n");
     scanf("%d",&buorocrat[i].salary);
     printf("\n\n");
   }
}
