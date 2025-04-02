#include<stdio.h>
typedef struct{
  int rollNo;
  char name[20];
  float cgpa;
}student;
int main(){
  student s[5];
  for(int i=0;i<5;i++){
    printf("\nEnter the Roll No:");
    scanf("%d",&s[i].rollNo);
    printf("\nEnter the Name:");
    scanf("%s",s[i].name);
    printf("\nEnter the CGPA:");
    scanf("%f",&s[i].cgpa);
  }
  printf("\nThe Student Details Are:");
  for(int i=0;i<5;i++){
    printf("\nRoll No:%d",s[i].rollNo);
    printf("\nName:%s",s[i].name);
    printf("\nCGPA:%f",s[i].cgpa);
  }
  return 0;
}
