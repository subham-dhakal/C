#include<stdio.h>
int main(){
	int i;
	char name[10];
	printf("Enteer text");
	scanf("%s",&name);
	for(i=0;i<sizeof(name);i++){
	name[i]=toupper(name[i]);
	
    }
    printf("%s\n",name);
}
