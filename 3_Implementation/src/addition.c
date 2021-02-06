#include "addition.h"
void addition(){
    int a,b,sum;
    printf("Enter Input 1:");
    scanf("%d",&a);
    if(a>32767)
    {
        printf("Please enter the number below 32768");
    }
    printf("Enter Input 1:"); 
    scanf("%d",&b);
    printf("Please enter the number below 32768");
    sum=a+b;
    printf("The output of addition is:%d",sum);
}