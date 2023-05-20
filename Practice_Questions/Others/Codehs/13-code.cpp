// 13.  Write a program to add two-time values (hours and minutes) by using the concept of object as function argument and returning object.

#include <iostream>
using namespace std;

class Abc{
    private:
        int h1, h2, h;
        int m1, m2, m;

    public:
        void time(){
            cout << "Enter the first time (hour minute): ";
            cin >> h1 >> m1;
            cout << "Enter the second time (hour minute): ";
            cin >> h2 >> m2;
            
            h = h1 + h2;
            m = m1 + m2;
            
            if (m > 60){
                h = h + 1;
                m = m - 60;
            }

            if (h > 24){
                h = h - 24;
            }
        }
        void display(){
            cout << endl
                 << "time is : " << h << " " << m;
        }
};

int main(void){

    Abc obj;
    obj.time();
    obj.display();

    return 0;
}