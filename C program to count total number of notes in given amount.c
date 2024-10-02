//C program to count total number of notes in given amount
#include <stdio.h>
int main () {
	int x,ans;
	printf("enter any number");
	scanf("%d",&x);
	if (x>=500) {
		ans=x/500;
		printf("500:%d\n",ans);
		x =x%500;
	}
 if (x>=100) {
		ans=x/100;
		printf("100:%d\n",ans);
		x=x%100;
	}	 if (x>=50) {
		ans=x/50;
		printf("50:%d\n",ans);
		x=x%50;
	}
	 if (x>=20) {
		ans=x/20;
		printf("20:%d\n ",ans);
		x=x%20;
	}
  if (x>=10){
        ans=x/10;
        printf("10:%d\n",ans);
        x=x%10;
    }
      if (x>=5){
        ans=x/5;
        printf("5:%d\n",ans);
        x=x%5;
    }
    if (x>=1){
        ans=x/1;
        printf("1:%d\n",ans);
    }
	return 0 ;
}