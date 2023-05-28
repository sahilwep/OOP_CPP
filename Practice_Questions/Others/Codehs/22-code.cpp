/*
Create a program in C++ to deposit or withdraw some amount
in a bank account with the help of a friend function.
This friend function should be able to access the balance,
which is being declared as private.
Display properly the updated balance before and
after deposit or withdraw.
*/
#include<iostream>
using namespace std;

class Bank{
    private:
        int balance = 0;
        int withdraw;
        int deposited;
    public:
        friend void withdraw_(Bank &obj){
            obj.withdraw = 0;
            cout << endl <<"Enter the amount to withdraw : ";
            cin >> obj.withdraw;
            if(obj.withdraw > obj.balance){
                cout << endl <<  "Invalid withdraw" << endl;
            }
            else{
            obj.balance -= obj.withdraw;
            }
        }
        friend void deposited_(Bank &obj){
            obj.deposited = 0;
            cout << endl << "Enter the amount to deposited : ";
            cin >> obj.deposited;
            obj.balance += obj.deposited;
        }
        friend void balance_(Bank &obj){
            cout << endl << "\t|+>> Account balance is : " << obj.balance;
        }
        friend int bal_if(Bank &obj){
            return obj.balance;
        }
};

int main(void){

    int option;

    // bank user
    Bank u1;
 
        cout << "\n\t\t\tBANK OF INDIA" << endl;
        balance_(u1);
    x1:
        cout << "\n[+] For Deposit : 1 ";
        cout << "\n[+] For Withdraw : 2 ";
        cout << "\n[+] For Exit : 3 ";
        cout << "\n[+] Enter the Options : ";
        cin >> option;
        switch (option)
        {
        case 1:
            deposited_(u1);
            balance_(u1);
            goto x1;
            break;
        case 2:
            if(bal_if(u1) <= 0){
                cout << endl << "ops! \nyou have low balance in your account "<< endl;
                goto x1;
            }
            else{
                withdraw_(u1);
                balance_(u1);
                goto x1;
                break;
            }
            goto x1;
            break;
        case 3:
            cout << "\n\n Thanks for using BOI";
            break;        
        default:
            cout << endl << "Error input!" << endl;
            goto x1;
            break;
        }

    return 0;
}