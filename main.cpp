#include <iostream>
#include <cmath>

using namespace std;

// Function prototypes
void displayMenu();
void performOperation(int choice);

int main() {
    int choice;

    while (true) {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            break;
        }

        performOperation(choice);
    }

    cout << "Thank you for using the calculator. Goodbye!" << endl;

    return 0;
}

// Function to display the menu
void displayMenu() {
    cout << "Scientific Calculator Menu" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Sine" << endl;
    cout << "6. Cosine" << endl;
    cout << "7. Tangent" << endl;
    cout << "8. Natural Logarithm" << endl;
    cout << "9. Logarithm base 10" << endl;
    cout << "10. Exponential" << endl;
    cout << "0. Exit" << endl;
}

// Function to perform the chosen operation
void performOperation(int choice) {
    double num1, num2, result;

    switch (choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            }
            break;
        case 5:
            cout << "Enter an angle in radians: ";
            cin >> num1;
            result = sin(num1);
            cout << "Result: " << result << endl;
            break;
        case 6:
            cout << "Enter an angle in radians: ";
            cin >> num1;
            result = cos(num1);
            cout << "Result: " << result << endl;
            break;
        case 7:
            cout << "Enter an angle in radians: ";
            cin >> num1;
            result = tan(num1);
            cout << "Result: " << result << endl;
            break;
        case 8:
            cout << "Enter a number: ";
            cin >> num1;
            if (num1 <= 0) {
                cout << "Error: Natural logarithm is defined for positive numbers only." << endl;
            } else {
                result = log(num1);
                cout << "Result: " << result << endl;
            }
            break;
        case 9:
            cout << "Enter a number: ";
            cin >> num1;
            if (num1 <= 0) {
                cout << "Error: Logarithm base 10 is defined for positive numbers only." << endl;
            } else {
                result = log10(num1);
                cout << "Result: " << result << endl;
            }
            break;
        case 10:
            cout << "Enter a number: ";
            cin >> num1;
            result = exp(num1);
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
    }
}
