#include<stdio.h>
#include<conio.h>
int main(){
 char name[50];
 int i,vowels=0,consonant=0;
 printf("enter some text\n ");
 scanf("%s",&name);
 
 for(i=0;name[i]!='\0';i++){
 if(name[i]=='A'||name[i]=='a'||name[i]=='E'||name[i]=='e'||name[i]=='I'||name[i]=='i'||name[i]=='O'||name[i]=='o'||name[i]=='U'||name[i]=='u')
 {
 	vowels=vowels+1;
   }
   else{
   	consonant=consonant+1;
   }

}
printf("the number of vowels=%d\n",vowels);
printf("the number of consonant=%d\n",consonant);
getch();
}

