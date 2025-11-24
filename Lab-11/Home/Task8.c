#include <stdio.h>

struct Employee{
    int id;
    char name[50];
    float salary;
    char position[50];
};

int main(){
    struct Employee employees[5];
    struct Employee sample1 = {1,"Ali",50000,"Frontend Developer"};
    employees[0] = sample1;
    struct Employee sample2 = {2,"Ahmed",60000,"Backend Developer"};
    employees[1] = sample2;
    struct Employee sample3 = {3,"Aisha",55000,"Fullstack Developer"};
    employees[2] = sample3;
    struct Employee sample4 = {4,"Sara",70000,"Project Manager"};
    employees[3] = sample4;
    struct Employee sample5 = {5,"Omar",65000,"DevOps Engineer"};
    employees[4] = sample5;

    struct Employee highestPaid = employees[0];
    for(int i=1; i<5; i++){
        if(employees[i].salary > highestPaid.salary){
            highestPaid = employees[i];
        }
    }

    printf("Highest Paid Employee:\n");
    printf("ID: %d\n", highestPaid.id);
    printf("Name: %s\n", highestPaid.name);
    printf("Salary: %.2f\n", highestPaid.salary);
    printf("Position: %s\n", highestPaid.position);
    return 0;

    


}