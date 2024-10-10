#include <iostream>
using namespace std;

int main()
 {
    char value;
    float num1, num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> value;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(value) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "error,can't divide by zero: " << endl;
            break;
        default:
            cout << "Invalid operator." << endl;
            break;
    }

}
