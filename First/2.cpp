#include <iostream>
using namespace std;

int main() {
    int num1, num2, result;
    string oper;

    cout << "Enter num 1: ";
    cin >> num1;

    cout << "Enter num 2: ";
    cin >> num2;

    cout << "Addition: +\t\tSubtraction: -" << endl
         << "Multiplication *\tDivision: /" << endl
         << "Enter the operation: ";
    cin >> oper;

    if (oper == "+") {
        result = num1 + num2;
    } else if (oper == "-") {
        result = num1 - num2;
    } else if (oper == "*") {
        result = num1 * num2;
    } else if (oper == "/") {
        result = num1 / num2;
    } else {
        cout << "Error: Invalid Operation";
    }

    cout << "----------------" << endl
         << "Result: " << result;
    return 0;
}
