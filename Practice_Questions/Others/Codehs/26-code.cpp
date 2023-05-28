//26. Implement C++ stream classes

#include <iostream>
#include <fstream>
using namespace std;

int main(void){

    fstream obj;
    obj.open("file.txt", ios::out);
    if(!obj){
        cout << endl <<  "File not created.";
    }
    else{  
        cout << endl << "File open successfully.";
        obj << "Hello World.";
    }
    obj.close();

    return 0;
}

