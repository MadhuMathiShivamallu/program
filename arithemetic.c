#include<stdio.h>
void onevariable(int,char);
int twovariable(int,int,char);
int main()
{
  char s;
  int number,n,num,number1,number2;
  printf("enter operator\n1.+\n2.-\n3.*\n4./");
  scanf("%c",&s);
  switch(s)
  {
    case '+':
    printf("1.onevariable\n2.twovariable");
    scanf("%d",&num);
    if(num==1)
    {
    printf("enter number");
    scanf("%d",&number);
onevariable(number,s);
}
  else
  {
    printf("enter number");
    scanf("%d\t%d",&number1,&number2);
   n=twovariable(number1,number2,s);
   printf("\n%d\n",n);
  }
  break;
   case '-':
    printf("1.nevariable\n2.twovariable");
      scanf("%d",&num);
    if(num==1)
    {
    printf("enter number");
    scanf("%d",&number);
onevariable(number,s);
}
  else
  {
    printf("enter number");
    scanf("%d\t%d",&number1,&number2);
   n= twovariable(number1,number2,s);
     printf("\n%d\n",n);
  }
  break;
   case '*':
    printf("1.onevariable\n2.twovariable");
      scanf("%d",&num);
    if(num==1)
    {
    printf("enter number");
    scanf("%d",&number);
onevariable(number,s);
}
  else
  {
    printf("enter number");
    scanf("%d\t%d",&number1,&number2);
   n= twovariable(number1,number2,s);
     printf("\n%d\n",n);
  }
  break;
   case '/':
    printf("1.onevariable\n2.twovariable");
      scanf("%d",&num);
    if(num==1)
    {
    printf("enter number");
    scanf("%d",&number);
onevariable(number,s);
}
  else
  {
    printf("enter number");
    scanf("%d\t%d",&number1,&number2);
   n= twovariable(number1,number2,s);
     printf("\n%d\n",n);
  }
  break;
default:
break;
}
return 0;
}
void onevariable(int a,char c)
{
  if(c=='+')
  {
    a+=a;
    printf("%d",a);
  }
  else if(c=='-')
  {
    a-=a;
    printf("%d",a);
  }
  else if(c=='*')
  {
    a*=a;
    printf("%d",a);
  }
  else
  
  {
    a/=a;
    printf("%d",a);
  }
  }
  int twovariable(int a,int b,char c)
  {
    if(c=='+')
  {
    a+=b;
  return a;
  }
  else if(c=='-')
  {
    a-=b;
   return a;
  }
  else if(c=='*')
  {
    a*=b;
    return a;
  }
  else
   {
    return a;
  }
  }
