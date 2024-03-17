#include<stdio.h>
main()
{
void even(int n);
int evene,n;
printf("enter the number\n");
scanf("%d",&n);
even(n);

}
void even(int n)
{
int dig,rev=0,t=n;
printf("even digits are=");
while(n!=0)
{
dig=n%10;
if(dig%2==0)
printf("%d ",dig);
n=n/10;
}

}
