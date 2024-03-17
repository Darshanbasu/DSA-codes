#include<stdio.h>
main()
{
int n;
void prime(int num);
printf("enter the number");
scanf("%d",&n);
prime(n);
}
void prime(int n)
{
int i,p=0;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
p=1;
break;
}
}
if(p==1)
printf("it is not a prime");
else
printf("it is prime");
}
