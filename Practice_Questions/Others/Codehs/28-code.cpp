// Implement single inheritance with constructor and do it with real world example.

#include <iostream>
using namespace std;

class University{
    public:
        University(){
            cout << "University class." << endl;
        }
};

// single inheritance.

class BCA:public University{
    public:
        BCA(){
            cout << "Bca class." << endl;
        }
};

int main(void){
    
    BCA b;

    return 0;
}