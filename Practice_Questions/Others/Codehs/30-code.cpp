//  Implement multiple inheritance with constructor and do it with real world example.

#include <iostream>
using namespace std;

class Bihar{
    public:
        Bihar(){cout << endl << "Bihar class";}
};  
class Mumbai{
    public:
        Mumbai(){cout << endl << "Mumbai class";}
};  
class Delhi{
    public:
        Delhi(){cout << endl << "Delhi class";}
};  

// multiple inheritance..
class India:public Bihar, public Mumbai, public Delhi{
    public:
        India(){
            cout << endl << "India class";
        }
};

int main(void){

    India obj;
     
    return 0;
}