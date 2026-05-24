#include<stdio.h>
int main () {
int a;
printf("Please enter the number\n");
scanf("%d",&a);
if(a>0) {
printf("The entered number is +ve");
}
else if(a==0) {
printf("Number entered is 0");
}
else {
printf("Number entered is -ve");
}
return 0;
}