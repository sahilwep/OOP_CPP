//  Create a program to find factorial of number using call by reference and call by address.

/*
    factorial : 
        eg 5 : 5*4*3*2*1
*/


#include<iostream>
using namespace std;

void call_ref(int &x){
    int res = 1;
    for(int i = 1; i <= x ;i ++){
        res = res*i;
    }
    x = res;
}

void call_point(int *x){
    int res = 1;
    for(int i = 1; i <= *x ;i ++){
        res = res*i;
    }
    *x = res;
}

int main(void){

    int x;
    cout << "Enter the no for factorial : ";
    cin >> x;
    call_ref(x);    // call by reference or address.
    // call_point(&x); // call by de-reference or pointer.

    cout << "Factorial is : " << x << endl; 
    return 0;
}