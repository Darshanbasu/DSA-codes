#include<stdio.h>
main()
{
void biggest(int *a, int *b);
int a,b;
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
biggest(&a,&b);

}
void biggest(int *x,int *y)
{
int p=0;
if(*x>*y)
{
printf("%d is greater than %d",*x,*y);
}
else
printf("%d is greater than %d",*y,*x);

}
