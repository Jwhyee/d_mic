// 정렬 알고리즘
// 선택 정렬 내림차순

#include <stdio.h>
int main(){
    int i, j, t;
    int a[7] = {5, 3, 1, 4, 2, 6, 7};

    for(i = 0; i <= 5; i++){
        for(j = i+1; j <= 6; j++){
            if(a[i] < a[j]){
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
        printf("%d %d %d %d %d %d %d \n", a[0], a[1], a[2], a[3], a[4], a[5], a[6]);
    }
}