//C program to find all roots of a quadratic equation
#include <stdio.h>
#include <math.h>
int main (){
    float a,b,c,r1,r2,discriminant;
    printf("enter the value of a,b, and c of the :");
    scanf("%f%f%f",&a,&b,&c);
    //ax^2+bx+c
    discriminant=(b*b)-(4*a*c);
    r1=(-b+sqrt(discriminant))/(2*a);
    r2=(-b-sqrt(discriminant))/(2*a);
    printf("Root 1 =%f\n",r1);
    printf("Root 2 =%f",r2);
    return 0;
}