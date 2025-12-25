#include <iostream>
#include <limits>

using namespace std;

struct Values {
  int option;
  float operand1;
  float operand2;
};

struct FollowingValues {
  int option;
  float operand2;
};

void showHomeMenu();
void openCalculator(float &total, bool &mainLoop);
Values getInput();
void calculations(const Values &input, float &total);
char showMenu();
Values getInput1(float runningTotal);
void calculations1(Values &input, float &total);

char continueReply;
float grandTotal;

int main() {
  float total;
  int homeOption = 0;
  bool mainLoop = true;

  while (mainLoop == true) {
    showHomeMenu();
    cout << "Option: ";
    cin >> homeOption;

    if (cin.fail()) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "Enter a valid option from 1-3!" << endl;
      continue;
    }

    if (homeOption < 0 || homeOption > 3) {
      cout << "Enter a valid option from 1-3!" << endl;
      continue;
    }

    switch (homeOption) {
    case 1: {
      openCalculator(total, mainLoop);
      mainLoop = false;
      break;
    }
    case 2: {
    }
    case 3: {
      cout << "Bye" << endl;
    }
    default:
      break;
    }
  }
}

void showHomeMenu() {
  cout << "Simple Calculator" << endl;
  cout << "1. Open Calculator \n2. Enter TUI Mode (wip) \n3. Exit" << endl;
}

void openCalculator(float &total, bool &mainLoop) {
  Values input = getInput();
  calculations(input, total);
  continueReply = showMenu();
  if (continueReply == 'n') {
    cout << "Bye!" << endl;
    return;
  }
  cout << total << endl;
  bool loop = true;
  while (loop == true) {
    Values input = getInput1(total);
    calculations1(input, total);
    continueReply = showMenu();
    if (continueReply == 'n') {
      cout << "Bye" << endl;
      break;
    }
  }
}

char showMenu() {
  char reply;
  cout << "Continue? [y/N]";
  cin >> reply;

  return tolower(reply);
}

Values getInput() {
  Values input;

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

void calculations(const Values &input, float &total) {
  switch (input.option) {
  case 1:
    total = input.operand1 + input.operand2;
    cout << "The result is " << total << endl;
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
  grandTotal += total;
}

Values getInput1(float runningTotal) {
  Values input1;

  input1.operand1 = runningTotal;

  cout << "\n Select operation:" << endl;
  cout << "1. Add: +" << endl;
  cout << "2. Subtract: -" << endl;
  cout << "3. Multiply: *" << endl;
  cout << "4. Divide: /" << endl;
  cout << "Your option: ";
  cin >> input1.option;

  cout << "\n Enter operand2: ";
  cin >> input1.operand2;

  return input1;
}

void calculations1(Values &input, float &total) {
  input.operand1 = total;

  switch (input.option) {
  case 1:
    total = input.operand1 + input.operand2;
    cout << "The result is " << total << endl;
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
  grandTotal += total;
}
