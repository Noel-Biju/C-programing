#include<stdio.h>
int power(int base,int exp){
  if(exp==0){
    return 1;
  }else{
    return base*power(base,exp-1);
  }
}
int main(){
  int base,exp,result;
  printf("Enter the base:");
  scanf("%d",&base);
  printf("Enter the exponent:");
  scanf("%d",&exp);
  result=power(base,exp);
  printf("%d raised to the power of %d is: %d\n",base,exp,result);
  return 0;
}
