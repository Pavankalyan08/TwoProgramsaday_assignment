#include<stdio.h>
#include<math.h>
int input()
{
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int fibo=0;
  int a=0;
  int b=1;
  for(int i=0;i<n;i++)
    {
      fibo=a;
      a=b;
      b=fibo+b;
    }
  return fibo;
}
void output(int n,int fibo)
{
  printf("fibonacci sequence of %d is %d \n",n,fibo);
}
int main()
{
  int n,fibo;
  n=input(n);
  fibo=find_fibo(n);
  output(n,fibo);
  return 0;
}
