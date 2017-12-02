struct booklist{
	char title[5];
	char author[5];
	int cost;
};

#include<stdio.h>
int main(){
	int sum=0,i;
    struct booklist data[4];
	for(i=0;i<4;i++){
		printf("\n \n");
		printf("Enter the title\n");
		scanf("%s",&data[i].title);
		printf("Enter the author\n");		
		scanf("%s",&data[i].author);
		printf("Enter the cost\n");
		scanf("%d",&data[i].cost);
		sum+=data[i].cost;
	}
	printf("The total cost is %d\n",sum);
	
}
