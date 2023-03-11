#include<stdio.h>

int main(){
    float r;
    printf("enter the value of r:");
    scanf("%f", &r);
    printf("diameter of circle is %f \n", 2*r);
    printf("circumference of circle is %f \n", 2*3.14*r);
    printf("area of the circle is %f \n", 3.14*r*r);

    return 0;
}