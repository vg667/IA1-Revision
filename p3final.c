#include <stdio.h>
int input ()
{
  int a;
  printf("enter the numbers:\n");
    scanf("%d",&a);
      return a;
}
int sum_n(int n)
{
  int sum=0;
  for(int i=0;i<n;i++)
    sum+=i;
  return sum;
}
void output(int n,int sum)
{
  for(int i=1;i<n;i++)
    {
      printf("%d+",i);
    }
  printf("%d is %d",n,sum);
}
int main()
{
  int n,sum;
  n=input();
  sum=sum_n(n);
  output(n,sum);
  return 0;
}

