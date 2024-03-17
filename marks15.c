#include<stdio.h>
main()
{
int i,marks,p=0,n;
printf("enter the number of students\n");
scanf("%d",&n);
i=1;
while(i<=n)
{
printf("enter the marks of students\n");
scanf("%d",&marks);
if(marks>15)
{
p=p+1;
}
i++;
}
printf("total number of students who got marks more than 15=%d",p);
}
