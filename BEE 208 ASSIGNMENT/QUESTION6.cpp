#include <iostream>
#include <cctype>  // for isupper()
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (isupper(ch) && ch >= 'A' && ch <= 'Z')
        cout << "Uppercase letter" << endl;
    else
        cout << "Not an uppercase letter" << endl;

    return 0;
}
