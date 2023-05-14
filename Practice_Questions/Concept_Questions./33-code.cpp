// 33. W.A.P to show the concept of creating file.

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream demo_file;
    demo_file.open("demo_file.txt", ios::out);
    if(!demo_file){
        cout << "file not created" ;        
    }
    else{
        cout << "file created"  << endl;
        cout << "file found successfully!" << endl;
    }
    demo_file.close();
    
    return 0;
};