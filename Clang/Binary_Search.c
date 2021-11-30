// 검색 알고리즘
// 이분 검색

#include<stdio.h>
int main(){
    int aryNum, aryMax, m, key;
    int array[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    aryNum = 0;
    aryMax = 9;
    key = 7;

    while(aryNum <= aryMax){
        m = (int)((aryNum + aryMax) / 2);

        if(array[m] > key)
            aryMax = m - 1;
        else if(array[m] < key)
            aryNum = m + 1;
        else
            break;
    }
    if(aryNum > aryMax)
        printf("%d", 99);
    else
        printf("%d", m);
    printf("\n");
}