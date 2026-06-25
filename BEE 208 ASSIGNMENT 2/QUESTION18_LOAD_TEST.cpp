#include <iostream>
using namespace std;

int main() {
    double power, totalLoad = 0;

    for (int i = 1; i <= 20; i++) {
        cout << "Enter power rating for appliance " << i << " (W): ";
        cin >> power;

        totalLoad += power;

        if (totalLoad > 5000) {
            cout << "Maximum load exceeded. Stop adding appliances." << endl;
            break;  // exit loop immediately
        }
    }

    cout << "Final total load = " << totalLoad << " W" << endl;

    return 0;
}
