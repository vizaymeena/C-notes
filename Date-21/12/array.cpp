// Saturday - Date:21/12/2024
// -- Duplicate value , Unique value , frequency count of duplicate array elements
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] ={1,2,3,4,1,2,3};
//     for(int i=0;i<7;++i){
//         int count=1;
//         for(int j=i+1;j<7;++j){
//             if(arr[i]==arr[j]){
//                 ++count;
//                 arr[j]=-1;
//             }
//         }
//     }
//     if(arr[i]=-1)
//     cout<<"the frequency of"<<arr[i]<<"is"<<count<<"\n";
// }

// Ques  nth largest number(user asked) in an array ----





// COunt duplicated values nth times

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; ++i) {
        if (arr[i] == -1) continue; // Skip already counted elements

        int count = 1; // Initialize frequency counter
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                ++count;
                arr[j] = -1; // Mark element as counted
            }
        }

        // Print frequency of the current element
        cout << "The frequency of " << arr[i] << " is " << count << "\n";
    }

    return 0;
}
