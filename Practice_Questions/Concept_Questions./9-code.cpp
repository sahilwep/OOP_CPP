// 9.  W.A.P to show the concept of Static variable inside functions.


#include<iostream>
using namespace std;

class Abc{
    public:
        string name;
        static int member;
        void display();
};

void Abc::display(){
    member++;
    cout << " name is : "<< name ;
}

int Abc::member = 12;

int main(void){
    Abc obj1,obj2;
    
    // first object
    obj1.name = "Sahil"; 
    obj1.display();
    cout << "\n member no :  " << Abc::member << endl << endl ;
    
    // second object
    obj2.name = "Khushi"; 
    obj2.display();   
    cout << "\n member no :  " << Abc::member << endl ;
}

// here member is static so at every object has access the same member variable so number is increase..


// example 2 :
/*
#include<iostream>
using namespace std;

void func(){
    static int x = 0;
    cout << x << " ";
    x++;
}

void func_1(){
    int y = 0;
    cout << y << " ";
    y++;
}

int main(void){
    // Staitc variable 
    cout << "\n Static variable : ";
    for(int i = 1 ; i <= 5 ; i++){
        func();
    }

    // normal variable 
    cout << "\n\n Normal variable : ";
    for(int i = 1 ; i <= 5 ; i++){
        func_1();
    }
}

*/

// here static variable initialized at once in static storage, where as normal variable initialize again and again on stack.
