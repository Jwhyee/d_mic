// 정렬 알고리즘
// 삽입 정렬

#include<stdio.h>
int main(){
    int i, j, key;
    int a[5] = {5, 3, 1, 4, 2};

    for(i = 1; i <= 4; i++){
        key = a[i];
        for(j = i-1; j >= 0; j--){
            if(a[j] > key)
                a[j+1] = a[j];
            else
                break;
        }
        a[j+1] = key;

        printf("%d %d %d %d %d \n", a[0],a[1],a[2],a[3],a[4]);
    }
}