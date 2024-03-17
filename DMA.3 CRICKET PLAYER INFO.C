#include<stdio.h>
#include<stdlib.h>
struct player
{
    char pname[20];
    char natn[20];
    int odi_rank,runs;
    float bat_avg;

};
  struct player *p1,*p2,*p3;
  main()
  {
      p1=(struct player*)malloc(sizeof(struct player));
      p2=(struct player*)malloc(sizeof(struct player));
      p3=(struct player*)malloc(sizeof(struct player));

      void lowavg(struct player *p1,struct player *p2,struct player *p3);
      void highrank(struct player *p1,struct player *p2,struct player*p3);
      printf("Enter the cricket player info\n");
      printf("enter the player 1 info\n");
      scanf("%s%s%d%d%f",&p1->pname,&p1->natn,&p1->odi_rank,&p1->runs,&p1->bat_avg);

       printf("enter the player 2 info\n");
      scanf("%s%s%d%d%f",&p2->pname,&p2->natn,&p2->odi_rank,&p2->runs,&p2->bat_avg);

       printf("enter the player 3 info\n");
      scanf("%s%s%d%d%f",&p3->pname,&p3->natn,&p3->odi_rank,&p3->runs,&p3->bat_avg);

      lowavg(p1,p2,p3);
      highrank(p1,p2,p3);
      free(p1);
      free(p2);
      free(p3);


  }
   void lowavg(struct player *p1,struct player *p2,struct player *p3)
   {
        printf("the batter having less batting avg is\n");

      if(p1->bat_avg<p2->bat_avg&&p1->bat_avg<p3->bat_avg)
      {
          printf("name=%s nation=%s odi rank=%d runs=%d average=%f\n",p1->pname,p1->natn,p1->odi_rank,p1->runs,p1->bat_avg);

      }
       else if(p2->bat_avg<p1->bat_avg&&p2->bat_avg<p3->bat_avg)
       {
              printf("name=%s nation=%s odi rank=%d runs=%d average=%f\n",p2->pname,p2->natn,p2->odi_rank,p2->runs,p2->bat_avg);
       }
       else if(p3->bat_avg<p1->bat_avg&&p3->bat_avg<p2->bat_avg)
       {
             printf("name=%s nation=%s odi rank=%d runs=%d average=%f\n",p3->pname,p3->natn,p3->odi_rank,p3->runs,p3->bat_avg);
       }
   }

   void highrank(struct player *p1,struct player *p2,struct player *p3)
   {
        printf("the batter having highest odi rank is\n");

       if(p1->odi_rank<p2->odi_rank&&p1->odi_rank<p3->odi_rank)
       {
          printf("name=%s nation=%s odi rank=%d runs=%d average=%f\n",p1->pname,p1->natn,p1->odi_rank,p1->runs,p1->bat_avg);
       }

       else if(p2->odi_rank<p1->odi_rank&&p2->odi_rank<p3->odi_rank)
       {
           printf("name=%s nation=%s odi rank=%d runs=%d average=%f\n",p2->pname,p2->natn,p2->odi_rank,p2->runs,p2->bat_avg);
       }
        else if(p3->odi_rank<p1->odi_rank&&p3->odi_rank<p2->odi_rank)
       {
           printf("name=%s nation=%s odi rank=%d runs=%d average=%f\n",p3->pname,p3->natn,p3->odi_rank,p3->runs,p3->bat_avg);
       }

   }










