#include<stdio.h>
typedef struct{
  int rollno;
  char name[20];
  float cgpa;
}student;
int main(){
  student s1;
  printf("Enter the Name:");
  scanf("%s",s1.name);
  printf("Enter the Roll No:");
  scanf("%d",&s1.rollno);
  printf("Enter the CGPA:");
  scanf("%f",&s1.cgpa);
  printf("\n");
  printf("The student details:");
  printf("\nName:%s",s1.name);
  printf("\nRoll No:%d",s1.rollno);
  printf("\nCGPA:%f",s1.cgpa);
  return 0;
  }


