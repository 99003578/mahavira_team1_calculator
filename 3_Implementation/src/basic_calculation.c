#include "basic_calculation.h"
#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"


char basic_calculation(){
int num,catch, operand1, operand2;
char back=0;

do{
    printf("\n 1.Addition   2.Subtraction  3.Multiplication  4.Division \n\n");
    printf("\n Enter your choice:");
    scanf("%d",&num);

        switch(num){

            case 1: printf("Enter Input 1:");
                    scanf("%d",&operand1);
                    printf("Enter Input 2:");
                    scanf("%d",&operand2);

                    catch = addition(operand1, operand2);

                    printf("the sum is %d", catch);

                    printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    scanf(" %c", &back);
                    break;

            case 2: printf("Enter Input 1:");
                    scanf("%d",&operand1);
                    printf("Enter Input 2:");
                    scanf("%d",&operand2);

                    catch = subtraction(operand1, operand2);

                    printf("the difference is %d", catch);

                    printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    scanf(" %c", &back);
                    break;

            case 3: printf("Enter Input 1:");
                    scanf("%d",&operand1);
                    printf("Enter Input 2:");
                    scanf("%d",&operand2);

                    catch = multiplication(operand1, operand2);

                    printf("the product is %d", catch);
                    
                    printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    scanf(" %c", &back);
                    break;

            case 4: printf("Enter Input 1:");
                    scanf("%d",&operand1);
                    printf("Enter Input 2:");
                    scanf("%d",&operand2);

                    catch = division(operand1, operand2);

                    printf("the quotient is %d", catch);
                    
                    printf("\n\n\n PRESS Y - SAME Menu    PRESS N - MAIN Menu\n");
                    scanf(" %c", &back);
                    break;
        }
    }while(back!= 'N');

    return 'M';

}