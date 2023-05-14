// 5. WAP in C++ to swap two nos by using all methods:


// call by Pointer : 

#include <iostream>
using namespace std;

void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void print(int a, int b){
    cout << endl <<  "value of a & b is : " << a  << "\t" << b ;
}
int main(){

    int a,b;
    cout << "Enter the value of a & b : ";
    cin >> a >> b;
    print(a,b);
    swap(&a,&b);
    print(a,b);

    return 0;
}


/*

//  call by reference : 
#include <iostream>
using namespace std;

void swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}
void print(int a, int b){
    cout << endl <<  "value of a & b is : " << a  << "\t" << b ;
}
int main(){

    int a,b;
    cout << "Enter the value of a & b : ";
    cin >> a >> b;
    print(a,b);
    swap(a,b);
    print(a,b);

    return 0;
}

*/

/* 
// call by value : 
#include <iostream>
using namespace std;

class Abc{
    private:
        int a,b;
    public:
        void input(){
            cout << "Enter the value of a & b : ";
            cin >> a >> b;
        }
        void swap(){
            a = a + b;
            b = a - b;
            a = a - b;
        }
    void print(){
        cout << endl <<  "value of a & b is : " << a  << "\t" << b ;
    }
};

int main(){

    Abc obj;
    obj.input();
    obj.print();
    obj.swap();
    obj.print();

    return 0;
}
*/