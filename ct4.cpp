#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b)
        cout << "Largest = " << a;
    else if (b > a)
        cout << "Largest = " << b;
    else
        cout << "Both numbers are equal";

    return 0;
}