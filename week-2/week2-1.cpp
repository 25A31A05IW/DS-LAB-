#include <iostream>
using namespace std;

int main() {
    int arr[10], n, i;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter the elements:\n";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The elements of the array are:\n";
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}