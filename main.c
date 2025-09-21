#include <stdio.h>
#include <stdlib.h>
#include "vending_machine.h"
int main(){
    int item_number;
    int item_quantity;
    int money;

    while (1){
            // loop continuously until customer decides to EIXT
    printf("====Welcome to C Vending Machine====\n");
    printf("1. Soda\t\t -%d UGX\n", SODA);
    printf("2. Water\t -%d UGX\n", WATER);
    printf("3. Juice\t -%d UGX\n", JUICE);
    printf("4. Crisps\t -%d UGX\n",CRISPS);
    printf("5. Chocolate\t -%d UGX\n",CHOCOLATE);

    printf("0. Exit\n");

    printf("Enter Item Number (or 0 to Exit):");
    scanf("%d", &item_number);

    if (item_number == 0){
        printf("Thank you for using Group 3 vending machine. Goodbye!\n");
            break;
            // Exit the loop and the program
    }

    printf("Enter Item Quantity:") ;
    scanf("%d", &item_quantity);

    printf("Enter your Money:");;
    scanf("%d",&money);

    item_purchase(item_number, item_quantity, money);
    }
    return 0;
}
