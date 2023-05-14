// 25. W.A.P to show the concept of deallocating objects dynamically.

#include <iostream>
using namespace std;

class Abc{
private:
    int *ptr;

public:
    Abc(){
        ptr = new int[10]{1, 2, 3, 4, 5};
        cout << "Object is created " << endl;
    }
    void print(){
        for (int i = 0; i < 5; i++){
            cout << ptr[i] << " ";
        }
        cout << endl;
    }
    ~Abc(){
        cout << "object delete successfully" << endl;
    }
};

int main(void){
    Abc *obj1;

    obj1 = new Abc[2];

    obj1[0].print();
    obj1[1].print();

    delete obj1;

    return 0;
}

// Example : 2
/*
#include<iostream>
using namespace std;

class Abc{
    private:
        int *ptr;
    public:
        Abc(){
            ptr = new int[10]{1,2,3,4,5};
            cout << "Object is created " << endl;
        }
        void print(){
            for(int i=0;i<5;i++){
                cout << ptr[i] << " ";
            }
            cout << endl;
        }
        ~Abc(){
            cout <<  "object delete successfully" << endl;
        }
};

int main(void){

    Abc *obj1;
    Abc *obj2;

    obj1 = new Abc();
    obj2 = new Abc();

    obj2 = obj1;

    obj1->print();
    obj2->print();

    delete obj1;

    return 0;
}

*/