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
