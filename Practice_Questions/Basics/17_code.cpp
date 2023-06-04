// W.A.P to show the concept of call by Value.
/*
    call by value is limited to the scope.
    where formal parameter holds the copy of actual parameter.
    when the formal parameter change it didn't affect the actual parameter.

*/
#include <iostream>
using namespace std;


void swap(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;
    cout << endl << "Value of A & b after swapping is : " << a << "   " << b;
}

int main(void){
    int a,b;
    cout << "Enter the value of A & B : ";
    cin >> a >> b;

    swap(a,b);
    cout << endl << "Value of A & b after swapping is : " << a << "   " << b;
    
    return 0;

}