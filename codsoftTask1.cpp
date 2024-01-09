#include <iostream>  // SIMPLE CALCULATOR
using namespace std;
int main()
{
    double a, b;
    char op;
    cout << "Enter the numbers with operation : ";
    cin >> a;
    cin >> op;
    cin >> b;

    switch (op)
    {
    case '+':
        cout << "=" << a + b << endl;
        break;

    case '-':
        cout << "=" << a - b << endl;
        break;

    case '*':
        cout << "=" << a * b << endl;
        break;

    case '/':
        cout << "=" << a / b << endl;
        break;
    default:
        cout << "Invalid Operator" << endl;
    }
    return 0;
}

