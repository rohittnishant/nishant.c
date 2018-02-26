#include <stdio.h>
#include<conio.h>
int main() 
{
	char s[50];
	int a,i;
	printf("enter the string:");
	scanf("%s",s);
	printf("enter the number:");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		printf("\n%s",s);
	}
  getch();
	return 0;
}
