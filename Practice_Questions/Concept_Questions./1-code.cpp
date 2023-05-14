// 1. W.A.P to show the concept of call by value.

#include<iostream>
using namespace std;

int add(int x, int y){
    return (x+y);
}

int main(void){

    int a, b;
    cout << "Enter the value of  a & b : " ;
    cin >> a >> b;
    cout << "The value of a + b is : " << add(a,b) << endl ;
    return 0;
}