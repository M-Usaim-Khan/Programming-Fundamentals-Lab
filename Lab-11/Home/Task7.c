#include <stdio.h>
#include <string.h>

struct Department{
    char name[50];
    int bNum;
};

struct Student{
    int id;
    char name[50];
    float cgpa;
    struct Department depart;
};

int main(){
    struct Student stu;
    printf("Enter Student ID: ");
    scanf("%d", &stu.id);
    getchar();
    printf("Enter Student Name: ");
    fgets(stu.name, sizeof(stu.name), stdin);
    printf("Enter Student CGPA: ");
    scanf("%f", &stu.cgpa);
    getchar();
    printf("Enter Department Name: ");
    fgets(stu.depart.name, sizeof(stu.depart.name), stdin);
    printf("Enter Block Number of Department: ");
    scanf("%d", &stu.depart.bNum);


    printf("\n--- Student Information ---\n");
    printf("ID: %d\n", stu.id);
    printf("Name: %s", stu.name);
    printf("CGPA: %.2f\n", stu.cgpa);
    printf("Department Name: %s", stu.depart.name);
    printf("Department Block Number: %d\n", stu.depart.bNum);
    return 0;


}