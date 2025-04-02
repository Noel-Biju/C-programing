#include<stdio.h>
typedef struct{
  char name[20];
  int rollNo;
  int sub1;
  int sub2;
  int sub3;
}student;
int main(){
  int n,total=0,avg=0;
  printf("Enter the number of students:");
  scanf("%d",&n);
  student s[n];
  for(int i=0;i<n;i++){
    printf("\nEnter the name:");
    scanf("%s",s[i].name);
    printf("\nEnter the roll no:");
    scanf("%d",&s[i].rollNo);
    printf("\nEnter the mark of subject 1:");
    scanf("%d",&s[i].sub1);
    printf("\nEnter the mark of subject 2:");
    scanf("%d",&s[i].sub2);
    printf("\nEnter the mark of subject 3:");
    scanf("%d",&s[i].sub3);
  }
  printf("\nThe student details:");
  for(int i=0;i<n;i++){
    printf("\nName:%s",s[i].name);
    printf("\nRollNo:%d",s[i].rollNo);
    printf("\nSub1:%d",s[i].sub1);
    printf("\nSub2:%d",s[i].sub2);
    printf("\nSub3:%d",s[i].sub3);
    printf("\n");
    total+=s[i].sub1+s[i].sub2+s[i].sub3;
  }
  avg=total/n;
  printf("\nThe total marks of the students are:%d",total);
  printf("\nThe average marks is :%d",avg);
  return 0;
}
