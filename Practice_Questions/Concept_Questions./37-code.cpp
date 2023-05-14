#include<iostream>
#include<fstream>
using namespace std;

int main(void){
    fstream demo_file;
    // writing from a file...
    // if not exist creating else & opening the file..
    demo_file.open("demo_file_1.txt",ios::out);
    if(!demo_file){
        cout << "File not created.." << endl;
    }
    else{
        cout << "File Created.." << endl;
        // writing into a file.
        demo_file<< "My name is Sahil";
        // close the file after writing
        demo_file.close();
    }
   
    // reading a file...
    demo_file.open("demo_file_1.txt", ios::in);
    if(!demo_file){
        cout << "File not found"<< endl;
    }
    else{
        // read the file
        cout << "file open successfully..."<< endl;
        while(1){
            char ch;
            // sending the every character from file into the variable.. 
            demo_file>>ch;
            // condition for exit...
            if(demo_file.eof()){
                break;
            }
            else{
                cout << ch;
            }
        }
    // closing the file..
    }
    demo_file.close();

    return 0;
}