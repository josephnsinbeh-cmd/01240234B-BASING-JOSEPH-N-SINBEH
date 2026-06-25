#include <iostream>
using namespace std;

int main() {
    double line1, line2, line3, average;

    // Loop through 6 sets
    for (int set = 1; set <= 6; set++) {
        cout << "\nEnter currents for set " << set << " (Line1, Line2, Line3): ";
        cin >> line1 >> line2 >> line3;

        average = (line1 + line2 + line3) / 3.0;
        cout << "Average current for set " << set << " = " << average << " A" << endl;
    }

    return 0;
}
