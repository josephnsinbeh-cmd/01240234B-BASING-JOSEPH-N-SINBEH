#include <iostream>
using namespace std;

int main() {
    double reading, total = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter power reading " << i << ": ";
        cin >> reading;

        if (reading < 0) {
            cout << "Invalid reading skipped." << endl;
            continue;  // skip this reading
        }

        total += reading;
    }

    cout << "Total of valid readings = " << total << " W" << endl;

    return 0;
}
