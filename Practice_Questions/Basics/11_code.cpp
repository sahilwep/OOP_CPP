// W.A.P to display student details using class.

#include <iostream>
using namespace std;

class Student{
    private:
        string Name;
        int Age;
        int Marks;
    public:
        Student(string n, int a, int m){
            Name = n;
            Age = a;
            Marks = m;
        }
        void details(){
            cout << "\nStudent Details : ";
            cout << endl << "Name : "<< Name ;
            cout << endl << "Age : "<< Age ;
            cout << endl << "Marks : "<< Marks ;
        }

};

int main(void){

    Student s1("Sahil" ,21 ,100);
    s1.details();

    return 0;
}
