/*
C program to enter basic salary and calculate gross salary of an employee
HRA->House Rent Allowance
DA->Dearness Allowance
*/
#include <stdio.h>
int main(){
    float sal,hra,da,gross_sal;
    printf("enter your salary:");
    scanf("%f",&sal);
    if(sal<=10000){
        hra=sal*0.2;
        da=sal*0.8;
    }
    else if (sal>10000&&sal<=20000){
        hra=sal*0.25;
        da=sal*0.9;
    }
    else{
        hra=sal*0.3;
        da=sal*0.95;
    }
    gross_sal=sal+da+hra;
    printf("the gross salary is :%f",gross_sal);
    return 0;
}