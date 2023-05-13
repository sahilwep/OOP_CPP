// make a program to print the fibonacci series using while loop.

#include<iostream>
using namespace std;

class Abc{
private:
    int range;
    int first = 0, second = 1;
public:
    void fact(){
        cout << "Enter the range : ";
        cin >> range;
        while(first < range){
            cout << first << " ";
            first = second;
            second = first + second;
        }
    }

};


int main(void){

    Abc obj;
    obj.fact();

    return 0;
}