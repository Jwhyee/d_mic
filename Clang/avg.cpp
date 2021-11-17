#include<iostream>
using namespace std;
double recArea(double, double);
double cirArea(double, double);
double avgArea(double, double);
int main(){
    double pi = 3.14;
    double r = 2.0;
    double w = 2.0;
    double h = 3.0;
    cout<<"직사각형의 넓이 = "<<recArea(w, h)<<"\n";
    cout<<"원의 넓이 = "<<cirArea(pi, r)<<"\n";
    cout<<"두 넓이의 평균 = "<<avgArea(recArea(pi, r), cirArea(w, h))<<"\n";
}
double recArea(double pi, double r){
    return pi * r * r;
}
double cirArea(double w, double h){
    return w * h;
}
double avgArea(double r, double c){
    return (r + c)/2;
}