#include<iostream>
using namespace std;

int main() {
    char op;
    double a, b;

    cout << "Enter operator: +, -, *, /: ";
    cin >> op;

    cout << "Enter two operands:";
    cin >> a >> b;

    switch(op) {
      case '+':
          cout << a << "+" << b << "=" << a + b;
      case '-':
          cout << a << "-" << b << "=" << a - b;
      case '*':
          cout << a << "*" << b << "=" << a * b;
      case '/':
          cout << a << "/" << b << "=" << a / b;
          breake;
        
      default:
          cout << "Operator is not correct";
        breake;
    }
    return 0;
}
