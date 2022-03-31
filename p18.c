#include<stdio.h>
struct complex
{
 int real,imaginary; 
};
int get_n()
{
  int n;
  printf("enter the value of n\n");
  scanf("%d",&n);
  return n;
}
struct complex input_chellox()
{
 struct complex p;
 printf("enter the imaginary num\n");
 scanf("%d %d",&p.real,&p.imaginary);
 return p; 
}
void input_n_complex(int n,struct complex c[n])
{ 
  int i;
  for(i=0;n>i;i++)
  {
  c[i]=input_chellox();
  }
}
struct complex add_n_complex(int n,struct complex c[n])
{
  int i;
  struct complex g;
  g.real=0;
  g.imaginary=0;
  for(i=0;n>i;i++)
  {
  g.real=g.real+c[i].real;
  g.imaginary=g.imaginary+c[i].imaginary;
  }
  return g;
}
void output(int n,struct complex c[n],struct complex result)
{ 
  int i;
  printf("%d+%di\n",c[0].real,c[0].imaginary);
  for(i=1;n>i;i++)
  {
    printf("%d+%di\n",c[i].real,c[i].imaginary);
  }
  printf("=%d+%di\n",result.real,result.imaginary);
}
int main()
{
  struct complex sum;
  int n ;
  n=get_n();
  struct complex c[n];
  input_n_complex(n,c);
  sum= add_n_complex(n,c);
  output(n,c,sum);
  return 0;
}
