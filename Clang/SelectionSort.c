// 선택 정렬

#include <stdio.h>
int main(){
    int i, j, t;
    int a[5] = {5, 3, 1, 4, 2};

    for(i = 0; i <= 3; i++){
        for(j = i+1; j <= 4; j++){
            if(a[i] > a[j]){
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
        printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
    }
}