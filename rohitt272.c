#include <stdio.h>
#include<conio.h>
int main() 
{
	char str1[80],str2[80];
	int n1,n2;
	printf("enter the string1:");
	scanf("%s",str1);
	printf("enter the string2:");
	scanf("%s",str2);
	n1=strlen(str1);
	n2=strlen(str2);
	if(n1>n2)
	{
		printf("\n%s",str1);
	}
	else if(n2>n1)
	{
		printf("\n%s",str2);
	}
	else
	{
		printf("\n %s",str2);
	}
  getch();
	return 0;
}
