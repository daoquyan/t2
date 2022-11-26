#include <iostream>

using namespace std;

double calculate (double num1, char operat, double num2) {
    switch (operat) {
        case '+': return double(num1+num2);
        case '-': return double(num1-num2);
        case '*': return double(num1*num2);
        case '/': return double(num1/num2);
    }
}

int main() {
    int num1, num2;
    char operat;
    cin >> num1 >> operat >> num2;
    cout << calculate(num1, operat, num2) << endl;
    return 0;
}