//The vending machine
#include <stdio.h>
int main (){
    float change,money;
    int code;
    printf("enter money:");
    scanf("%f",&money);
    printf("please enter the item code:");
    scanf("%d",&code);
    switch (code)
    {
        case 1:
        if(money>=1.5)
        {
            printf("Dispensing chips\n\a");
            change=money-1.5;
            printf("change returned:%0.3f",change);
           
        }
        else
        printf("not enough money. money returned:%f",money);
         break;
        case 2:
        if(money>=2)
        {
            printf("Dispensing choclate\n\a");
            change=money-2.00;
            printf("change returned:%0.3f",change);
            
        }
        else
        printf("not enough money. money returned:%f",money);
         break;
        case 3:
        if(money>=1.75)
        {
            printf("Dispensing soda\n\a");
            change=money-1.75;
            printf("change returned:%0.3f",change);
            
        }
        else
        printf("not enough money. money returned:%f",money);
         break;
         case 4:
        if(money>=1)
        {
            printf("Dispensing water\n\a");
            change=money-1.00;
            printf("change returned:%0.3f",change);
         
        }
        else
        printf("not enough money. money returned:%f",money);
         break;
         default:
        printf("item code not valid.Returning money:%f",money);
    }
    return 0;
} 