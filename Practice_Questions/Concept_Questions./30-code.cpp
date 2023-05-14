//  W.A.P to show the concept of multilevel inheritance. 


#include<iostream>
using namespace std;

class University{
    public: 
    University(){
        cout << "This is University "<< endl; 
    }
};

class Department:public University{
    public: 
    Department(){
        cout << "This is Department "<< endl; 
    }
};

class SCA:public Department{
    public: 
    SCA(){
        cout << "School of Computer Application. " << endl; 
    }
};

int main(void){
    SCA obj;

    return 0;
}