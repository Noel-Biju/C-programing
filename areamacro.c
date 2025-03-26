#include<stdio.h>
#define pi 3.14159
int main(){
  int r1,r2,h;
  float area1,area2;
  printf("Enter the radius of the circle:");
  scanf("%d",&r1);
  printf("Enter the radius of the cylinder:");
  scanf("%d",&r2);
  printf("Enter the height of the cylinder:");
  scanf("%d",&h);
  area1=pi*r1*r1;
  area2=2*pi*r2*(r2+h);
  printf("The area of the circle is: %f\n",area1);
  printf("The area of the cylinder is: %f",area2);
  return 0;
}
