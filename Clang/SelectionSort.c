// 선택 정렬

#include <stdio.h>
int main(){
    int i, j, temp;
    int a[5] = {5, 3, 1, 4, 2};


    for(i = 0; i <= 3; i++){
        for(j = 1; j <= 4; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf("%d %d %d %d %d \n", a[0], a[1], a[2], a[3], a[4]);
    }
}