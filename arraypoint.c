#include<stdio.h>
int main(){
  int array[5];
  int* aptr=array;
  printf("\nEnter the elements:");
  for(int i=0;i<5;i++){
    scanf("%d",(array+i));
  }
  for(int i=0;i<5;i++){
    printf("%d\t",*(array+i));
  }
  return 0;
}
