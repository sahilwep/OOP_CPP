/* 
Create a program to Compare Two Strings
using inline function as well as static function.
(Note: Definition of inline function should be outside
the class and static function should be inside the class.)
*/
#include <iostream>
using namespace std;

class Abc{
    private:
        string s1,s2;
    public:
        void input();
        void comp();
};

inline void Abc::input(){
    cout << "Enter the string_1 & string_2 : ";
    cin >> s1 >> s2;
}
inline void Abc::comp(){
    if(s1 == s2){
        cout << endl << "Strings are same.";
    }
    else{
        cout << endl << "Strings are not same.";
    } 
}

int main(void){

    Abc abc;
    abc.input();
    abc.comp();

    return 0;
}