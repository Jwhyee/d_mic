#include<stdio.h>
int main(){
    int one = 1;
    // one -> n-2의 값

    int two = 1;
    // two -> n-1의 값

    int result = 0;
    // result는 현재값을 의미

    int sum = 2;
    for(int cnt = 3; cnt <= 30; cnt++){
        result = one + two;
        sum += result;
        one = two;
        two = result;
    }
    printf("30항까지 덧셈 결과 = %d \n", sum);
}