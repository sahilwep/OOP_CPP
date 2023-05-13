// make a program to multiply every index of an array with k number.

#include<iostream>
using namespace std;

class Abc{
private:
    int x;
    int size_of_arry;
    int a[100];
    int b[100];
public: 
    void num();
    void array_input();
    void operation();
    void result();
};

void Abc::num(){
    cout << "\nEnter the no you want to multiply with : ";
    cin >> x;
}

void Abc::array_input(){
    cout << "\nEnter the index of array :  ";
    cin >> size_of_arry;
    for(int i =0 ; i<size_of_arry; i++){
        cout << "Enter the " << i+1 << " index : ";
        cin >> a[i];
    }
}

void Abc::operation(){
    for(int i =0;i<size_of_arry;i++){
        b[i] = a[i]*x;
    }
}

void Abc::result(){
    cout << "\nThe output is : ";
    for(int i = 0; i<size_of_arry;i++){
        cout << b[i] << "  ";
    }

}

int main(void){

    Abc obj;
    obj.num();
    obj.array_input();
    obj.operation();
    obj.result();


    return 0;
}