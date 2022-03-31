#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the size of array\n");
  scanf("%d",&n);
  return n;
}
void init_array(int n,int a[n])
{
  int i;
  for(i=1; i<n; i++)
    {
      a[i]=i+1;
    }
}
void erotosthenes_sieve(int n,int a[n])
{
  /*int i,j;
  for(i=1;i<n;i++)
    {
      if(a[i]==0);
      continue;
      for(j=a[i]+1;j<=n;j++)
        {
          if(j%a[i]==0)
          a[j-1] =0;
        }
    }
}*/
  for(int i=1;i<=n;i++)
    {
      for(int j=2;j<a[i];j++)
        {
          if(a[i]%j==0)
          {
            a[i]=0;
            break;
          }
        }
    }
  }
void out_put(int n,int a[n])
{
  /*int i;
  printf("the prime numbers are\n");
  for(i=0;i<n;i++)
    {
      printf("%d  ",a[i]);
    }*/
  for(int i=0;i<n;i++)
    {
      if(a[i]!=0)
      {
        printf("%d  ",a[i]);
      }
    }
}
int main()
{
  int n;
  n=input_array_size();
  int a[n];
  init_array(n,a);
  erotosthenes_sieve(n,a);
  out_put(n,a);
  return 0;
}

