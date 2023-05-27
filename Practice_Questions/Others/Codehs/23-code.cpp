//  Create a program to check Palindrome of a number along with string using function overloading. Display the result before and after (Note: Variable should be privately declared.)
/*
Palindrome :
    example of palindrome : 121, 12321, 11311,99899
    not palindrome : 123, 124, 1342

    logic : 
     if no is 123 -> then rev is : 321 
     same if no is 121 -> then rev is : 121 .
     so if the previous no and after rev is equal then no is palindrome. 

    reversing any no : 
        ex : num = 123
            while(num!=0){
                int rem = num % 10;
                int rev = rev * 10 + rem;
                num = num / 10;
            }
            
*/

#include<iostream>
using namespace std;

class Abc{
    private:
        int x;
        int temp;
        int rem, rev = 0;
    public:
        void input(){
            cout << "Enter the no : ";
            cin >> x;
        }
        void check(){
            temp = x;
            while(temp!=0){
                rem = temp % 10;
                rev = rev*10 + rem;
                temp = temp / 10;
            }
            if(rev == x){
                cout << "Number is palindrome." << endl;  
            }
            else{
                cout << "Number is not palindrome." << endl;  
            }

        }

};

int main(void){
    Abc obj;
    obj.input();
    obj.check();

    return 0;
}