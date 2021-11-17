#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int cnt = 0;
    for(int i = 1;; i++){
        if(i%3==0){
            sum += i;
            //sum = sum + i
            cnt++;
        }
        if(i >= 100){
            break;
        }
    }
    cout<<cnt<<"\n";
    cout<<sum<<"\n";
}