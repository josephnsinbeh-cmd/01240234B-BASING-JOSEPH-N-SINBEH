#include <iostream>
using namespace std;

int main() {
    double reading, sum = 0;
    int count = 0;

    for (int i = 1; i <= 12; i++) {
        cout << "Enter sensor reading " << i << ": ";
        cin >> reading;

        if (reading == 999) {
            cout << "Faulty sensor reading skipped." << endl;
            continue;  // skip this reading
        }

        sum += reading;
        count++;
    }

    if (count > 0) {
        double average = sum / count;
        cout << "Average of valid readings = " << average << endl;
    } else {
        cout << "No valid readings entered." << endl;
    }

    return 0;
}
