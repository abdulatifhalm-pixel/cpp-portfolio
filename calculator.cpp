#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

void clear_stdin() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

double get_number(const string &prompt) {
    double x;
    while (true) {
        cout << prompt;
        if (cin >> x) return x;
        cout << "Invalid number, try again.\n";
        clear_stdin();
    }
}

int main() {
    cout << "Simple C++ Calculator\n";
    cout << "Supported operations: +  -  *  /  ^  % (mod for integers)\n";
    cout << "Type 'q' at the menu to quit.\n\n";

    while (true) {
        cout << "Menu:\n";
        cout << "  1) Add (+)\n";
        cout << "  2) Subtract (-)\n";
        cout << "  3) Multiply (*)\n";
        cout << "  4) Divide (/)\n";
        cout << "  5) Power (^)\n";
        cout << "  6) Modulo (%) (integers)\n";
        cout << "  q) Quit\n";
        cout << "Choose an option: ";

        string choice;
        if (!(cin >> choice)) break;
        if (choice == "q" || choice == "Q") break;

        if (choice >= "1" && choice <= "6") {
            int op = stoi(choice);
            double a = get_number("Enter first number: ");
            double b = get_number("Enter second number: ");

            switch (op) {
                case 1:
                    cout << "Result: " << (a + b) << "\n\n";
                    break;
                case 2:
                    cout << "Result: " << (a - b) << "\n\n";
                    break;
                case 3:
                    cout << "Result: " << (a * b) << "\n\n";
                    break;
                case 4:
                    if (b == 0) cout << "Error: division by zero\n\n";
                    else cout << "Result: " << (a / b) << "\n\n";
                    break;
                case 5:
                    cout << "Result: " << pow(a, b) << "\n\n";
                    break;
                case 6: {
                    // modulo: convert to long long for integer modulus
                    long long ai = static_cast<long long>(a);
                    long long bi = static_cast<long long>(b);
                    if (bi == 0) cout << "Error: modulo by zero\n\n";
                    else cout << "Result: " << (ai % bi) << "\n\n";
                    break;
                }
                default:
                    cout << "Unknown option\n\n";
            }
        } else {
            cout << "Invalid choice, try again.\n\n";
        }

        clear_stdin();
    }

    cout << "Goodbye!\n";
    return 0;
}