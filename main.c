#include <stdio.h>
#include <stdlib.h>


int menu(){
#define SODA 1500
#define WATER 1000
#define JUICE 2000
#define CRISPS 1200
#define CHOCOLATE 2500

}
int main()
{
    menu();
    printf("====Welcome to C Vending Machine====\n");
    printf("1. Soda\t\t -%d UGX\n", SODA);
    printf("2. Water\t -%d UGX\n", WATER);
    printf("3. Juice\t -%d UGX\n", JUICE);
    printf("4. Crisps\t -%d UGX\n",CRISPS);
    printf("5. Chocolate\t -%d UGX\n",CHOCOLATE);

    int item_number;
    int item_quantity;
    int money;

    printf("Enter Item Number:");
    scanf("%d", &item_number);
    printf("Enter Item Quantity:") ;
    scanf("%d", &item_quantity);
    printf("Enter your Money:");;
    scanf("%d",&money);

   if (item_number == 1){
        int cart = item_quantity * SODA;

        if (money == cart){
            printf("Item dispensed..");
        }
        else if (money > cart){
            int change = money - cart;
            printf("Item dispensed, your change is %d\n", change);
            if (change >= 50000){
                int amount;
                printf("50000 * %d\n", change/50000);
                change = change % 50000;
                }
            if (change >= 20000){
                int amount;
                printf("20000 * %d\n", change/20000);
                change = change % 20000;
                }
            if (change >= 10000){
                int amount;
                printf("10000 * %d\n", change/10000);
                change = change % 10000;
                }
            if (change >= 5000){
                int amount;
                printf("5000 * %d\n", change/5000);
                change = change % 5000;
                }
            if (change >= 2000){
                int amount;
                printf("2000 * %d\n", change/2000);
                change = change % 2000;
                }
            if (change >= 1000){
                int amount;
                printf("1000 * %d\n", change/1000);
                change = change % 1000;
                }
            if (change >= 500){
                int amount;
                printf("500 * %d\n", change/500);
                change = change % 500;
                }
            if (change >= 200){
                int amount;
                printf("200 * %d\n", change/200);
                change = change % 200;
                }
            if (change >= 100){
                int amount;
                printf("100 * %d\n", change/100);
                change = change % 100;
                }
            if (change >= 50){
                int amount;
                printf("50 * %d\n", change/50);
                change = change % 50;
            }
        }
        else{
            printf("Insufficient funds...TRY AGAIN");
        }
   }

   else if (item_number == 2){
     int cart = item_quantity * WATER;

        if (money == cart){
            printf("Item dispensed..");
        }
        else if (money > cart){
            int change = money - cart;
            printf("Item dispensed, your change is %d\n", change);
            if (change >= 50000){
                int amount;
                printf("50000 * %d\n", change/50000);
                change = change % 50000;
                }
            if (change >= 20000){
                int amount;
                printf("20000 * %d\n", change/20000);
                change = change % 20000;
                }
            if (change >= 10000){
                int amount;
                printf("10000 * %d\n", change/10000);
                change = change % 10000;
                }
            if (change >= 5000){
                int amount;
                printf("5000 * %d\n", change/5000);
                change = change % 5000;
                }
            if (change >= 2000){
                int amount;
                printf("2000 * %d\n", change/2000);
                change = change % 2000;
                }
            if (change >= 1000){
                int amount;
                printf("1000 * %d\n", change/1000);
                change = change % 1000;
                }
            if (change >= 500){
                int amount;
                printf("500 * %d\n", change/500);
                change = change % 500;
                }
            if (change >= 200){
                int amount;
                printf("200 * %d\n", change/200);
                change = change % 200;
                }
            if (change >= 100){
                int amount;
                printf("100 * %d\n", change/100);
                change = change % 100;
                }
            if (change >= 50){
                int amount;
                printf("50 * %d\n", change/50);
                change = change % 50;
            }
   }
        else{
            printf("Insufficient funds...TRY AGAIN");
        }
   }
   else if (item_number == 3){
     int cart = item_quantity * JUICE;

        if (money == cart){
            printf("Item dispensed..");
        }
        else if (money > cart){
            int change = money - cart;
            printf("Item dispensed, your change is %d\n", change);
            if (change >= 50000){
                int amount;
                printf("50000 * %d\n", change/50000);
                change = change % 50000;
                }
            if (change >= 20000){
                int amount;
                printf("20000 * %d\n", change/20000);
                change = change % 20000;
                }
            if (change >= 10000){
                int amount;
                printf("10000 * %d\n", change/10000);
                change = change % 10000;
                }
            if (change >= 5000){
                int amount;
                printf("5000 * %d\n", change/5000);
                change = change % 5000;
                }
            if (change >= 2000){
                int amount;
                printf("2000 * %d\n", change/2000);
                change = change % 2000;
                }
            if (change >= 1000){
                int amount;
                printf("1000 * %d\n", change/1000);
                change = change % 1000;
                }
            if (change >= 500){
                int amount;
                printf("500 * %d\n", change/500);
                change = change % 500;
                }
            if (change >= 200){
                int amount;
                printf("200 * %d\n", change/200);
                change = change % 200;
                }
            if (change >= 100){
                int amount;
                printf("100 * %d\n", change/100);
                change = change % 100;
                }
            if (change >= 50){
                int amount;
                printf("50 * %d\n", change/50);
                change = change % 50;
            }
   }
        else{
            printf("Insufficient funds...TRY AGAIN");
        }
   }
   else if (item_number == 4){
     int cart = item_quantity * CRISPS;

        if (money == cart){
            printf("Item dispensed..");
        }
        else if (money > cart){
            int change = money - cart;
            printf("Item dispensed, your change is %d\n", change);
            if (change >= 50000){
                int amount;
                printf("50000 * %d\n", change/50000);
                change = change % 50000;
                }
            if (change >= 20000){
                int amount;
                printf("20000 * %d\n", change/20000);
                change = change % 20000;
                }
            if (change >= 10000){
                int amount;
                printf("10000 * %d\n", change/10000);
                change = change % 10000;
                }
            if (change >= 5000){
                int amount;
                printf("5000 * %d\n", change/5000);
                change = change % 5000;
                }
            if (change >= 2000){
                int amount;
                printf("2000 * %d\n", change/2000);
                change = change % 2000;
                }
            if (change >= 1000){
                int amount;
                printf("1000 * %d\n", change/1000);
                change = change % 1000;
                }
            if (change >= 500){
                int amount;
                printf("500 * %d\n", change/500);
                change = change % 500;
                }
            if (change >= 200){
                int amount;
                printf("200 * %d\n", change/200);
                change = change % 200;
                }
            if (change >= 100){
                int amount;
                printf("100 * %d\n", change/100);
                change = change % 100;
                }
            if (change >= 50){
                int amount;
                printf("50 * %d\n", change/50);
                change = change % 50;
            }
   }
        else{
            printf("Insufficient funds...TRY AGAIN");
        }
   }
   else if (item_number == 5){
     int cart = item_quantity * CHOCOLATE;

        if (money == cart){
            printf("Item dispensed..");
        }
        else if (money > cart){
            int change = money - cart;
            printf("Item dispensed, your change is %d\n", change);
            if (change >= 50000){
                int amount;
                printf("50000 * %d\n", change/50000);
                change = change % 50000;
                }
            if (change >= 20000){
                int amount;
                printf("20000 * %d\n", change/20000);
                change = change % 20000;
                }
            if (change >= 10000){
                int amount;
                printf("10000 * %d\n", change/10000);
                change = change % 10000;
                }
            if (change >= 5000){
                int amount;
                printf("5000 * %d\n", change/5000);
                change = change % 5000;
                }
            if (change >= 2000){
                int amount;
                printf("2000 * %d\n", change/2000);
                change = change % 2000;
                }
            if (change >= 1000){
                int amount;
                printf("1000 * %d\n", change/1000);
                change = change % 1000;
                }
            if (change >= 500){
                int amount;
                printf("500 * %d\n", change/500);
                change = change % 500;
                }
            if (change >= 200){
                int amount;
                printf("200 * %d\n", change/200);
                change = change % 200;
                }
            if (change >= 100){
                int amount;
                printf("100 * %d\n", change/100);
                change = change % 100;
                }
            if (change >= 50){
                int amount;
                printf("50 * %d\n", change/50);
                change = change % 50;
            }
   }
        else{
            printf("Insufficient funds...TRY AGAIN");
        }
   }
   else{
        printf("Chose correct option from the menu...!");
    }
        return 0;
        }

