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
        }
        else{
            printf("Insufficient funds...");
        }
   }


    return 0;
}
