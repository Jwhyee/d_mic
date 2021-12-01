// 검색 알고리즘
// 순차 검색

#include<stdio.h>
int main(){
    int i, key;
    int array[5] = {5, 4, 1, 3, 2};
    key = 1;

    for(i = 0; i <= 4; i++){
        if(array[i] == key)
            break;
    }
    if(i <= 4)
        printf("%d", i);
    else
        printf("%d", 99);
    printf("\n");
}