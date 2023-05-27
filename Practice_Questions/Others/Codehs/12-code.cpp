// make a program to check given no is even or odd without using if condition, switch case, array, loop etc...

#include<iostream>
using namespace std;

int main(void){
    int a;

    cout << "Enter the no : "; 
    cin >> a;
    (a % 2 == 0)&& cout << "even"; 
    (a % 2 != 0)&& cout << "odd"; 
    return 0;
}