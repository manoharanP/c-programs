#include<stdio.h>
int main()
{
int i,N, sum=0;
scanf("%d",&N);
for(i=0;i<N;i++)
{
  if(N>='0'&&N<='9')
sum+=i;
printf("%d",sum);
return 0;
}
