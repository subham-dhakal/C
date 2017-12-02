#include<stdio.h>
int scan_line(char text[],int *pv,int *pc,int *pd,int *pw);

int main(){
	int vowel=0,consonant=0,digit=0,white=0;
	char text[10];
	printf("Enter text");
	gets(text);
	int scan_line(text[],&vowel,&consonant,&digit,&white);
	printf("vowel =%d",vowel);
	printf("consonant =%d",consonant);
	printf("digit =%d",digit);
	printf("whitespace =%d",white);
}

  int scan_line(char text[],int *pv,int *pc,int *pd,int *pw){
  	int i;
  	for(i=0;i<sizeof(text);i++){
  		text[i]=toupper(text[i]);
	  }
	  for(i=0;text[i]!='\0';i++){
	  	if(text[i]=='A'||text[i]=='E'||text[i]=='I'||text[i]=='O'||text[i]=='U'){
	  		 *pv++
		  }
	  }
  }
