#include <stdio.h>
int main(){
    int i, j, t;
    int a[5] = {5, 3, 1, 4, 2};

    for(i = 0; i <= 3; i++){
        for(j = 0; j <= 4-i; j++){
            if(a[j] > a[j+1]){
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
        printf("%d %d %d %d %d \n", a[0], a[1], a[2], a[3], a[4]);
    }
}