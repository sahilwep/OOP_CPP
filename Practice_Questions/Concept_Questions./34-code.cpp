// 33. W.A.P to show the concept of writing into a file.

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
        demo_file <<  "My name is Sahil" ; 
        cout << "written successfully!" << endl;
        
    }
    demo_file.close();
};

/*

// method 2 : 

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string values = "My name is Sahil";
    fstream demo_file;
    demo_file.open("demo_file.txt", ios::out);
    if(!demo_file){
        cout << "file not created" ;        
    }
    else{
        cout << "file created"  << endl;
        cout << "file found successfully!" << endl;
        demo_file << values; 
        cout << "written successfully!" << endl;
        
    }
    demo_file.close();
};


*/