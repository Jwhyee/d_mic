#include<stdio.h>
int main(){
    int i = 0;
    int asum = 0;
    int bsum = 0;
    int sw = 0;

    while(i < 100){
        i = i + 1;
        if(sw == 0){
            asum += i;
            sw = 1;
        }
        else{
            bsum += i;
            sw = 0;
        }
    }
    printf("홀수 합계 = %d \n 짝수 합계 = %d", asum, bsum);
}