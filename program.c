#include<stdio.h>
int main()
{
int x,p,sum=0;
scanf("%d %d\n",&x,&p);
while(x>0)
{
sum=sum+x;
int y=x*(p/100);
x=x-y;
}
printf("%d\n",sum);
return 0;
}
