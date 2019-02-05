#include <stdio.h>

int main(){

    float sum = 0;

    for(float i=1; i<51; i++){
        sum += 1/i;
    }

    printf("\n\nSUM: %.3f\n\n", sum);

    return 0;
}
