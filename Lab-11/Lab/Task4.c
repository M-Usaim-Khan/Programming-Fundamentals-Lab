// Task 4: A math student wants to write a small tool that calculates the circumference and area of a circle, but
// insists that the value of π never changes. Using a fixed constant for π, she wants the program to ask for a
// radius and then compute both results accurately. Construct this small calculator so she can use it during her
// geometry exercises.

#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, circumference, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;


    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}