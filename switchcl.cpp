#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "enter: number op number\n";
    cin >> a >> op >> b;

    switch (op) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            if (b == 0)
                cout << "cannot divide by zero" << endl;
            else
                cout << a / b << endl;
            break;
        default:
            cout << "unknown operator" << endl;
    }

    return 0;
}