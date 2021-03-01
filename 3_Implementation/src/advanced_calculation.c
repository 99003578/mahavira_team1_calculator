#include "advanced_calculation.h"
#include "prime.h"
#include "factorial.h"
#include "square.h"
#include "calculate_power.h"
#include "dates.h" 

char advanced_calculation(){

int n,num,catch,operand1, operand2;
int yyy;
char back=0;

    do{
    printf("1.Power  2.factorial 3.square  4.prime  5.Days caclulation  6.leap year");
    printf("\n Enter your choice:");
    scanf("%d",&num);

        switch(num){

            case 1: printf("Enter a base number: ");
                    scanf("%d",&operand1);
                    printf("Enter an exponent: ");
                    scanf("%d", &operand2);

                    catch = calculate_power(operand1, operand2);

                    printf("The power is = %d", catch);

                    printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    scanf(" %c", &back);
                    break;

            case 2: printf("enter the number");
                    scanf("%d", &operand1);

                    catch = factorial(operand1);

                    printf("the factorial is %d", catch);  

                    printf("The factorial of the number is = %d", catch);

                    printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    scanf(" %c", &back);
                    break;


            case 3: printf("Enter a positive integer: ");
                    scanf("%d", &operand1);

                    catch = square(operand1);

                    printf("The square of the number is = %d", catch);

                    printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    scanf(" %c", &back);
                    break;

            case 4: printf("Enter a positive integer: ");
                    scanf("%d", &operand1);

                    catch = prime(operand1);

                    //printf("The power of the number is = %d", catch);

                    printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    scanf(" %c", &back);
                    break;

            case 5: catch = datescalc();

                    printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    scanf(" %c", &back);
                    break;

            case 6: printf("Enter the Year ");
                    scanf("%d",&yyy);
                    if(yyy>999&&yyy<9999)
                    {leapyear(yyy);}
                    else
                    {printf("enter a valid year");}    
                    printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    scanf(" %c", &back);
                    break;
                    
            default: back = 'E'; 
        }
    }while(back!= 'N');

    return 'M';

}
