#include <iostream>
using namespace std;

char before(char x) {
    
    if (x >= 'A' && x <= 'Z') {
        if (x == 'A') {
            return 'Z';
        } else {
            return x - 1;
        }
    }
    return '0';
}

int main() {
    char input;
    cout << "Enter a capital letter (A-Z): ";
    cin >> input;

    char result = before(input);
    if (result == '0') {
        cout << "Invalid input! Please enter a capital letter between A and Z." << endl;
    } else {
        cout << "The letter before " << input << " is: " << result << endl;
    }

    return 0;
}
