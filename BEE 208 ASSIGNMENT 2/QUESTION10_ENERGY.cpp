#include <iostream>
using namespace std;

int main() {
    double power, time, energy, totalEnergy = 0;

    cout << "Enter power rating (W) and usage time (hours) for 8 appliances:" << endl;

    for (int i = 1; i <= 8; i++) {
        cout << "Appliance " << i << " - Power (W): ";
        cin >> power;
        cout << "Appliance " << i << " - Time (hours): ";
        cin >> time;

        energy = power * time;
        totalEnergy += energy;
    }

    cout << "Total Energy = " << totalEnergy << " Wh" << endl;

    return 0;
}
