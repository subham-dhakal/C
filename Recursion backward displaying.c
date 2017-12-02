#include <stdio.h>
void reverse(void);

main()
{
printf("Please enter a line of text below\n");
reverse();
}

void reverse(void){
char c;
if((c=getchar())!='\n'){
reverse();
}
putchar(c);
}
