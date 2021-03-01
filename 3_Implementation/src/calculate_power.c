
#include "calculate_power.h"
void calculate_power()

{
    double Base_Number, exponent;
    long long result = 1;
    
    printf("Enter a base number: ");
    scanf("%ld", &Base_Number);
    printf("Enter an exponent: ");
    scanf("%ld", &exponent);

    while (exponent != 0)
    {
        result *= Base_Number;
        --exponent;
    }
    
    printf("Answer = %lld", result);
    
}   
    
