#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,m,n;
	printf("Enter the number you want the multiple of");
	scanf("%d",&m);
	printf("Enter the number upto you want the multiple");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d",i);
		i=i+m;
	}
	getch();
}
	


