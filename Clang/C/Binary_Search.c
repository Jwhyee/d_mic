// 검색 알고리즘
// 이분 검색

#include<stdio.h>
int main(){
    int aryMin, aryMax, m, key;
    int array[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    aryMin = 0;
    aryMax = sizeof(array) / sizeof(int);
    key = 11;

    while(aryMin <= aryMax){
        m = (int)((aryMin + aryMax) / 2);

        if(array[m] > key)
            aryMax = m - 1;
        else if(array[m] < key)
            aryMin = m + 1;
        else
            break;
    }
    if(aryMin > aryMax)
        printf("%d", 99);
    else
        printf("%d", m);
    printf("\n");
}