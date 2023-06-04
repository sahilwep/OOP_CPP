// W.A.P to show the concept of Default constructor.

 #include <iostream>
 using namespace std;
 
 class Abc{
    public:
        Abc(){
            cout << endl << "default constructor called.";
        }
};

int main(void){
    Abc obj;
}