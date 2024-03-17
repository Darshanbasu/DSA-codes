#include<stdio.h>
main()
{
int n,p=1,i;
printf("enter the number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
p=p*i;
printf("factorial of %d=%d",n,p);
}
