// 4. C++ Program to sort an array elements in ascending order.

#include <iostream>
using namespace std;

class Abc{
    private:
        int arr[6];
        int n = sizeof(arr)/ sizeof(arr[0]);
        int temp;
    public:
        void sort();
        void input();
        void print();
};

void Abc::sort(){
    for(int i = 0 ;i < n ;i++){ 
        for(int j = i + 1 ; j < n ; j++){
            if(arr[j] < arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

}

void Abc::input(){
    for(int i =0;i<n;i++){
        cout << "Enter the arr[" <<  i << "] : ";
        cin >> arr[i];
    }
}
void Abc::print(){
    cout << endl << "Sorted array[] is : ";
    for(int i =0;i<n ;i++){
        cout <<  arr[i] << " ";
    }
}
int main(){
    Abc obj;
    obj.input();
    obj.sort();
    obj.print();

    return 0;
}