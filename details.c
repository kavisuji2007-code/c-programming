#include <stdio.h>
#include<string.h>

struct student{
    int Id;
    float salary;
    
};
int main() {
    struct student emp[3];
    printf("---Employee Details---\n");
   int i;
   for(i=0;i<3;i++){
       
   printf("Employee %d:\n",i+1);
   printf("Employee Id:\n");
   scanf("%d",&emp[i].Id);
   printf("Salary:\n");
   scanf("%f",&emp[i].salary);
   }
   printf("---Employee Details---\n");
   for(i=0;i<3;i++){
    printf("Employee %d\n",i+1); 
    printf("Employee Id: %d\n",emp[i].Id);
    printf("salary: %.2f\n",emp[i].salary);
   }
    
    return 0;
}
OUTPUT
---Employee Details---
Employee 1:
Employee Id:
2029
Salary:
100000
Employee 2:
Employee Id:
2030
Salary:
200000
Employee 3:
Employee Id:
2040
Salary:
300000
---Employee Details---
Employee 1
Employee Id: 2029
salary: 100000.00
Employee 2
Employee Id: 2030
salary: 200000.00
Employee 3
Employee Id: 2040
salary: 300000.00


=== Code Execution Successful ===
