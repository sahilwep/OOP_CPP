// 35. W.A.P to show the concept of closing the file.

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream demo_file;
    demo_file.open("demo_file.txt", ios::in);
    if(!demo_file){
        cout << "file not found" ;        
    }
    else{
        cout << "file found"  << endl;
        char ch;
        while(1){
            demo_file >> ch;
            if(demo_file.eof()){
                break;
            }
            else{
                cout << ch;
            }           
        }
        
    }
    // here we are closing the file.
    demo_file.close();
};
