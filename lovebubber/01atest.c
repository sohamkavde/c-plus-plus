#include<stdio.h>
struct employee
{
  int emp_code;
  char emp_name[50];
  char  desig[50];
  float salary;
};

int main(){
  struct employee a;
  printf("Enter employee code\n");
  scanf("%d ",&a.emp_code);
  printf("\n Enter employee name");
  gets(a.emp_name);
  printf("\n Enter  designation");
  gets(a.desig);
  printf("\n Enter salary");
  scanf("%f",&a.salary);
  printf("\n code= %d",a.emp_code);
  printf("\n Name= %s",a.emp_name);
  printf("\n Designation= %s",a.desig);
  printf("\n salary = %f",a.salary);
 
  return 0;

}