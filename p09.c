#include<stdio.h>
#include<math.h>
void input(float*x1,float*y1,float*x2,float*y2)
{
  printf("enter the value of x1 and y1 value\n");
  scanf("%f%f",x1,y2);
  printf("enter the value of x2 and y2 value\n");
  scanf("%f%f",x2,y2);
}
void find_distance(float x1,float y1,float x2,float y2,float *area)
{
  *area=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}
void output(float x1,float y1,float x2,float y2,float area)
{
  printf("distance between (%f,%f) and (%f,%f) is %f \n",x1,x2,y1,y2,area);
}
int main()
{
  float x1,x2,y1,y2,area;
  input(&x1,&x2,&y1,&y2);
  find_distance(x1,x2,y1,y2,&area);
  output(x1,x2,y1,y2,area);
  return 0;
  }
