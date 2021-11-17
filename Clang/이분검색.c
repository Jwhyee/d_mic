#include<stdio.h>
int main(){
    int L, h, m, s;
    int a[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    L = 0, h = 9, s = 7;
    while(L <= h){
        m = (int) ((L + h) / 2);

        if(a[m] > s)
            h = m - 1;
        else if(a[m] < s)
            L = m + 1;
        else
            break;
    }
    if (L > h)
        printf("%d", 99);
    else
        printf("%d", m);
    printf("\n");
}