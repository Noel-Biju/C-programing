#include<stdio.h>
void binary(int num);
int main(){
  int num;
  printf("Enter the number:");
  scanf("%d",&num);
  binary(num);
  return 0;
}
void binary(int num){
  int r,i=1;
  long int binary=0;
  while(num>0){
    r=num%2;
    binary=binary*i+r;
    i=i*10;
    num=num/2;
  }
  printf("The binary form is: %ld",binary);
}
