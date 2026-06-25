#include <iostream>
using namespace std;

int main() {
    int choice;
    double primaryTurns, secondaryTurns, primaryVoltage, secondaryVoltage, result;

    cout << "Transformer Calculation Menu:\n";
    cout << "1. Calculate turns ratio\n";
    cout << "2. Calculate secondary voltage\n";
    cout << "3. Calculate primary voltage\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter primary turns: ";
            cin >> primaryTurns;
            cout << "Enter secondary turns: ";
            cin >> secondaryTurns;
            result = primaryTurns / secondaryTurns;
            cout << "Turns Ratio = " << result << endl;
            break;

        case 2:
            cout << "Enter primary voltage: ";
            cin >> primaryVoltage;
            cout << "Enter primary turns: ";
            cin >> primaryTurns;
            cout << "Enter secondary turns: ";
            cin >> secondaryTurns;
            result = primaryVoltage * secondaryTurns / primaryTurns;
            cout << "Secondary Voltage = " << result << " V" << endl;
            break;

        case 3:
            cout << "Enter secondary voltage: ";
            cin >> secondaryVoltage;
            cout << "Enter primary turns: ";
            cin >> primaryTurns;
            cout << "Enter secondary turns: ";
            cin >> secondaryTurns;
            result = secondaryVoltage * primaryTurns / secondaryTurns;
            cout << "Primary Voltage = " << result << " V" << endl;
            break;

        default:
            cout << "Invalid selection." << endl;
    }

    return 0;
}
