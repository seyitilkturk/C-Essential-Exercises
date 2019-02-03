#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, delta, root1, root2;

    printf("\n\nf(x) = ax^2+bx+c\n\n");

    printf("Please enter a value: ");
    scanf(" %f", &a);
    printf("Please enter b value: ");
    scanf(" %f", &b);
    printf("Please enter c value: ");
    scanf(" %f", &c);

    delta = b*b-4*a*c;
    root1 = (-b - sqrt(delta)) / (2*a);
    root2 = (-b + sqrt(delta)) / (2*a);

    printf("\nRoot1 = %.2f\n", root1);
    printf("Root2 = %.2f\n\n", root2);


    return 0;
}
