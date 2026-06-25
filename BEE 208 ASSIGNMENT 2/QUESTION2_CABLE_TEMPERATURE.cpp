#include <iostream>
using namespace std;

int main() {
    double temperature;
    cout << "Enter cable temperature (°C): ";
    cin >> temperature;

    if (temperature > 70) {
        cout << "Cable overheating detected." << endl;
    } else {
        cout << "Cable temperature is within safe range." << endl;
    }

    return 0;
}
