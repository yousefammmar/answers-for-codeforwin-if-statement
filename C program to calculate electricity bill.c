//C program to calculate electricity bill
#include <stdio.h>
int main (){
    float unit,amt,sur_charge,net_amt;
    printf("enter the units that are consumed by the user=");
    scanf("%f",&unit);
    if (unit<=50){
        amt=unit*0.5;
    }
    else if (unit>50&&unit>=150){
        amt=25+(unit-50)*0.75;
    }
    else if (unit>150&&unit>=250){
        amt=100+(unit-150)*1.2;
    }
    else if (unit>250){
        amt=220+(unit-250)*1.5;
    }
    sur_charge=amt*0.2;
    net_amt=sur_charge+amt;
    printf("the cost is %f",net_amt);
    
    return 0;
}