#include<stdio.h>
int main(){
    int i = 1;
    int j = 1;
    int k = 0;
    int sum = 2;
    for(int cnt = 3; cnt <= 30; cnt++){
        k = i + j;
        sum += k;
        i = j;
        j = k;
    }
    printf("30항까지 덧셈 결과 = %d \n", sum);
}