#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){

    srand(time(NULL));

    float number;

    FILE * randomnum;
    randomnum = fopen("desktop/randomnumbers.txt", "w");

    for(int i = 0; i<50; i++){
        number = ((float)(rand()%2001-1000)/2000);

        fprintf(randomnum, "%.3f\n", number);

    }



fclose(randomnum);

    return 0;
}
