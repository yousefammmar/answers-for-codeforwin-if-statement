//C program to calculate profit or loss
#include <stdio.h>
int main(){
    int co,se,pro;
    printf("Enter the cost of the product=");
    scanf("%d",&co);
    printf("\n Enter the sales of the product=");
    scanf("%d",&se);
    if(se>co){
        pro=se-co;
        printf("%d is the profit of the product and you are winning money",pro);
    }
    else if (se<co){
        pro=se-co;
        printf("%d you are losing money",pro);
    }
    return 0;
}