#include <stdio.h>

int main(){

    float sum = 0, a=1, b=1;

    for(float i = 1; i<5; i++){
        sum += a/b;

        a = a + 2;
        b = b * 2;
    }

    printf("\n>> %.2f\n\n", sum);



    return 0;
}
