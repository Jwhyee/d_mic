#include <iostream>
using namespace std;
double areaCircle(double);
int main(){
    double pi = 3.14;
    double r = 0;
    cout<<"반지름 입력";
    cin>>r;
    cout<<"원의 넓이는"<<areaCircle(r);


}
double areaCircle(double r){
    return r * r * 3.14;
}