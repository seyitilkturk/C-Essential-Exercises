#include <stdio.h>

int main(){

    int x, y;

    printf("\n\nEnter x value: ");
    scanf(" %d", &x);
    printf("Enter y value: ");
    scanf(" %d", &y);

    if(x>0 && y>0){
        printf("\nQuadrant-I\n\n");
    }else if(x<0 && y>0){
        printf("\nQuadrant-II\n\n");
    }else if(x<0 && y<0){
        printf("\nQuadrant-III\n\n");
    }else if(x>0 && y<0){
        printf("\nQuadrant-IV\n\n");
    }


    return 0;
}
