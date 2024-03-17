#include<stdio.h>
main()
{
int i,n1,n2,esum=0,osum=0;
printf("enter two numbers\n");
scanf("%d%d",&n1,&n2);
i=n1;
while(i<=n2)
{
if(i%2==0)
esum=esum+i;
else
osum=osum+i;
i++;
}
printf("sum of even numbers=%d\nsum of odd numbers=%d",esum,osum);
}
