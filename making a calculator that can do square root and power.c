//making a calculator that can do square root and power
#include <stdio.h>
#include <math.h>
int main(){
    char op;
    int num1,num2,sum;
    printf("if you want to find the square root enter the letter s\n");
    printf("enter the operation you want to apply:");
    scanf("%c",&op);
    if(op=='+'||op=='-'||op=='*'||op=='/'||op=='^'){
        printf("enter any two numbers:");
        scanf("%d",&num1);
        scanf("%d",&num2);
        if(op=='+'){
            sum=num1+num2;
            printf("the answer of %d+%d=%d",num1,num2,sum);
        }
        else if(op=='-'){
            sum=num1-num2;
            printf("the answer of %d-%d=%d",num1,num2,sum);
        }
        else if(op=='/'&&num2!=0){
            sum=num1/num2;
            printf("the answer of %d/%d=%d",num1,num2,sum);
        }
        else if(op=='*'){
            sum=num1/num2;
            printf("the answer of %d*%d=%d",num1,num2,sum);
        }
        else if(op=='^'){
            sum=pow(num1,num2);
            printf("the answer of %d^%d=%d",num1,num2,sum);
        }
    }
    else if(op=='s'){
            float num,result;
            
            printf("enter any number:");
            scanf("%f",&num);
            result=sqrt(num);
            printf("the square root for %0.2f=%0.2f",num,result);
        }
    return 0;
}
