// Implement hierarchal inheritance with constructor and do it with real world example.


/*
                University
        SCA                     CSE
    BCA      MCA        B_tech      M_tech

    Note : hierarchical contain multilevel + single + hierarchical
     
    So, it's hybrid.

 */

#include <iostream>
using namespace std;

// level 1
class University{
    public:
        University(){cout << endl << "University class";}
};

// level 2
class SCA:public University{
    public:
        SCA(){cout << endl << "SCA class";}
};
class CSE:public University{
    public:
        CSE(){cout << endl << "CSE class";}
};

// level 3

class B_tech:public CSE{
    public:
        B_tech(){cout << endl << "B_tech class";}
};
class M_tech:public CSE{
    public:
        M_tech(){cout << endl << "M_tech class";}
};

class BCA:public SCA{
    public:
        BCA(){cout << endl << "BCA class";}
};
class MCA:public SCA{
    public:
        MCA(){cout << endl << "MCA class";}
};



int main(void){
    BCA stu_1;
    B_tech stu_2;

    return 0;
}