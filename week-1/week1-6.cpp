 #include <iostream>
using namespace std;

int main() {
    int num, i, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            count++;
        }
    }

    if(count == 2) {
        cout << "The number is Prime";
    }
    else {
        cout << "The number is Not Prime";
    }

    return 0;
}