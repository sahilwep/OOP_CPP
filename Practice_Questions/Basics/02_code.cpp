// make a program to print the no from n to 0

#include<iostream>
using namespace std;

class Abc{
private:
    int n;
public: 
    void set(){
        cout << "Enter the no : ";
        cin >> n;
    }
    void func(){
        for(int i = n;0 <= i ;i--){
            cout << i << " ";
        }
    }

};

int main(void){
    Abc obj;
    obj.set();
    obj.func();
    
    return 0;
}