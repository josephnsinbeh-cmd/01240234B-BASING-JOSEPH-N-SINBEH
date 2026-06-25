#include <iostream>
#include <string>
using namespace std;

int main() {
    string code;
    int attempts = 0;

    while (attempts < 3) {
        cout << "Enter laboratory access code: ";
        cin >> code;

        if (code == "BEE208") {
            cout << "Access granted." << endl;
            return 0;  // stop program once correct
        } else {
            attempts++;
            cout << "Incorrect code. Attempts left: " << (3 - attempts) << endl;
        }
    }

    cout << "Access denied. Maximum attempts reached." << endl;
    return 0;
}
