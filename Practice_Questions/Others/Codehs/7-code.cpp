// 7. Write C++ Multiplication Table Programs

#include<iostream>
using namespace std;

class Abc{
    private:
        int x;
    public:
        void input(){
            cout << "Enter the table you want to print : ";
            cin >> x;
        }
        void table(){
            for(int i = 1;i<=10; i++){
                cout << x << " * " << i << " = " << x*i << endl;
            }

        }
};

int main(void){
    Abc abc;
    abc.input();
    abc.table();

    return 0;
}