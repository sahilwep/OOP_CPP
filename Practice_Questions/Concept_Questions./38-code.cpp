// 38. W.A.P to show the concept of ifstream class to read from a file.

#include<iostream>
#include<fstream>
using namespace std;

int main(void){
    
    ifstream demo_file("demo_file.txt");

    if(!demo_file){
        cout << "file not found " << endl;
    }
    else{
        // to open the file..
        cout << "file opened.."<< endl;
        while(demo_file.good()){
            char ch;
            ch = demo_file.get();
            cout << ch;
        }
    }
    demo_file.close();

    return 0;
}