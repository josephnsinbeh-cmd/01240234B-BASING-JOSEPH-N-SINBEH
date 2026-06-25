#include <iostream>
using namespace std;

int main() {
    double resistance;

    cout << "Enter earth resistance (Ohms): ";
    cin >> resistance;

    while (resistance <= 5) {
        cout << "Earth resistance = " << resistance << " Ohms" << endl;
        cout << "Enter next resistance reading: ";
        cin >> resistance;
    }

    cout << "Earth resistance too high. Improve earthing system." << endl;

    return 0;
}
