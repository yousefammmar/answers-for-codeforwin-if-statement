//C program to check whether triangle is valid or not if angles are given

#include <stdio.h>
int main (){
    int A,B,C;
      printf("Enter the angles of the triangle\n");
      scanf("%d\n%d\n%d",&A,&B,&C);
      if (A+B+C==180){
          printf("%d so the triangle is valid",A+B+C);
      }
      else
      printf("%d so the triangle is not valid",A+B+C);
    return 0;
}