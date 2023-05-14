// 8. WAP to make a calculator.

#include <iostream>
using namespace std;

class Abc{
    private:
        int result,b;
        int value = 0 ;
    public:
        void calc();
};

void Abc::calc(){
        cout << "\n\t\t[+] Welcome to calculator. \n\n[+] Choose From options : \n\n\t[+] Addition : 1  \n\t[+] Subtraction : 2 \n\t[+] Multiplication : 3 \n\t[+] division : 4 \n\t[+] Exit : 5 \n\t[+] Reset the value : 6 \n";
    x2:
        cout << endl << "[+] value is : 0" << endl;
        cout << "\n[+] Enter the no : ";
        cin >> result;
    x1:
        cout << endl << endl << "\t\t **[  Current Value is : " << result << "  ]** " << endl;
        cout << "\n\n[+] Enter the Option you want to work with : ";
        cin >> value;
    switch (value){
        case 1 :
            cout << "[+] Enter the no that you want to add : ";
            cin >> b;
            result = result + b;
            cout << "\n\t Sum is : " << result ;
            goto x1;
            break;
        case 2 :
            cout << "[+] Enter the no you want to subtract : ";
            cin>> b;
            result = result - b;
            cout << "\n\t Sub is : " << result ;
            goto x1;
            break;
        case 3 :
            cout << "[+] Enter the no that you want to multiply : ";
            cin >> b;
            result = result * b;
            cout << "\n\t Multiply is : " << result ;
            goto x1;
            break;
        case 4 :
            cout << "[+] Enter the no that you want to divide : ";
            cin >> b;
            result = result / b;
            cout << "\n \t Div is : " << result ;
            goto x1;
            break;
        case 5 :
            exit(1);
            break;
        case 6 :
            goto x2;
            exit(1);
        default :
            cout << "\n\n Error input ! ";
            goto x1;
    }

}

int main(void){
    Abc obj;
    obj.calc();

    return 0;
}