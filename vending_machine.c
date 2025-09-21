#include <stdio.h>
#include "vending_machine.h"
//Function to calculate and print change
void change_output(int change){
           if (change >= 50000){
                printf("50000 * %d\n", change/50000);
                change = change % 50000;
                }
            if (change >= 20000){
                printf("20000 * %d\n", change/20000);
                change = change % 20000;
                }
            if (change >= 10000){
                printf("10000 * %d\n", change/10000);
                change = change % 10000;
                }
            if (change >= 5000){
                printf("5000 * %d\n", change/5000);
                change = change % 5000;
                }
            if (change >= 2000){
                printf("2000 * %d\n", change/2000);
                change = change % 2000;
                }
            if (change >= 1000){
                printf("1000 * %d\n", change/1000);
                change = change % 1000;
                }
            if (change >= 500){
                printf("500 * %d\n", change/500);
                change = change % 500;
                }
            if (change >= 200){
                printf("200 * %d\n", change/200);
                change = change % 200;
                }
            if (change >= 100){
                printf("100 * %d\n", change/100);
                change = change % 100;
                }
            if (change >= 50){
                printf("50 * %d\n", change/50);
                change = change % 50;
            }
}
//Function to process vending machine item purchase
void item_purchase(int item_number, int item_quantity, int money){
     int item_price;
     switch(item_number){
 case 1:
    item_price = SODA;
    break;
 case 2:
    item_price = WATER;
    break;
 case 3:
     item_price = JUICE;
     break;
 case 4:
    item_price = CRISPS;
    break;
 case 5:
    item_price = CHOCOLATE;
    break;
 default:
    printf("Choose correct option from the menu...!\n");
    return;
        }
        int cart = item_quantity * item_price;
        if (money >= cart){
            int change = money - cart;
            printf("Item dispensed, your change is %d\n", change);
            change_output(change);
         }
         else {
            printf("Insufficient funds...TRY AGAIN");
         }
}
