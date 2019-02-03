#include <stdio.h>

int main(){

    int totalAmount, hundred, fifty, twenty, ten, five, two, one;

    printf("\n\nPlease enter the total amount: ");
    scanf(" %d", &totalAmount);

    hundred = totalAmount/100;
    fifty = totalAmount%100/50;
    twenty = totalAmount%100%50/20;
    ten = totalAmount%100%50%20/10;
    five = totalAmount%100%50%20%10/5;
    two = totalAmount%100%50%20%10%5/2;
    one = totalAmount%100%50%20%10%5%2/1;

    printf("\n%d notes of 100.\n", hundred);
    printf("%d notes of 50.\n", fifty);
    printf("%d notes of 20.\n", twenty);
    printf("%d notes of 10.\n", ten);
    printf("%d notes of 5.\n", five);
    printf("%d notes of 2.\n", two);
    printf("%d notes of 1.\n\n", one);


    return 0;
}
