#include <division.h>
#include <stdio.h>
int division()
{
    float num1, num2;
    float quotient;
    printf("Enter the dividend : ");
    scanf("%f", &num1);
    if(num1 == 0){
        printf("0");
        return 0;
     }
    printf("Enter the divisor : ");
    scanf("%f",  &num2);
    if(num2 == 0){
        printf("infinty\n");
        return 0;
     }
    quotient = num1 / num2;
    printf("Quotient = %.02f", quotient);
    return 0;
}
