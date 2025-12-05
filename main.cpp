#include <iostream>

using namespace std;

struct passedValues
{
    int option;
    float operand1;
    float operand2;

};

void showHomeMenu();
passedValues getInput();
void operationCalculations(const passedValues& input, float total);
char showMenu();

char continueReply;
float grandTotal;

int main() {
    float total;    
    bool loop = true;
    while (loop == true)
    {
        passedValues input = getInput();
        operationCalculations(input,total);
        continueReply = showMenu();
        if (continueReply == 'n')
            {
                cout << "Bye!" << endl;
                break;
            }
    }
}




void showHomeMenu() {
    cout << "Simple Calculator" << endl;
    cout << "Options:" << endl;
    cout << "1. Open Calculator \n2. Enter TUI Mode \n3. Exit" << endl;
}

char showMenu() {
    char reply;
    cout << "Continue? [y/N]";
    cin >> reply;
    
    return tolower(reply);
}

passedValues getInput() {
    passedValues input;

    cout << "Enter operand1: ";
    cin >> input.operand1;
    
    cout << "\n Select operation:" << endl;
    cout << "1. Add: +" << endl;
    cout << "2. Subtract: -" << endl;
    cout << "3. Multiply: *" << endl;
    cout << "4. Divide: /" << endl;
    cout << "Your option: ";
    cin >> input.option; 

    cout << "\n Enter operand2: ";
    cin >> input.operand2;

    return input;
}

void operationCalculations(const passedValues& input, float total) 
{
    switch (input.option) {
    case 1:
        total = input.operand1 + input.operand2;
        cout << "The result is "  << total << endl;
        break;
    case 2:
        total = input.operand1 - input.operand2;
        cout << "The result is " << total << endl;
        break;
    case 3:
        total = input.operand1 * input.operand2;
        cout << "The result is " << total << endl;
        break;
    case 4:
        total = input.operand1 / input.operand2;
        cout << "The result is " << total << endl;
        break;
    default:
        cout << "Invalid option. Choose a valid option.";
        break;
    }
}