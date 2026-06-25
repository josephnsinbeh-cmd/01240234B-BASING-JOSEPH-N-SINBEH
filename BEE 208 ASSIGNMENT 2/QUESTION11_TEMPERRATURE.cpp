#include <iostream>
using namespace std;

int main() {
    double temperature;

    cout << "Enter motor temperature (°C): ";
    cin >> temperature;

    while (temperature <= 90) {
        cout << "Motor temperature = " << temperature << " °C" << endl;
        cout << "Enter next temperature reading: ";
        cin >> temperature;
    }

    cout << "Motor temperature unsafe. Stop motor test." << endl;

    return 0;
}
