#include<stdio.h>
int main(){
    int i, s;
    int a[5] = {5, 3, 1, 4, 2};
    s = 1;

    for(i = 0; i <= 4; i++){
        if(a[i] == s)
            break;
    }
        if(i <= 4)
            printf("%d", i);
        else
            printf("%d", 99);
        printf("\n");
    
        
}