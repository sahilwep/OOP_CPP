// find factorial of any no using while loop function outside the class.

#include <iostream>
using namespace std;

class Abc
{
private:
    int num, result;
    int temp_num = 0;

public:
    void set();
    void fact();
    void sum();
};

void Abc::set()
{
    cout << "Enter the number: ";
    cin >> num;
}

// here we using the while loop which make the value of num is 0 at end, so i used the temp_num...
void Abc::fact()
{
    result = 1;
    // using temp_num (because at end the value of num is 0, this will create a problem if we want to access the num in future function...)
    temp_num = num;
    while (temp_num > 0)
    {
        result = result * temp_num;
        temp_num--;
    }
    cout << "\n factorial is : "<< result;
}

// if number is 5 then, 5+4+3+2+1 => 15

void Abc::sum()
{
    int result = 0;
    for (int i = 0; i <= num; i++)
    {
        result = result + i;
    }
    cout << "\n Sum from 0 to "<<  num << " : " << result;
}

int main(void)
{
    Abc obj;
    obj.set();
    obj.fact();
    obj.sum();

    return 0;
}