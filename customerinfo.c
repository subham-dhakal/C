#include<stdio.h>
#include<stdlib.h>
#define SIZE 2

typedef struct{
	int itemnum;
	char itemname[50];
	int price;
}items;

typedef struct{
	char customer_name[50];
    int phonenumber;
	int account_number;
	items order;
}customer;

void read(customer*);
void print(customer,int);

int main()
{
	int i,j;
    customer customers_first[SIZE];
	
	for(i=0;i<SIZE;i++)
	{
		read(&customers_first[i]);
	}
	
	printf("Enter Order :");
	for(i=0;i<SIZE;i++)
	{
		print(customers_first[i],i);
	}

}
void print(customer customers_first ,int a)
{
		printf("Record %d \n",a+1);
				
		printf("Customer Name: ");
		printf("%s \n",customers_first.customer_name);
	
		printf("Phone Number: ");
		printf("%d \n",customers_first.phonenumber);
	
		printf("Account Number: ");
		printf("%d \n",customers_first.account_number);
		
		printf("Orders Are: ");
		printf("%s \n",customers_first.order);
		
}

void read(customer *customers_first)
{

		printf("Enter Customer's Name: ");
		scanf("%s",&customers_first->customer_name);
		fflush(stdin);
		
		printf("Enter Phone Number: ");
		scanf("%s",&customers_first->phonenumber);
		fflush(stdin);
		
		printf("Enter Account Number: ");
		scanf("%s",&customers_first->account_number);
		fflush(stdin);
}	

