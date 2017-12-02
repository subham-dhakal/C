#include<stdio.h>
#include<stdlib.h>
#define max 2

typedef struct{
	
	char name[50];
	int age;
	char job[50];
	char position[50];
	int salary;
}employee;



//Function declaration
void read(employee *);
void print(employee);

int main(){
	
	      int i;
    	  employee buorocrat[max];
	      
		  for(i=0;i<max;i++){
	        read(&buorocrat[i]);	
		  }
		 
		  for(i=0;i<max;i++){
	       print(buorocrat[i]);
   }
   
}


void read(employee *buorocrat){
	 printf("Enter your name\n");
	 scanf("%s", &buorocrat->name);
	 printf("Enter your age\n");
     scanf("%d",&buorocrat->age);
	 printf("Enter your job\n");
	 scanf("%s",&buorocrat->job);
	 printf("Enter your position in the government job\n");
	 scanf("%s",&buorocrat->position);
	 printf("Enter your salary\n");
     scanf("%d",&buorocrat->salary);
	}
	
	void print(employee buorocrat){
	  printf(" Your name is %s\n",buorocrat.name);	
	  printf(" Your age is %d\n",buorocrat.age);
	  printf(" Your job is %s\n",buorocrat.job);
	  printf(" Your position is %s\n",buorocrat.position);
	  printf(" Your name is %d\n",buorocrat.salary);
	}

