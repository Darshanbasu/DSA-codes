#include<stdio.h>
#define NULL 0
#include<stdlib.h>
struct cust
{
  char name[30];
  char g[30];
  int cp;
  struct cust *link;
};

main()
{
struct cust *head,*start,*ptr;
head=NULL;
int ch;
struct cust* insert_at_front(struct cust*,struct cust*);
struct cust* insert_at_end(struct cust*,struct cust*);
void discar(struct cust*);
void dibike(struct cust*);
void rem(struct cust*);
do
{
   printf("1--ADD CUSTOMER AT FRONT\n");
   printf("2--ADD CUSTOMER AT END\n");
   printf("3--DISPLAY CAR WINNERS\n");
   printf("4--DISPLAY BIKE WINNERS\n");
    printf("5*--REMOVE CUSTOMERS WHO WON NOTHING\n");
   printf("6--EXIT\n");
   printf("enter your choice\n");
   scanf("%d",&ch);

   switch(ch)
   {
     case 1:ptr=(struct cust*)malloc(sizeof(struct cust));
            printf("enter name gender code\n");
            scanf("%s%s%d",&ptr->name,&ptr->g,&ptr->cp);
            head=insert_at_front(head,ptr);
            break;
    case 2:ptr=(struct cust*)malloc(sizeof(struct cust));
            printf("enter name gender code\n");
            scanf("%s%s%d",&ptr->name,&ptr->g,&ptr->cp);
            head=insert_at_end(head,ptr);
            break;
    case 3: if(head==NULL)
            printf("SLL is empty\n");
            else
            {
              discar(head);
            }
            break;
    case 4: if(head==NULL)
            printf("SLL is empty\n");
            else
            {
              disbike(head);
            }
            break;
    case 5: rem(head);break;

   }
}while(ch!=6);
}

struct cust* insert_at_front(struct cust *head, struct cust *ptr)
{
    if(head==NULL)
    {
       head=ptr;
       head->link=NULL;
    }
    else
    {
      ptr->link=head;
      head=ptr;
    }
    return(head);
}

struct cust* insert_at_end(struct cust *head, struct cust *ptr)
{
    struct cust *start;
    if(head==NULL)
    {
       head=ptr;
       head->link=NULL;
    }
    else
    {
      start=head;
      while(start->link!=NULL)
      {
         start=start->link;
      }
      start->link=ptr;
      ptr->link=NULL;
    }
    return(head);
}

void discar(struct cust *head)
{
   struct cust *start;
   start=head;
   while(start!=NULL)
   {
   if(((start->cp)%3)==0 &&((start->cp)%9)==0)
     {
         printf("name=%s\t gender=%s\t code=%d\n",start->name,start->g,start->cp);
       }
       start=start->link;
   }
}

void disbike(struct cust *head)
{
   struct cust *start;
   start=head;
   while(start!=NULL)
   {
   if((start->cp%3)==0 &&((start->cp)%9)!=0)
     {
           printf("name=%s\t gender=%s\t code=%d\n",start->name,start->g,start->cp);
       }
              start=start->link;
}
}
void rem(struct cust *head)
{
    struct cust *cur,*start;
    start=head;
    cur=head;
     printf("removed customers\n");
    while(start!=NULL)
    {
        if(start->cp%3!=0 && start->cp%9!=0)
        {
           cur->link=start->link;
            printf("name=%s\t gender=%s\t cpn=%d\n",start->name,start->g,start->cp);
            free(start);
            start=cur->link;

        }
        cur=start;
        start=start->link;
    }
}
