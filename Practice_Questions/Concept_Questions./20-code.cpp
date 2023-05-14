// 18. W.A.P to show the concept of Multiple constructor.

#include<iostream>
using namespace std;

class Abc{
    private:
        const char *c;
    public:
        Abc(){
            c = new char[10];
            c = "Sahil";
        }
        void print(){
                cout << c;
        }
};

int main(){
    Abc obj;
    obj.print();
}


// example 2 : 
/*
#include<iostream>
using namespace std;

class add{
    private:
        int *ptr;
    public:
        // Dynamic constructor..
        add(){
            ptr = new int[5]{1,2,3,4,5};
        }
        void print(){
            for(int i = 0;i<5;i++){
                cout << ptr[i] << " ";               
            }
        }

};

int main(void){

    add obj;
    obj.print();

    return 0;
}

*/