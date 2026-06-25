#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Fuse Rating Menu:\n";
    cout << "1. 5 A Fuse\n";
    cout << "2. 10 A Fuse\n";
    cout << "3. 13 A Fuse\n";
    cout << "4. 20 A Fuse\n";
    cout << "5. 32 A Fuse\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "5 A Fuse - Suitable for small appliances (radios, lamps)." << endl;
            break;
        case 2:
            cout << "10 A Fuse - Suitable for medium appliances (TVs)." << endl;
            break;
        case 3:
            cout << "13 A Fuse - Suitable for heavy appliances (refrigerators, microwaves)." << endl;
            break;
        case 4:
            cout << "20 A Fuse - Suitable for large appliances (air conditioners)." << endl;
            break;
        case 5:
            cout << "32 A Fuse - Suitable for high-power circuits (cookers)." << endl;
            break;
        default:
            cout << "Invalid selection." << endl;
    }

    return 0;
}
