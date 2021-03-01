#include "calculate_power.h"

int calculate_power(int Base_Number, int exponent)

{
    //double Base_Number, exponent,
    //double  = 1;
    //printf("Enter a base number: ");
    //scanf("%lf", &Base_Number);
    //printf("Enter an exponent: ");
    //scanf("%lf", &exponent);
    int result=1;
     
     while(exponent != 0)
    {
        result *= Base_Number;
        --exponent;
    }    
       if (Base_Number==0)
     {
         printf("Invalid");
         exit(0);
     }
     //printf("Answer = %d", result); 
     return result; 
    
}
    
