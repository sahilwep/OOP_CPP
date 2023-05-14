// 22. W.A.P to show the concept of Constructor with default arguments.

#include<iostream>
using namespace std;

class sum{
    public:
    sum(int a = 0, int b = 0, int c = 0, int d = 0,int e = 0){
        cout << "sum is : " << a+b+c+d+e << endl;
    }
};

// default arguments.

int main(void){
    sum s1(1,1);
    sum s2(1,1,1);
    sum s3(1,1,1,1);
    sum s4(1,1,1,1,1);

    return 0;
}
