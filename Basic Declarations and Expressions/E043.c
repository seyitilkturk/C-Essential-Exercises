#include <stdio.h>

int main(){

    int lines, rows, temp = 1;

    printf("Enter the number of lines: ");
    scanf(" %d", &lines);
    printf("Enter the number of rows: ");
    scanf(" %d", &rows);

    for(int i=0; i<lines; i++){
        for(int j=0; j<rows; j++){
            printf("%d ", temp);
            temp++;
        }

        printf("\n");
    }


    return 0;
}
