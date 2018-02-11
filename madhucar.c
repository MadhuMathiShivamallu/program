#include<stdio.h>
void move();
void brake();
void slowspeed(int);
int main()
{
  int dest,i;
  printf("enter destination km");
  scanf("%d",&dest);
  printf("the car started to drive");
  for(i=1;i<=dest;i++)
  {
    move();
    if(i==dest)
    {
      brake();
    printf("destination reached");
      
    }
  }
  return 0;
}
void move()
{
  int obstacle,constspeed=80,bend,left,right;
printf("1.speedbreaker\n2.crossing\n3.red\n4.greenand yellow\n5.leftbend\n6.right bend");
scanf("%d",&obstacle);
  if((obstacle==2)||(obstacle==3))
  {
    brake();
  }
else if((obstacle==1)||(obstacle==5)||(obstacle==6))
{
  slowspeed(obstacle);
}
  else
  {
    printf("the car moving at speed 80km/h");
  }
}
void brake()
{int i;
  printf("the car is stopped");
  for(i=1;i>=0;i--)
  {
    if(i==0)
    {
      move();
    }
  }
}
void slowspeed(int obstacle)
{int i;
  printf("the car moving slowspeed");
  for(i=1;i>=0;i--)
  {
    if(i==0)
    {
      move();
    }
  }
  if(obstacle==5)
  {
    printf("car truned to left");
  }
  else
  {
      printf("car truned to right");
  }
}

