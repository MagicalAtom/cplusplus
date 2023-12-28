#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main(){
    int number1, number2, result;
    char operatorChar;

    cout << "Please insert number 1: ";
    cin >> number1;

    cout << "Please insert an operator (+, -, /, *): ";
    cin >> operatorChar;

    cout << "Please insert number 2: ";
    cin >> number2;

    cout << "Show answer after 2 seconds..." << endl;

    // Perform the operation based on the input operator
    switch(operatorChar) {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '/':
            // Check for division by zero
            if(number2 != 0) {
                result = number1 / number2;
            } else {
                cout << "Error: Division by zero!" << endl;
                return 1; // Early return with error code
            }
            break;
        case '*':
            result = number1 * number2;
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
            return 1; // Early return with error code
    }

    // Wait for 2 seconds before showing the result
    this_thread::sleep_for(chrono::seconds(2));

    cout << "Your answer ======> : " << result << endl;

    return 0;
}
