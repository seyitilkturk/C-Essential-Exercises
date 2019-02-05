#include <stdio.h>

int facto_func(k){

    int result = 1;

    while(k>1){

        result = result * k;
        k--;
    }


    return result;
}

int main(){

    int value, counter = 0;

    

    for(int i = 0; i<11; i++){
        for(int j = 0; j<11; j++){

            value = facto_func(i)/(facto_func(j) * facto_func(i-j));

            if(value != 0){
                printf("%d\t", value);
            }

            counter++;
            if(counter%11 == 0){
                printf("\n");
            }
        }
    }

    return 0;
}
