
//--->> Armstrong number <<----

#include <iostream>
using namespace std;

int main() {
    int num = 153; // The number to check
    int original = num; // Save the original number
    int rv = 0;
    int ogl = 0;

    while (num > 0) {
        rv = num % 10;          // Get the last digit
        ogl += rv * rv * rv;    // Add the cube of the digit [ogl = ogl+rv*rv*rv]
        num /= 10;              // Remove the last digit [num = num/10]
    }
    if (original == ogl)
        cout << "Armstrong Number" << endl;
    else
        cout << "Not an Armstrong Number" << endl;
}
