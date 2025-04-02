#include<stdio.h>
typedef struct{
  char name[20];
  int id;
  int salary;
}employee;
int main(){
  int n;
  printf("Enter the number of Employees:");
  scanf("%d",&n);
  employee s[n];
  for(int i=0;i<n;i++){
    printf("\nEnter the employee name:");
    scanf("%s",s[i].name);
    printf("\nEnter the employee ID:");
    scanf("%d",&s[i].id);
    printf("\nEnter the employee's Salary:");
    scanf("%d",&s[i].salary);
  }
  printf("\nThe employee details:");
  for(int i=0;i<n;i++){
    printf("\nEmployee Name:%s",s[i].name);
    printf("\nEmployee ID:%d",s[i].id);
    printf("\nEmployee Salary:%d",s[i].salary);
  }
  return 0;
}
  
    
