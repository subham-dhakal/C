#include<stdio.h>
int main(){
	FILE *fp;
	int age;
	char name[10];
	fp=fopen("test.txt","w");
	printf("Enter your name\n");
	gets(name);
	printf("Enter your age\n");
	scanf("%d",&age);
	fprintf(fp,"%s\n",name);
	fprintf(fp,"%d\n",age);
	fclose(fp);
}
