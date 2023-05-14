// 3. C++ Program to reverse all strings stored in an array.

#include <iostream>
using namespace std;

class Abc{
    private:
        string str[5],temp;
        int n = sizeof(str)/sizeof(str[0]);
    public:
        void input(){
            for(int i = 0;i<5;i++){
                cout << "Enter the value of arr["<< i << "] : ";
                cin >> str[i];
            }
        }    
        void operation(){
            for(int i = 0;i<n/2;i++){
                temp = str[i];
                str[i] = str[n-i-1];
                str[n-i-1] = temp;
            }   
        }
        void print(){
            cout << endl << "array is : ";
            for(int i = 0;i<5;i++){
                cout << str[i] << " ";
                }
        }
};
                
int main(){
    Abc obj;
    obj.input();
    obj.print();
    obj.operation();
    obj.print();

    return 0;
}