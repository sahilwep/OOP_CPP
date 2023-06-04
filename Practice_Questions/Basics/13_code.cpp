// W.A.P to find the sum of odd numbers b/w 1 to 100 and also count how many numbers are there using class.

#include <iostream>
using namespace std;

class Abc{
    private:
        int sum;
        int count;
    public:
        void odd(){
            count = 0;
            sum = 0;
            for(int i = 1 ;i <= 100; i++){
                if(i % 2 != 0){
                    sum = sum + i;
                    count++;
                }
            }
            cout << endl << "Sum is : " << sum;
            cout << endl << "Count is : " << count;
        }
};

int main(void){

    Abc obj;
    obj.odd();

    return 0;
}
