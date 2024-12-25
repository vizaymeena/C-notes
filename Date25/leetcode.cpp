// sum of doublet of two different number in an array equals to the value of user input x integer ??

#include <iostream>
using namespace std;

int main() {
    int nums[4] = {2, 7, 11, 15};
    int tar = 9;

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (nums[i] + nums[j] == tar) {
                cout << nums[i] << " " << nums[j] << endl;
                return 0; // Exit both loops after finding the pair
            }
        }
    }

    cout << "No pair found" << endl; // If no pair adds up to the target
    return 0;
}
