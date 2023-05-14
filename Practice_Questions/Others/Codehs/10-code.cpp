// 10. Write a C++ program to update every array element by multiplication of the next and previous values of a given array of integers.

/*
// Input  : arr[] = {2, 3, 4, 5, 6}
// Output : arr[] = {6, 8, 15, 24, 30}

// We get the above output using following
// arr[] = {2*3, 2*4, 3*5, 4*6, 5*6} 

*/

#include<iostream>
using namespace std;

void modify(int arr[], int n)
{
	// Nothing to do when array size is 1
	if (n <= 1){
	    return;
    }
    else {

	// store current value of arr[0] and update it
	    int prev = arr[0];
	    arr[0] = arr[0] * arr[1];

	    // Update rest of the array elements
	    for (int i=1; i<n-1; i++)
	    {
	    	// Store current value of next interaction
	    	int curr = arr[i];

	    	// Update current value using previous value
	    	arr[i] = prev * arr[i+1];

	    	// Update previous value
	    	prev = curr;
	    }
	    // Update last array element
	    arr[n-1] = prev * arr[n-1];
    }
}

int main()
{
	int arr[] = {2, 3, 4, 5, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	modify(arr, n);
	for (int i=0; i<n; i++){
	    cout << arr[i] << " ";
    }
	return 0;
}
