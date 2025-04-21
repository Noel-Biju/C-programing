#include<stdio.h>
void swap(int *a,int *b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
int main(){
  int n1=10,n2=20;
  swap(&n1,&n2);
  printf("n1=%d n2=%d",n1,n2); 
  return 0;
}
