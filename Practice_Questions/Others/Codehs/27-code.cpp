// 27. Perform different file operations

#include <iostream>
#include <fstream>
using namespace std;

int main(void){

    // file creation, open, write & close..
    fstream obj;
    obj.open("file.txt", ios::out);
    if(!obj){
        cout << "Error in opening file.." << endl;
    }
    else{
        cout << "File open successfully." << endl;
        obj << "hello world.";
    }
    obj.close();

    // file open, reading & closing.
    cout << endl << "File Reading operations." << endl;
    obj.open("file.txt", ios::in);
    if(!obj){
        cout << "Error in opening file." << endl;
    }
    else{
        cout << "File open successfully." << endl;
        char ch;
        while(obj.is_open()){
            obj >> ch;
            if(obj.eof()){
                break;
            }
            else{
                cout << ch;
            }
        }
    }
    obj.close();

    return 0;
}