// make a program to print the no  0 form n 

#include<iostream>
using namespace std;

class Abc{

private:
    int n;
public:
    void get(){
        cout << "Enter the no : ";
        cin >> n;
    }
    void func(){
        for(int i = 0 ;i <= n; i++){
            cout << i << " " ;
        }
    }

};

int main(void){

    Abc obj;
    obj.get();
    obj.func();


    return 0;
}