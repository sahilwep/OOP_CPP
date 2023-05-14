// 9. Write C++ program to print number of days in a month using switch case


#include <iostream>
using namespace std;

class Abc{
private: 
    int month;
public:
    void set(){
        cout << "\nEnter the Month : ";
        cin >> month;
    }
    void months(){
        switch(month){
            case 1 :
                cout << "January has 31 days";
                break;
            case 2 :
                cout << "Feburary has 28 days depending on leap year it has also 29 days.";
                break;
            case 3 :
                cout << "March has 31 days";
                break;
            case 4 :
                cout << "April has 30 days";
                break;
            case 5 :
                cout << "May has 31 days";
                break;
            case 6 :
                cout << "June has 30 days";
                break;
            case 7 :
                cout << "July has 31 days";
                break;
            case 8 :
                cout << "August has 30 days";
                break;
            case 9 :
                cout << "September has 31 days";
                break;
            case 10 :
                cout << "October has 30 days";
                break;
            case 11 :
                cout << "November has 31 days";
                break;
            case 12 :
                cout << "December has 31 days";
                break;
            default : 
                cout << "invlaid input";
                break;
        }
    }
  
};

int main()
{
    Abc obj;
    obj.set();
    obj.months();
    
    return 0;
}