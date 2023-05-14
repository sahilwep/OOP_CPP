// 2. WAP in C++ to reverse an array using function.

#include<iostream>
using namespace std;

class Abc{
    private:
        int x[5];
        int y[5];
        int n = sizeof(x)/sizeof(x[0]);
    public:
    void input(){
        for(int i = 0;i<5;i++){
            cout << "Enter the value of arr["<< i << "] : ";
            cin >> x[i];
        }
    }
    void method_1(){
        for(int i = 0; i<n/2;i++){
            // swapping
            // for the first iteration.
            // suppose values are : 1 2 3 4 5
            // temp = 1 x[0]
            int temp = x[i];
            // x[0] = x[5-0-1] -> x[4]-> 5
            x[i] = x[n-i-1];
            // x[5-0-1] = 1 temp value
            x[n-i-1] = temp;
            /*
                for second iteration we 
                temp = x[1]->2
                x[1] = x[5-1-1]->x[3]->4
                x[5-1-1]->x[3] = temp-> 2
            */
        }
    }

    void method_2(){
        // this need another array to do this operation.
        for(int i = 0 ;i < n;i++){
            y[i]=x[n-1-i];
        }
    }
    
    void print_1(){
        cout << endl << "reverse array by method 1 : ";
        for(int i = 0;i<5;i++){
            cout << x[i] << " ";
        }
    }
    void print_2(){
        cout << endl << "reverse array by method 2 : ";
        for(int i = 0;i<5;i++){
            cout << y[i] << " ";
        }
    }
};

int main(){

    Abc obj;
    obj.input();
    obj.method_2();
    obj.print_2();
    obj.method_1();
    obj.print_1();

    return 0;
}
