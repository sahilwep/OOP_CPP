// write a program to print fibonacci series using for loop.

#include<iostream>
using namespace std;

class Abc{
private:
    long long int first = 0, second = 1, next =  first + second, range;
public:
    void fibb(){
        cout << "\nEnter the range : ";
        cin >> range;
        cout << first << " " << second;
        for(int i = 2 ; i < range ;i++ ){
            cout << " " << next ;
            first =  second;
            second = next;
            next = first+second;
        }
    }
};


int main(void){

    Abc obj;
    obj.fibb();

    return 0;
}