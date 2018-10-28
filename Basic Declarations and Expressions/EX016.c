#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int mHundred, mFifty, mTwenty, mTen, mFive, mTwo, mOne, allMoney;

    printf("\nHello sir. Please type amount of your money: ");
    scanf("%d", &allMoney);

    mHundred = allMoney / 100;
    mFifty = allMoney%100/50;
    mTwenty = allMoney%100%50/20;
    mTen = allMoney%100%50%20/10;
    mFive = allMoney%100%50%20%10/5;
    mTwo = allMoney%100%50%20%10%5/2;
    mOne = allMoney%100%50%20%10%5%2/1;


    printf("\n%d Note(s) of 100 Dollar. \n", mHundred);
    printf("%d Note(s) of 50 Dollar. \n", mFifty);
    printf("%d Note(s) of 20 Dollar. \n", mTwenty);
    printf("%d Note(s) of 10 Dollar. \n", mTen);
    printf("%d Note(s) of 5 Dollar. \n", mFive);
    printf("%d Note(s) of 2 Dollar. \n", mTwo);
    printf("%d Note(s) of 1 Dollar. \n", mOne);
    printf("\n");



  return 0;
}
