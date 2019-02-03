#include <stdio.h>

int main(){

    int value;

    printf("\n\nPlease enter a value: ");
    scanf(" %d", &value);

    if(value < 0 || value > 80){
        printf("ERROR 190! The numbers is not in range\n\n");
    }else if((value < 80 &&  value >= 70)){
        printf("\nRange: [70,80)\n\n");
    }else if(value < 70 &&  value >= 60){
        printf("\nRange: [60,70)\n\n");
    }else if(value < 60 &&  value >= 50){
        printf("\nRange: [50,60)\n\n");
    }else if(value < 50 &&  value >= 40){
        printf("\nRange: [40,50)\n\n");
    }else if(value < 40 &&  value >= 30){
        printf("\nRange: [30,40)\n\n");
    }else if(value < 30 &&  value >= 20){
        printf("\nRange: [20,30)\n\n");
    }else if(value < 20 &&  value >= 10){
        printf("\nRange: [10,20)\n\n");
    }else if(value < 10 &&  value >= 0){
        printf("\nRange: [0,10)\n\n");
    }






    return 0;
}
