#include "multiplication.h"
void multiplication(){
    double a,b,multiplication;
    printf("Enter Input 1:");
    scanf("%lf",&a);
    printf("Enter Input 2:"); 
    scanf("%lf",&b);
    multiplication=a*b;
    printf("The output of multiplication is:%lf",multiplication);
}
int multiplication(int a, int b){
   // double a,b,multiplication;
    //printf("Enter Input 1:");
    //scanf("%lf",&a);
    //printf("Enter Input 2:"); 
    //scanf("%lf",&b);
	//printf("The output of multiplication is:%d",a*b);
    return a*b;
    
}

