#include <stdio.h>
#include<conio.h>
int main() 
{
	char s[60];
	int k,i;
	printf("enter the string:");
	scanf("%s",s);
	printf("enter the number:");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("\n%s",s);
	}
  getch();
	return 0;
}
