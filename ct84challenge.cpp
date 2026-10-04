#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, original, digits = 0, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    // Count the number of digits
    int temp = n;
    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    // Calculate Armstrong sum
    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        sum = sum + pow(digit, digits);
        temp = temp / 10;
    }

    if (sum == original) {
        cout << "Armstrong number" << endl;
    } else {
        cout << "Not an Armstrong number" << endl;
    }

    return 0;
}