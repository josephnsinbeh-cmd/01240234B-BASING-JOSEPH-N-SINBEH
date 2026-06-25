#include <iostream>
using namespace std;

int main() {
    double voltage;

    cout << "Enter solar panel voltage (V): ";
    cin >> voltage;

    while (voltage >= 18) {
        cout << "Solar panel voltage = " << voltage << " V" << endl;
        cout << "Enter next voltage reading: ";
        cin >> voltage;
    }

    cout << "Solar panel voltage below operating level." << endl;

    return 0;
}
