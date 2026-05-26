#include <iostream>
#include <limits>

using namespace std;

void displayMenu() {

    cout << "\n=================================\n";
    cout << "        SIMPLE CALCULATOR\n";
    cout << "=================================\n";

    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Exit\n";
}

int main() {

    int choice;
    double num1, num2, result;
    char continueChoice;

    do {

        displayMenu();

        cout << "\nEnter your choice: ";
        cin >> choice;

        if(choice == 5) {

            cout << "\nThank you for using the calculator.\n";
            break;
        }

        cout << "\nEnter first number: ";

        while(!(cin >> num1)) {

            cout << "Invalid input! Please enter a valid number: ";

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "Enter second number: ";

        while(!(cin >> num2)) {

            cout << "Invalid input! Please enter a valid number: ";

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "\n=================================\n";

        // Switch Case for Operations
        switch(choice) {

            case 1:

                result = num1 + num2;

                cout << "Addition Result = "
                     << result << endl;

                break;

            case 2:

                result = num1 - num2;

                cout << "Subtraction Result = "
                     << result << endl;

                break;

            case 3:

                result = num1 * num2;

                cout << "Multiplication Result = "
                     << result << endl;

                break;

            case 4:

                if(num2 == 0) {

                    cout << "Error! Division by zero is not allowed.\n";
                }

                else {

                    result = num1 / num2;

                    cout << "Division Result = "
                         << result << endl;
                }

                break;

            default:

                cout << "Invalid choice! Please select a valid option.\n";
        }

        cout << "=================================\n";

        // Replay Option
        cout << "\nDo you want to perform another calculation? (Y/N): ";
        cin >> continueChoice;

    } while(continueChoice == 'Y' || continueChoice == 'y');

    cout << "\nProgram Ended Successfully.\n";

    return 0;
}