// 3. W.A.P to show the concept of call by pointer.

#include<iostream>
using namespace std;

void swap(int *a, int *b){

    // using third variable : 
    // int temp = *a;
    // *a = *b;
    // *b = temp;

    // without third variable :
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

}


int main(void){
    int a, b;
    cout << "\n Enter the value of a & b : ";
    cin >> a >> b;
    cout << "\n Numbers before swapping : \n a : " << a << "\n b : " << b;
    swap(&a,&b); 
    cout << "\n Numbers After swapping : \n a : " << a << "\n b : " << b; 
}