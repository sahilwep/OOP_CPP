// 38. W.A.P to show the concept of ofstream class to write into a file.

#include<iostream>
#include<fstream>
using namespace std;

int main(void){
    
    ofstream demo_file("demo_file.txt");

    if(!demo_file){
        cout << "file not found " << endl;
    }
    else{
        cout << "file open successfully" << endl;
        demo_file<< "Hello world \n";
        demo_file<< "this is sahil";
        cout << "writing into a file is done "<< endl;
        }
    demo_file.close();

    return 0;
}