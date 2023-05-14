// 6. W.A.P to show the concept of inline function.


#include<iostream>
using namespace std;

inline int sum(int a, int b){
    return a+b;
}

int main(void){

    int x,y;
    cout << "\n Enter the value of x & y : ";
    cin >> x >> y;
    cout << "\n Sum of x & y is  : "  << sum(x,y);

    return 0;
}