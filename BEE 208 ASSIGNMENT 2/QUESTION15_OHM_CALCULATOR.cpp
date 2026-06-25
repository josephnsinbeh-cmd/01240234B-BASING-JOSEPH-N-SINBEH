#include <iostream>
using namespace std;

int main() {
    double voltage, current, resistance;
    char choice;

    do {
        cout << "Enter voltage (V): ";
        cin >> voltage;
        cout << "Enter current (A): ";
        cin >> current;

        if (current != 0) {
            resistance = voltage / current;
            cout << "Resistance = " << resistance << " Ohms" << endl;
        } else {
            cout << "Current cannot be zero." << endl;
        }

        cout << "Do you want to continue? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "Program ended." << endl;
    return 0;
}
