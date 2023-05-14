// 21. W.A.P to show the concept of Default arguments.

#include<iostream>
using namespace std;

// default arguments.

int sum(int a = 0, int b = 0, int c = 0, int d = 0,int e = 0){
    return (a+b+c+d+e);
}

int main(void){
    cout << "sum is : " << sum(1,1) << endl;
    cout << "sum is : " << sum(1,1,1) << endl;
    cout << "sum is : " << sum(1,1,1,1) << endl;
    cout << "sum is : " << sum(1,1,1,1,1) << endl;

    return 0;
}
