// W.A.P to show the concept of call by reference.
/*
    Call by reference where we pass the address of the variable, so when the value change inside the function scope, it reflected back where it originally was.


*/
#include <iostream>
using namespace std;


void swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}

int main(void){
    int a,b;
    cout << "Enter the value of A & B : ";
    cin >> a >> b;

    swap(a,b);
    cout << endl << "Value of A & b after swapping is : " << a << "   " << b;
    
    return 0;

}