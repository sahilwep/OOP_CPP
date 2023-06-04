//  W.A.P to find the Largest among 3 numbers using class.

#include <iostream>
using namespace std;

class Abc{
    private:
        int a = 0, b = 0, c  = 0;
    public:
        void input(){
            cout << endl << "Enter the three no's : ";
            cin >> a >> b >> c;
        }
        void found(){
            if(a >= b && a >= c){
                cout << endl <<  "first no is Greater.";
            }
            if(b >= a && b >= c){
                cout << endl <<  "Second no is Greater.";
            }
            if(c >= a && c >= b){
                cout << endl <<  "Third no is Greater.";
            }
        }
};

int main(void){
    Abc obj;
    obj.input();
    obj.found();

    return 0;
}