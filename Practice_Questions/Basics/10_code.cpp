// make a program to calculate the electricity bill of a person?
/*
    1 to 100 unit =>  rs 10/unit 
    100 to 200 unit =>  rs 15/unit
    200 to 300 unit =>  rs 20/unit
    above 300 unit =>  rs 25/unit

*/

#include<iostream>
using namespace std;

class Abc{
private:
    int unit;

public:
    void details();
    void input();
    void calc();

};

void Abc::details(){
    cout << "\n [+] Price Details :- ";
    cout << "\n 1 to 100 unit =>  rs 10/unit \n 100 to 200 unit =>  rs 15/unit \n 200 to 300 unit =>  rs 20/unit \n above 300 unit =>  rs 25/unit " ;
}

void Abc::input(){
    cout << "\n\n Enter the Unit : ";
    cin >> unit; 
}

void Abc::calc(){
    if(unit<=100){
        cout << "\n Total consumed is Rs. "<< unit*10;
    }
    else if(unit>100 && unit<=200){
        cout << "\n Total consumed is Rs "<< unit*15;
    }
    else if(unit>200 && unit<=300){
        cout << "\n Total consumed is Rs "<< unit*20;
    }
    else{
        cout << "\n Total consumed is Rs "<< unit*25;
    }
}

int main(void){

    Abc obj;
    obj.details();
    obj.input();
    obj.calc();

    return 0;
}