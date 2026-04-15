#include <iostream>
using namespace std;

int main() {
    int n, i;
    int *arr;

    cout << "Enter number of elements: ";
    cin >> n;

    arr = new int[n];   // dynamic memory allocation

    cout << "Enter the elements:\n";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The elements of the array are:\n";
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;   // free the allocated memory

    return 0;
}