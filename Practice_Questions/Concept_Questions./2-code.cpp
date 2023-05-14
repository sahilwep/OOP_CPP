// 2. W.A.P to show the concept of call by reference.

#include<iostream> 
using namespace std;

void swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}

int main(void){
    int a,b;
    cout << "Enter the value of a & b : ";
    cin >> a >> b;
    cout << "\n Before Swapping :  \n a : " << a << "\n b : " <<  b;
    swap(a,b);
    cout << "\n After Swapping :  \n a : " << a << "\n b : " << b;
    return 0;
}