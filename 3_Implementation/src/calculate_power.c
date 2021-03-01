
#include "calculate_power.h"
void calculate_power()

{
    double Base_Number, exponent,result=1;
    //double  = 1;
    
    printf("Enter a base number: ");
    scanf("%lf", &Base_Number);
    printf("Enter an exponent: ");
    scanf("%lf", &exponent);
     
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
     printf("Answer = %lf", result);  
    
}
    
