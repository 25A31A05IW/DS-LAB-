#include <iostream>
using namespace std;

int main() {
    int arr[10], n, i;
    int *ptr;

    cout << "Enter number of elements: ";
    cin >> n;

    ptr = arr;   // pointer points to first element of array

    cout << "Enter the elements:\n";
    for(i = 0; i < n; i++) {
        cin >> *(ptr + i);   // reading using pointer
    }

    cout << "The elements of the array are:\n";
    for(i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";   // printing using pointer
    }

    return 0;
}