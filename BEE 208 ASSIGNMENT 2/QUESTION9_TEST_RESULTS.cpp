#include <iostream>
using namespace std;

int main() {
    int result, passed = 0, failed = 0;

    cout << "Enter test results for 15 components (1 = pass, 0 = fail):" << endl;

    for (int i = 1; i <= 15; i++) {
        cout << "Component " << i << ": ";
        cin >> result;

        if (result == 1) {
            passed++;
        } else {
            failed++;
        }
    }

    cout << "Passed components = " << passed << endl;
    cout << "Failed components = " << failed << endl;

    return 0;
}
