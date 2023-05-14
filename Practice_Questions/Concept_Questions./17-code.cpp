//  16. W.A.P to show the concept of Copy constructor.

#include<iostream>
using namespace std;

class Abc{
    private:
        int roll;
        string name;
        int marks;
    public:
        // normal constructor
        Abc(int r, string n, int m){
            roll = r;
            name = n;
            marks = m;
        }
        // copy constructor
        Abc(Abc& x){
            roll = x.roll;
            name = x.name;
            marks = x.marks;
        }
        void display(){
            cout << "name = " << name << endl;
            cout << "roll = "<< roll << endl;
            cout << "marks = "<< marks << endl;
        }
};

int main(void){
    Abc obj(1 , "sahil",100);
    obj.display();

    // copy constructor used.
    cout << endl << "Copy constructor called " << endl;
    Abc obj2(obj);
    obj2.display();

}


/*
// example 2 :

#include<iostream>
using namespace std;

class Abc{
    private:
        int x, y;
    public:
        Abc(){}

        void set(int a,int b){
            x = a;
            y = b;
            cout << "Value of x & y is set. " << endl;
        }
        Abc(Abc &obj){
            x =  obj.x;
            y =  obj.y;
        }
        void display(){
            cout << "value of x & y is : " << x << " &  " << y << endl;
        }
};

int main(void){
    
    Abc abc1;
    abc1.set(1,4);
    abc1.display();

    // copy constructor
    Abc abc2(abc1);
    cout << "copy constructor called, values from first object is copied to second object." << endl;
    abc2.display();

    return 0;
}

*/