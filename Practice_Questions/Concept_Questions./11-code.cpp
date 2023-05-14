// 11. W.A.P to show the concept of function overloading.

#include<iostream>
using namespace std;

class Abc{
    public:
        int add(int a, int b){
            return a+b;
        }
        int add(int a, int b, int c){
            return a+b+c;
        }
        int add(int a, int b, int c, int d){
            return a+b+c+d;
        }
        int add(int a, int b, int c ,int d, int e){
            return a+b+c+d+e;
        }
}obj;

int main(void){
    cout << "sum of passed no is : " << obj.add(1,1) << endl ;
    cout << "sum of passed no is : " << obj.add(1,1,1) << endl ;
    cout << "sum of passed no is : " << obj.add(1,1,1,1) << endl ;
    cout << "sum of passed no is : " << obj.add(1,1,1,1,1) << endl ;
    return 0;
}