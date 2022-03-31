#include<stdio.h>
#include<math.h>
void input_(float *x1, float *y1, float *x2, float *y2,float *x3, float *y3)
{
  printf("enter the value of x,y\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
 int sum=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
  return sum;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  if(istriangle ==0)
    printf("the points (%f,%f),(%f,%f),(%f,%f) form a triangle\n",x1,y1,x2,y2,x3,y3);
  else
    printf("the points (%f,%f),(%f,%f),(%f,%f) do not  form a triangle\n",x1,y1,x2,y2,x3,y3);
}
int main()
{
  float x1,y1,x2,y2,x3,y3;
  input_(&x1,&y1,&x2,&y2,&x3,&y3);
  int a=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,a);
  return 0;
}
