#include<stdio.h>
float div(float,float);
int main(){
	
	float num1,num2;
	printf("Enter two numbers");
	scanf("%f%f",&num1,&num2);
	printf("The division is %.2f",div(num1,num2));
}

float div(float first,float second){
//	float divide;
//	divide=first/second;
	return first/second;
}
