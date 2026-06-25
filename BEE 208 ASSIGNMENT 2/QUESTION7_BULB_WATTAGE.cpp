#include <iostream>
using namespace std;

int main() {
    double wattage, totalPower = 0;

    cout << "Enter wattage of 12 lighting points:" << endl;

    for (int i = 1; i <= 12; i++) {
        cout << "Lighting point " << i << ": ";
        cin >> wattage;
        totalPower += wattage;  // add each wattage to total
    }

    cout << "Total Power = " << totalPower << " watts" << endl;

    return 0;
}
