#include <iostream>

using namespace std;

int main() {
    float operand1, operand2 = 0;
    int option;
    float sum, diff, prod, quot;

    cout << "Enter operand1: ";
    cin >> operand1;
    
    cout << "\n Select operation:" << endl;
    cout << "1. Add: +" << endl;
    cout << "2. Subtract: -" << endl;
    cout << "3. Multiply: *" << endl;
    cout << "4. Divide: /" << endl;
    cout << "Your option: ";
    cin >> option; 

    cout << "\n Enter operand2: ";
    cin >> operand2;    

    switch (option) {
    case 1:
        sum = operand1 + operand2;
        cout << "The result is "  << sum << endl;
        break;
    case 2:
        diff = operand1 - operand2;
        cout << "The result is " << diff << endl;
        break;
    case 3:
        prod = operand1 * operand2;
        cout << "The result is " << prod << endl;
        break;
    case 4:
        quot = operand1 / operand2;
        cout << "The result is " << quot << endl;
        break;
    default:
        cout << "Invalid option. Choose a valid option.";
        break;
    }

    return 0;
}