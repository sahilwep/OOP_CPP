// 6. Write C++ Program to Find the Frequency of Odd & Even Numbers in the given Matrix.

#include <iostream>
using namespace std;


class Abc{
    private:
        int arr[3][3];
        int count;
    public:
        void input(){
            for(int i = 0;i<3;i++){
                for(int j = 0;j<3;j++){
                    cout << "Enter the array[" << i << " ][" << j <<"] of : ";
                    cin>>arr[i][j];
                }
            }
        }

        void print(){
            for(int i = 0;i<3;i++){
                for(int j = 0;j<3;j++){
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
        cout << endl;
        }

        void even(){
            count = 0;
            cout << endl << "Even array elements : ";
            for(int i = 0;i<3;i++){
                for(int j = 0;j<3;j++){
                    if(arr[i][j]%2 == 0 ){
                        cout << arr[i][j] << " ";
                        count++;
                    }
                }
            }
            cout << endl << count << " times even comes." << endl;
        }

        void odd(){
            count = 0;
            cout << endl << "Odd array elements : ";
            for(int i = 0;i<3;i++){
                for(int j = 0;j<3;j++){
                    if(arr[i][j]%2 != 0 ){
                        cout << arr[i][j] << " ";
                        count++;
                    }
                }
            }
            cout << endl << count << " times odd comes." << endl;
        }

};

int main(void){
    Abc obj;
    obj.input();
    obj.print();
    obj.odd();
    obj.even();

    return 0;
}