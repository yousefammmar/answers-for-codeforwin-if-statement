//C program to enter student marks and find percentage and grade
#include <stdio.h>
int main (){
    int m1,m2,m3,m4,m5;
    float per;
    printf("enter the mark of physics=");
    scanf("%d",&m1);
        printf("enter the mark of biology=");
    scanf("%d",&m2);
        printf("enter the mark of math=");
    scanf("%d",&m3);
        printf("enter the mark of chemistry=");
    scanf("%d",&m4);
        printf("enter the mark of computer=");
    scanf("%d",&m5);
    per=(m1+m2+m3+m4+m5)/5;
    if(per>=90.00)
    printf("%0.2f grade A",per);
    else if(per>=80.00)
    printf("%0.2f grade B",per);
    else if(per>=70.00)
    printf("%0.2f grade C",per);
    else if(per>=60.00)
    printf("%0.2f grade D",per);
    else if(per>=40.00)
    printf("%0.2f grade E",per);
    else 
    printf("%0.2f grade F",per);
    
    return 0;
}