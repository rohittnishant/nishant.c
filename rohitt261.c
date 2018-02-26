#include<stdio.h>
#include<conio.h>
void main()
{
 int c,count=0;
 char a[20]="Narniya part 2.watched 2 times";
 for(c=0;a[c]!=0;c++)
 {
  if(a[c]>='0'||a[c]<='9')
  {
  count++;
  }
  }
  printf("the count is %d",count);
  return 0;
  }
