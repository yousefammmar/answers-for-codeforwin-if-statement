//C program to check whether triangle is equilateral, scalene or isosceles
#include <stdio.h>
int main (){
    int x,y,z;
    printf("enter all sides of the triangle:");
    scanf("%d\n%d\n%d",&x,&y,&z);
    if(x==z&&x==y&z==y)
    printf("the triangle is equilateral");
    else if (x==z||y==z||x==y)
    printf("the triangle is scalene");
    else
    printf("the triangle is isosceles");
    return 0;
}