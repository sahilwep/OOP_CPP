// 32. W.A.P to show the concept of hybrid inheritance. 

/*
    here (hierarchical + multiple + multilevel) +> hybrid

    level 1                 University
    level 2       Bachelors              Masters
    level 3   SCA   CSE    BBA         MCA    MBA
    level 4    child(student)

*/

#include<iostream>
using namespace std;

// level 1
class University{
    public: 
        University(){
            cout << "This is University "<< endl; 
        }
};

// level 2
class Bachelors:public University{
    public: 
        Bachelors(){
            cout << "This is bachelors "<< endl; 
        }
};

class Masters:public University{
    public: 
        Masters(){
            cout << "This is bachelors "<< endl; 
        }
};

// level 3

// bachelors
class SCA:public Bachelors{
    public:
        SCA(){
            cout << "This is SCA "<< endl; 
        }
};

class CSE:public Bachelors{
    public:
        CSE(){
            cout << "This is CSE "<< endl; 
        }
};

class BBA:public Bachelors{
    public:
        BBA(){
            cout << "This is BBA "<< endl; 
        }
};

// masters

class MCA:public Masters{
    public:
        MCA(){
            cout << "This is MCA "<< endl; 
        }   
};

class MBA:public Masters{
    public:
        MBA(){
            cout << "This is MBA "<< endl; 
        }   
};

// level 4

class Student:public SCA, public CSE, public BBA{
    public:
        Student(){
            cout << endl <<  "Student class" << endl;
        }    
};

int main(void){
    // Student level 4 object
    Student s1;
     

    return 0;
}