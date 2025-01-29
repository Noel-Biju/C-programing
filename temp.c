#include<stdio.h>
int main(){
  float temp;
  printf("\nEnter the temperature:");
  scanf("%f",&temp);
  if(temp<0){
    printf("\nFreezing weather");
  }
  else if (temp>=0 && temp<10){
    printf("\nVery Cold weather");
  }
  else if (temp>=10 && temp<20){
    printf("\nCold weather");
  }
  else if (temp>=20 && temp<30){
    printf("\nNormal temperature");
  }
  else if (temp>=30 && temp<40){
    printf("\nHot temperature");
  }
  else {
    printf("\nNormal temperature");
  }
  return 0;
}
   
  
