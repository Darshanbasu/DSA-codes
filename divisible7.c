#include<stdio.h>
main()
{
int i,n1,n2;
printf("enter a number\n");
scanf("%d%d",&n1,&n2);
if(n1<n2)
{
printf("numbers divisible by seven are=");
i=n1;
while(i<=n2)
{
if(i%7==0)
printf("%d ",i);
i++;
}
}
else
printf("invalid numbers");
}
