#include <iostream>
using namespace std;

int main() {
    double resistance;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter insulation resistance for component " << i << " (MO): ";
        cin >> resistance;

        if (resistance < 1) {
            cout << "Insulation failure detected. Test stopped." << endl;
            break;  // exit loop immediately
        } else {
            cout << "Insulation reading acceptable." << endl;
        }
    }

    return 0;
}
