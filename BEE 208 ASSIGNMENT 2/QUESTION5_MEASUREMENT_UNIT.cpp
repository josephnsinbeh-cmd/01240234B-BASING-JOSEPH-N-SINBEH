#include <iostream>
using namespace std;

int main() {
    int choice;
    double value, result;

    cout << "Measurement Unit Conversion Menu:\n";
    cout << "1. Convert volts to millivolts\n";
    cout << "2. Convert amperes to milliamperes\n";
    cout << "3. Convert kilowatts to watts\n";
    cout << "4. Convert ohms to kilo-ohms\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the value: ";
    cin >> value;

    switch(choice) {
        case 1:
            result = value * 1000;
            cout << value << " volts = " << result << " millivolts" << endl;
            break;
        case 2:
            result = value * 1000;
            cout << value << " amperes = " << result << " milliamperes" << endl;
            break;
        case 3:
            result = value * 1000;
            cout << value << " kilowatts = " << result << " watts" << endl;
            break;
        case 4:
            result = value / 1000;
            cout << value << " ohms = " << result << " kilo-ohms" << endl;
            break;
        default:
            cout << "Invalid selection." << endl;
    }

    return 0;
}
