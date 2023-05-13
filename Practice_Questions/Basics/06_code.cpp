// make a program to print the factorial using for loop of any no using function outside the class.

#include<iostream>
using namespace std;

class Abc{
private:
    int num;
    long long int result = 1;
public: 
    void set();
    void fact();
};

void Abc::set(){
    cout << "Enter the no : ";
    cin >> num;
}

void Abc::fact(){
    for(int i = 1;i<=num;i++){
        result = result*i;
    }
    cout << result;
}

int main(){

    Abc obj;
    obj.set();
    obj.fact();

    return 0;
}