#include <iostream>
using namespace std;

int main() {
    double voltage, current, power;
    char choice;

    do {
        cout << "Enter voltage (V): ";
        cin >> voltage;
        cout << "Enter current (A): ";
        cin >> current;

        power = voltage * current;
        cout << "Power = " << power << " W" << endl;

        cout << "Do you want to continue? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "Program ended." << endl;
    return 0;
}
