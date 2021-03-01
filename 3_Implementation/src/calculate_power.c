
#include "calculate_power.h"
void calculate_power()

{
    double Base_Number, exponent;
    double result = 1;
    
    printf("Enter a base number: ");
    scanf("%lf", &Base_Number);
    printf("Enter an exponent: ");
    scanf("%lf", &exponent);

    while (exponent != 0)
    {
        result *= Base_Number;
        --exponent;

    printf("Answer = %lf", result);
    }

     printf("Invalid");
    
}   
    
